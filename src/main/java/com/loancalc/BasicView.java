package com.loancalc;

import com.gluonhq.charm.glisten.control.AppBar;
import com.gluonhq.charm.glisten.mvc.View;
import javafx.beans.property.SimpleStringProperty;
import javafx.beans.property.StringProperty;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.geometry.Insets;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.CornerRadii;
import javafx.scene.paint.Color;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import java.util.List;
import java.util.Objects;

enum LoanType {
    ANUITETO,
    LINEAR;
}

class Loan {
    public LoanType type;
    public double interest;
    public double sum;
    public int years;
    public int months;
    public int pauseMonth;
    public int resumeMonth;

    Loan() {
        this(LoanType.ANUITETO, 0, 0, 0, 0);
    }

    Loan(LoanType type, double sum, double interest, int years, int months) {
        if(sum < 0)
            sum = 0;
        if(sum % 0.01 != 0) {
            int t = (int)sum;
            sum -= t;
            sum *= 100;
            sum = (int)sum;
            sum /= 100;
            sum += t;
        }
        this.sum = sum;

        if(years < 0)
            years = 0;
        this.years = years;

        if(months < 0 || months > 11)
            months = 0;
        this.months = months;

        this.type = type;

        if(interest < 0)
            interest = 0;
        this.interest = interest;
    }

    void interest(String value) {
        interest = Double.parseDouble(Objects.equals(value, "") ? "0" : value);
        if(interest < 0)
            interest = 0;
    }

    void sum(String value) {
        sum = Double.parseDouble(Objects.equals(value, "") ? "0" : value);
        if(sum < 0)
            sum = 0;
        if(sum % 0.01 != 0) {
            int t = (int)sum;
            sum -= t;
            sum *= 100;
            sum = (int)sum;
            sum /= 100;
            sum += t;
        }
    }

    void years(String value) {
        years = Integer.parseInt(Objects.equals(value, "") ? "0" : value);
        if(years < 0)
            years = 0;
    }

    void months(String value) {
        months = Integer.parseInt(Objects.equals(value, "") ? "0" : value);
        if(months < 0)
            months = 0;
    }

    void pauseMonth(String value) {
        pauseMonth = Integer.parseInt(Objects.equals(value, "") ? "0" : value);
        if(pauseMonth < 0)
            pauseMonth = 0;
    }

    void resumeMonth(String value) {
        resumeMonth = Integer.parseInt(Objects.equals(value, "") ? "0" : value);
        if(resumeMonth < 0)
            resumeMonth = 0;
    }
}

class TableEntry {
    public TableEntry(int month, double sumPaid, double monthPayment, double monthInterest, double sumLeft) {
        setMonth(String.valueOf(month));
        setSumPaid(String.valueOf(sumPaid));
        setMonthPayment(String.valueOf(monthPayment));
        setMonthInterest(String.valueOf(monthInterest));
        setSumLeft(String.valueOf(sumLeft));
    }

    private StringProperty month;
    public void setMonth(String value) { monthProperty().set(value); }
    public String getMonth() { return monthProperty().get(); }
    public StringProperty monthProperty() {
        if (month == null) month = new SimpleStringProperty(this, "0");
        return month;
    }

    private StringProperty sumPaid;
    public void setSumPaid(String value) { sumPaidProperty().set(value); }
    public String getSumPaid() { return sumPaidProperty().get(); }
    public StringProperty sumPaidProperty() {
        if (sumPaid == null) sumPaid = new SimpleStringProperty(this, "0");
        return sumPaid;
    }

    private StringProperty monthPayment;
    public void setMonthPayment(String value) { monthPaymentProperty().set(value); }
    public String getMonthPayment() { return monthPaymentProperty().get(); }
    public StringProperty monthPaymentProperty() {
        if (monthPayment == null) monthPayment = new SimpleStringProperty(this, "0");
        return monthPayment;
    }

