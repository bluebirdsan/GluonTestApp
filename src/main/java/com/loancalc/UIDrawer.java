// Arminas Dobrodejevas

package com.loancalc;

import javafx.collections.FXCollections;
import javafx.scene.Group;
import javafx.scene.chart.LineChart;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;
import javafx.scene.control.TableView;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Function;

public class UIDrawer {
    Group root;
    LineChart<Number, Number> anuitetoChart;
    LineChart<Number, Number> linearChart;

    TableView<TableEntry> table;

    Loan loan;

    List<TableEntry> entriesList = new java.util.ArrayList<>(List.of());

    UIDrawer(Group root) {
        this.root = root;

        init();
    }

    private void init() {
        initAnuitetoChart();
        initLinearChart();
    }

    private void initAnuitetoChart() {
        NumberAxis xAxis = new NumberAxis();
        NumberAxis yAxis = new NumberAxis();
        xAxis.setLabel("Month");
        yAxis.setLabel("Money");

        LineChart<Number, Number> lineChart = new LineChart<Number, Number>(xAxis, yAxis);
        lineChart.setTitle("Anuiteto");

        lineChart.setLayoutX(450);
        lineChart.setLayoutY(0);
        lineChart.setScaleX(1.3);
        lineChart.setScaleY(1.3);
        lineChart.setLegendVisible(false);
        lineChart.setAnimated(false);

        anuitetoChart = lineChart;
        root.getChildren().add(anuitetoChart);
    }

    private void initLinearChart() {
        NumberAxis xAxis = new NumberAxis();
        NumberAxis yAxis = new NumberAxis();
        xAxis.setLabel("Month");
        yAxis.setLabel("Money");

        LineChart<Number, Number> lineChart = new LineChart<Number, Number>(xAxis, yAxis);
        lineChart.setTitle("Linear");

        lineChart.setLayoutX(450);
        lineChart.setLayoutY(0);
        lineChart.setScaleX(1.3);
        lineChart.setScaleY(1.3);
        lineChart.setLegendVisible(false);
        lineChart.setAnimated(false);

        linearChart = lineChart;
        root.getChildren().add(linearChart);
        linearChart.setVisible(false);
    }

    public void updateUI(Loan loan) {
        this.loan = loan;
        if (loan.type == LoanType.ANUITETO) {
            updateAnuiteto();
        }
        else if (loan.type == LoanType.LINEAR) {
            updateLinear();
        }
    }

    double round(double value, int decimals) {
        return ((double)(int)(Math.pow(10, Math.max(decimals, 0)) * value)) / Math.pow(10, Math.max(decimals, 0));
    }

    private void updateAnuiteto() {
        linearChart.setVisible(false);
        anuitetoChart.setVisible(true);
        anuitetoChart.getData().clear();
        XYChart.Series<Number, Number> series = new XYChart.Series<>();

        int months = loan.years * 12 + loan.months;
        double annuityFactor = (1 - Math.pow(1 + loan.interest, -months)) / loan.interest;
        double installment = round(loan.sum / annuityFactor, 2);
        double fullCost = installment * months;

        entriesList = new java.util.ArrayList<>(List.of());
        double paid = installment;

        int pausedMonths = (loan.resumeMonth == 0 || loan.pauseMonth == 0 ? 0 : (loan.resumeMonth - loan.pauseMonth + 1));

        for(int i = 1; i <= months + Math.max(pausedMonths, 0); i++) {
            if(i >= loan.pauseMonth && i <= loan.resumeMonth)
                continue;
            series.getData().add(new XYChart.Data<>(i, installment));
            entriesList.add(new TableEntry(i, round(paid, 2), installment, loan.interest, round(fullCost - paid, 2)));
            paid += installment;
        }

//        if(!entriesList.isEmpty())
//            entriesList.getLast().sumLeftProperty().setValue();
        anuitetoChart.getData().add(series);

        table.setItems(FXCollections.observableArrayList(entriesList));
    }

    private void updateLinear() {
        anuitetoChart.setVisible(false);
        linearChart.setVisible(true);
        linearChart.getData().clear();
        XYChart.Series<Number, Number> series = new XYChart.Series<>();

        int months = loan.years * 12 + loan.months;
        double installment = (loan.sum * (loan.interest / 12) * Math.pow(1 + loan.interest / 12, months)) / (Math.pow(1 + loan.interest / 12, months) - 1) * 2;
//        double installment = round(loan.sum / months, 2);
        double principal = loan.sum;
        double fullCost = 0;

        for(int i = 1; i <= months; i++) {
            principal -= round(installment + principal * (loan.interest / 12), 2);
            fullCost += round(installment + principal * (loan.interest / 12), 2);
        }

        entriesList = new java.util.ArrayList<>(List.of());
        principal = loan.sum;
        double paid = round(installment + principal * (loan.interest / 12), 2);

        for(int i = 1; i <= months; i++) {
            if(i >= loan.pauseMonth && i <= loan.resumeMonth)
                continue;
            series.getData().add(new XYChart.Data<>(i, installment + principal * (loan.interest / 12)));
            principal -= round(installment + principal * (loan.interest / 12), 2);
            entriesList.add(new TableEntry(i, round(paid, 2), round(installment + principal * (loan.interest / 12), 2), loan.interest / 12, round(fullCost - paid, 2)));
            paid += round(installment + principal * (loan.interest / 12), 2);
        }

//        if(!entriesList.isEmpty())
//            entriesList.getLast().sumLeftProperty().setValue("0");
        linearChart.getData().add(series);

        table.setItems(FXCollections.observableArrayList(entriesList));
    }

    public void saveFile() {
        try {
            saveInternal();
        } catch (FileNotFoundException ex) {
            throw new RuntimeException(ex);
        }
    }

    private void saveInternal() throws FileNotFoundException {
        List<String[]> data = new ArrayList<>();
        String[] names = new String[5];
        names[0] = "Month";
        names[1] = "Sum paid";
        names[2] = "Month payment";
        names[3] = "Month interest";
        names[4] = "Sum left";
        data.add(names);
        for (TableEntry t : entriesList) {
            String[] rowData = new String[5];
            rowData[0] = t.getMonth();
            rowData[1] = t.getSumPaid();
            rowData[2] = t.getMonthPayment();
            rowData[3] = t.getMonthInterest();
            rowData[4] = t.getSumLeft();
            data.add(rowData);
        }

        File csvOutputFile = new File(loan.type.toString() + ".csv");
        try (PrintWriter pw = new PrintWriter(csvOutputFile)) {
            data.stream()
                    .map((Function<String[], Object>) strings -> String.join(",", strings))
                    .forEach(pw::println);
        }
    }
}