    private StringProperty monthInterest;
    public void setMonthInterest(String value) { monthInterestProperty().set(value); }
    public String getMonthInterest() { return monthInterestProperty().get(); }
    public StringProperty monthInterestProperty() {
        if (monthInterest == null) monthInterest = new SimpleStringProperty(this, "0");
        return monthInterest;
    }

    private StringProperty sumLeft;
    public void setSumLeft(String value) { sumLeftProperty().set(value); }
    public String getSumLeft() { return sumLeftProperty().get(); }
    public StringProperty sumLeftProperty() {
        if (sumLeft == null) sumLeft = new SimpleStringProperty(this, "0");
        return sumLeft;
    }
}

public class BasicView extends View {

    Stage app;
    Group root;
    Scene scene;

    UIDrawer uiDrawer;
    Loan loan;

    public void init() {
//        app = main;
        root = new Group();
        scene = new Scene(root, Color.rgb(15, 15, 30));
        scene.getStylesheets().add("styles.css");

        uiDrawer = new UIDrawer(root);
        loan = new Loan();
    }

    public BasicView() {
        
//        Label label = new Label("Hello JavaFX World!");
//
//        Button button = new Button("Change the World!");
//        button.setGraphic(new Icon(MaterialDesignIcon.LANGUAGE));
//        button.setOnAction(e -> label.setText("Hello from World!"));
//
//        VBox controls = new VBox(15.0, label, button);
//        controls.setAlignment(Pos.CENTER);
//
//        setCenter(controls);

        init();

        ObservableList<LoanType> options =
                FXCollections.observableArrayList(
                        LoanType.ANUITETO,
                        LoanType.LINEAR
                );
        ComboBox<LoanType> loanTypeInput = new ComboBox<>(options);
        loanTypeInput.setPromptText("Loan type");
        loanTypeInput.setStyle("-fx-font-size: 15");
        loanTypeInput.setLayoutX(0);
        loanTypeInput.setLayoutY(0);
        loanTypeInput.setValue(LoanType.ANUITETO);
        root.getChildren().add(loanTypeInput);

        TextField interestInput = new TextField();
        interestInput.setPromptText("Interest");
        interestInput.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        interestInput.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        interestInput.setLayoutX(0);
        interestInput.setLayoutY(50);
        root.getChildren().add(interestInput);

        TextField sumInput = new TextField();
        sumInput.setPromptText("Sum");
        sumInput.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        sumInput.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        sumInput.setLayoutX(200);
        sumInput.setLayoutY(50);
        root.getChildren().add(sumInput);

        TextField yearInput = new TextField();
        yearInput.setPromptText("Year");
        yearInput.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        yearInput.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        yearInput.setLayoutX(0);
        yearInput.setLayoutY(100);
        root.getChildren().add(yearInput);

        TextField monthInput = new TextField();
        monthInput.setPromptText("Month");
        monthInput.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        monthInput.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        monthInput.setLayoutX(200);
        monthInput.setLayoutY(100);
        root.getChildren().add(monthInput);

        TextField pauseMonth = new TextField();
        pauseMonth.setPromptText("Pause month");
        pauseMonth.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        pauseMonth.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        pauseMonth.setLayoutX(0);
        pauseMonth.setLayoutY(150);
        root.getChildren().add(pauseMonth);

        TextField resumeMonth = new TextField();
        resumeMonth.setPromptText("Resume month");
        resumeMonth.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        resumeMonth.setStyle("-fx-font-size: 15; -fx-text-fill: BLACK");
        resumeMonth.setLayoutX(200);
        resumeMonth.setLayoutY(150);
        root.getChildren().add(resumeMonth);

        Button save = new Button();
        save.setText("Save");
        save.setTextFill(Color.WHITE);
        save.setBackground(new Background(new BackgroundFill(Color.TRANSPARENT, CornerRadii.EMPTY, Insets.EMPTY)));
        save.setStyle("-fx-font-size: 15");
        save.setPadding(new Insets(-20, 0, -13, 0));
        save.setLayoutX(200);
        save.setLayoutY(0);
        save.setOnMouseClicked(e -> uiDrawer.saveFile());
        root.getChildren().add(save);



        loanTypeInput.getSelectionModel().selectedItemProperty().addListener((optionsList, oldValue, newValue) -> {
            loan.type = loanTypeInput.getValue();
            uiDrawer.updateUI(loan);
        });

        interestInput.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    interestInput.setText(newValue.replaceAll("[^\\d.,]", ""));

                loan.interest(interestInput.getText());
                uiDrawer.updateUI(loan);
            }
        });

        sumInput.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    sumInput.setText(newValue.replaceAll("[^\\d.,]", ""));

                loan.sum(sumInput.getText());
                uiDrawer.updateUI(loan);
            }
        });

        yearInput.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    yearInput.setText(newValue.replaceAll("[^\\d.,]", ""));

                loan.years(yearInput.getText());
                uiDrawer.updateUI(loan);
            }
        });

        monthInput.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    monthInput.setText(newValue.replaceAll("[^\\d.,]", ""));
                if(!newValue.isEmpty()) {
                    int months = Integer.parseInt(newValue);
                    int a = 0;
                    while(months > 11) {
                        a++;
                        months -= 12;
                    }
                    monthInput.setText(String.valueOf(months));
                    yearInput.setText(String.valueOf(Integer.parseInt(Objects.equals(yearInput.getText(), "") ? "0" : yearInput.getText()) + a));
                }

                loan.years(yearInput.getText());
                loan.months(monthInput.getText());
                uiDrawer.updateUI(loan);
            }
        });

        pauseMonth.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    pauseMonth.setText(newValue.replaceAll("[^\\d.,]", ""));

                loan.pauseMonth(pauseMonth.getText());
                uiDrawer.updateUI(loan);
            }
        });

        resumeMonth.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d*\\.,"))
                    resumeMonth.setText(newValue.replaceAll("[^\\d.,]", ""));

                loan.resumeMonth(resumeMonth.getText());
                uiDrawer.updateUI(loan);
            }
        });






        // Table
        TableView<TableEntry> table = new TableView<>();
        TableColumn<TableEntry, String> monthColumn = new TableColumn<>("Month");
        monthColumn.setCellValueFactory(p -> p.getValue().monthProperty());
        TableColumn<TableEntry, String> sumPaidColumn = new TableColumn<>("Sum paid");
        sumPaidColumn.setCellValueFactory(p -> p.getValue().sumPaidProperty());
        TableColumn<TableEntry, String> monthPaymentColumn = new TableColumn<>("Month payment");
        monthPaymentColumn.setCellValueFactory(p -> p.getValue().monthPaymentProperty());
        TableColumn<TableEntry, String> monthInterestColumn = new TableColumn<>("Month interest");
        monthInterestColumn.setCellValueFactory(p -> p.getValue().monthInterestProperty());
        TableColumn<TableEntry, String> sumLeftColumn = new TableColumn<>("Sum left");
        sumLeftColumn.setCellValueFactory(p -> p.getValue().sumLeftProperty());


        table.getColumns().setAll(List.of(monthColumn, sumPaidColumn, monthPaymentColumn, monthInterestColumn, sumLeftColumn));
        table.setLayoutX(0);
        table.setLayoutY(200);
        table.setPrefSize(420, 400);
        root.getChildren().add(table);

        uiDrawer.table = table;

        setCenter(root);
    }

    @Override
    protected void updateAppBar(AppBar appBar) {
//        appBar.setNavIcon(MaterialDesignIcon.MENU.button(e -> System.out.println("Menu")));
        appBar.setTitleText("Loan Calculator");
//        appBar.getActionItems().add(MaterialDesignIcon.SEARCH.button(e -> System.out.println("Search")));
    }
    
}
