#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#ifndef _LARGEFILE64_SOURCE
#define _LARGEFILE64_SOURCE
#endif
#ifndef _DARWIN_USE_64_BIT_INODE
#define _DARWIN_USE_64_BIT_INODE
#endif

#include <stdio.h>
#include <stddef.h>
#include <memory.h>

#include <dlfcn.h>
#include <dirent.h>
#include <fcntl.h>
#include <limits.h>
#include <locale.h>
#include <pthread.h>
#include <pwd.h>
#include <semaphore.h>
#include <signal.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/types.h>
#include <sys/utsname.h>
#include <time.h>
#include <unistd.h>
#include <mntent.h>

int PosixDirectives() {
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_MONOTONIC:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(CLOCK_MONOTONIC)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_MONOTONIC:PropertyInfo:signedness=$%s$\n", ((CLOCK_MONOTONIC>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_MONOTONIC:PropertyInfo:value=%lX\n", ((unsigned long)CLOCK_MONOTONIC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_REALTIME:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(CLOCK_REALTIME)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_REALTIME:PropertyInfo:signedness=$%s$\n", ((CLOCK_REALTIME>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_REALTIME:PropertyInfo:value=%lX\n", ((unsigned long)CLOCK_REALTIME));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_THREAD_CPUTIME_ID:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(CLOCK_THREAD_CPUTIME_ID)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_THREAD_CPUTIME_ID:PropertyInfo:signedness=$%s$\n", ((CLOCK_THREAD_CPUTIME_ID>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:CLOCK_THREAD_CPUTIME_ID:PropertyInfo:value=%lX\n", ((unsigned long)CLOCK_THREAD_CPUTIME_ID));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EAGAIN:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EAGAIN)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EAGAIN:PropertyInfo:signedness=$%s$\n", ((EAGAIN>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EAGAIN:PropertyInfo:value=%lX\n", ((unsigned long)EAGAIN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EBADF)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:signedness=$%s$\n", ((EBADF>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBADF:PropertyInfo:value=%lX\n", ((unsigned long)EBADF));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EBUSY)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:signedness=$%s$\n", ((EBUSY>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EBUSY:PropertyInfo:value=%lX\n", ((unsigned long)EBUSY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ECHILD)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:signedness=$%s$\n", ((ECHILD>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ECHILD:PropertyInfo:value=%lX\n", ((unsigned long)ECHILD));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EEXIST:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EEXIST)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EEXIST:PropertyInfo:signedness=$%s$\n", ((EEXIST>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EEXIST:PropertyInfo:value=%lX\n", ((unsigned long)EEXIST));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EFAULT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EFAULT)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EFAULT:PropertyInfo:signedness=$%s$\n", ((EFAULT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EFAULT:PropertyInfo:value=%lX\n", ((unsigned long)EFAULT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EINTR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:signedness=$%s$\n", ((EINTR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINTR:PropertyInfo:value=%lX\n", ((unsigned long)EINTR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINVAL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EINVAL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINVAL:PropertyInfo:signedness=$%s$\n", ((EINVAL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EINVAL:PropertyInfo:value=%lX\n", ((unsigned long)EINVAL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ENOMEM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ENOMEM)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ENOMEM:PropertyInfo:signedness=$%s$\n", ((ENOMEM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ENOMEM:PropertyInfo:value=%lX\n", ((unsigned long)ENOMEM));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(EPERM)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:signedness=$%s$\n", ((EPERM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:EPERM:PropertyInfo:value=%lX\n", ((unsigned long)EPERM));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ESRCH)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:signedness=$%s$\n", ((ESRCH>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ESRCH:PropertyInfo:value=%lX\n", ((unsigned long)ESRCH));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ETIMEDOUT)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:signedness=$%s$\n", ((ETIMEDOUT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:ETIMEDOUT:PropertyInfo:value=%lX\n", ((unsigned long)ETIMEDOUT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ADDRESS:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_ADDRESS)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ADDRESS:PropertyInfo:signedness=$%s$\n", ((LC_ADDRESS>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ADDRESS:PropertyInfo:value=%lX\n", ((unsigned long)LC_ADDRESS));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_ALL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:signedness=$%s$\n", ((LC_ALL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_ALL:PropertyInfo:value=%lX\n", ((unsigned long)LC_ALL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_COLLATE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:signedness=$%s$\n", ((LC_COLLATE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_COLLATE:PropertyInfo:value=%lX\n", ((unsigned long)LC_COLLATE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_CTYPE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:signedness=$%s$\n", ((LC_CTYPE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_CTYPE:PropertyInfo:value=%lX\n", ((unsigned long)LC_CTYPE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_IDENTIFICATION:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_IDENTIFICATION)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_IDENTIFICATION:PropertyInfo:signedness=$%s$\n", ((LC_IDENTIFICATION>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_IDENTIFICATION:PropertyInfo:value=%lX\n", ((unsigned long)LC_IDENTIFICATION));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MEASUREMENT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_MEASUREMENT)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MEASUREMENT:PropertyInfo:signedness=$%s$\n", ((LC_MEASUREMENT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MEASUREMENT:PropertyInfo:value=%lX\n", ((unsigned long)LC_MEASUREMENT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_MESSAGES)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:signedness=$%s$\n", ((LC_MESSAGES>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MESSAGES:PropertyInfo:value=%lX\n", ((unsigned long)LC_MESSAGES));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_MONETARY)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:signedness=$%s$\n", ((LC_MONETARY>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_MONETARY:PropertyInfo:value=%lX\n", ((unsigned long)LC_MONETARY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NAME:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_NAME)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NAME:PropertyInfo:signedness=$%s$\n", ((LC_NAME>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NAME:PropertyInfo:value=%lX\n", ((unsigned long)LC_NAME));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_NUMERIC)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:signedness=$%s$\n", ((LC_NUMERIC>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_NUMERIC:PropertyInfo:value=%lX\n", ((unsigned long)LC_NUMERIC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_PAPER:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_PAPER)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_PAPER:PropertyInfo:signedness=$%s$\n", ((LC_PAPER>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_PAPER:PropertyInfo:value=%lX\n", ((unsigned long)LC_PAPER));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TELEPHONE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_TELEPHONE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TELEPHONE:PropertyInfo:signedness=$%s$\n", ((LC_TELEPHONE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TELEPHONE:PropertyInfo:value=%lX\n", ((unsigned long)LC_TELEPHONE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LC_TIME)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:signedness=$%s$\n", ((LC_TIME>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LC_TIME:PropertyInfo:value=%lX\n", ((unsigned long)LC_TIME));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_BASE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LM_ID_BASE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_BASE:PropertyInfo:signedness=$%s$\n", ((LM_ID_BASE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_BASE:PropertyInfo:value=%lX\n", ((unsigned long)LM_ID_BASE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_NEWLM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(LM_ID_NEWLM)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_NEWLM:PropertyInfo:signedness=$%s$\n", ((LM_ID_NEWLM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:LM_ID_NEWLM:PropertyInfo:value=%lX\n", ((unsigned long)LM_ID_NEWLM));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_ANON)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:signedness=$%s$\n", ((MAP_ANON>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_ANON:PropertyInfo:value=%lX\n", ((unsigned long)MAP_ANON));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FAILED:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_FAILED)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FAILED:PropertyInfo:value=%lX\n", ((unsigned long)MAP_FAILED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_FIXED)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:signedness=$%s$\n", ((MAP_FIXED>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_FIXED:PropertyInfo:value=%lX\n", ((unsigned long)MAP_FIXED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_NORESERVE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:signedness=$%s$\n", ((MAP_NORESERVE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_NORESERVE:PropertyInfo:value=%lX\n", ((unsigned long)MAP_NORESERVE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_PRIVATE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:signedness=$%s$\n", ((MAP_PRIVATE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_PRIVATE:PropertyInfo:value=%lX\n", ((unsigned long)MAP_PRIVATE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(MAP_SHARED)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:signedness=$%s$\n", ((MAP_SHARED>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:MAP_SHARED:PropertyInfo:value=%lX\n", ((unsigned long)MAP_SHARED));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(NAME_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:signedness=$%s$\n", ((NAME_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:NAME_MAX:PropertyInfo:value=%lX\n", ((unsigned long)NAME_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_CREAT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_CREAT)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_CREAT:PropertyInfo:signedness=$%s$\n", ((O_CREAT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_CREAT:PropertyInfo:value=%lX\n", ((unsigned long)O_CREAT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_EXCL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_EXCL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_EXCL:PropertyInfo:signedness=$%s$\n", ((O_EXCL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_EXCL:PropertyInfo:value=%lX\n", ((unsigned long)O_EXCL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_NOFOLLOW:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_NOFOLLOW)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_NOFOLLOW:PropertyInfo:signedness=$%s$\n", ((O_NOFOLLOW>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_NOFOLLOW:PropertyInfo:value=%lX\n", ((unsigned long)O_NOFOLLOW));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_RDONLY)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:signedness=$%s$\n", ((O_RDONLY>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDONLY:PropertyInfo:value=%lX\n", ((unsigned long)O_RDONLY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDWR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_RDWR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDWR:PropertyInfo:signedness=$%s$\n", ((O_RDWR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_RDWR:PropertyInfo:value=%lX\n", ((unsigned long)O_RDWR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_TRUNC:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_TRUNC)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_TRUNC:PropertyInfo:signedness=$%s$\n", ((O_TRUNC>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_TRUNC:PropertyInfo:value=%lX\n", ((unsigned long)O_TRUNC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_WRONLY:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(O_WRONLY)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_WRONLY:PropertyInfo:signedness=$%s$\n", ((O_WRONLY>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:O_WRONLY:PropertyInfo:value=%lX\n", ((unsigned long)O_WRONLY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PATH_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:signedness=$%s$\n", ((PATH_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:value=%lX\n", ((unsigned long)PATH_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PATH_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:signedness=$%s$\n", ((PATH_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PATH_MAX:PropertyInfo:value=%lX\n", ((unsigned long)PATH_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PROT_EXEC)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:signedness=$%s$\n", ((PROT_EXEC>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_EXEC:PropertyInfo:value=%lX\n", ((unsigned long)PROT_EXEC));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PROT_NONE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:signedness=$%s$\n", ((PROT_NONE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_NONE:PropertyInfo:value=%lX\n", ((unsigned long)PROT_NONE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PROT_READ)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:signedness=$%s$\n", ((PROT_READ>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_READ:PropertyInfo:value=%lX\n", ((unsigned long)PROT_READ));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PROT_WRITE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:signedness=$%s$\n", ((PROT_WRITE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PROT_WRITE:PropertyInfo:value=%lX\n", ((unsigned long)PROT_WRITE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PTHREAD_CREATE_JOINABLE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:signedness=$%s$\n", ((PTHREAD_CREATE_JOINABLE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_CREATE_JOINABLE:PropertyInfo:value=%lX\n", ((unsigned long)PTHREAD_CREATE_JOINABLE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_KEYS_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PTHREAD_KEYS_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_KEYS_MAX:PropertyInfo:signedness=$%s$\n", ((PTHREAD_KEYS_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_KEYS_MAX:PropertyInfo:value=%lX\n", ((unsigned long)PTHREAD_KEYS_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(PTHREAD_STACK_MIN)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:signedness=$%s$\n", ((PTHREAD_STACK_MIN>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:PTHREAD_STACK_MIN:PropertyInfo:value=%lX\n", ((unsigned long)PTHREAD_STACK_MIN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CR2:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_CR2)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CR2:PropertyInfo:signedness=$%s$\n", ((REG_CR2>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CR2:PropertyInfo:value=%lX\n", ((unsigned long)REG_CR2));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CSGSFS:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_CSGSFS)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CSGSFS:PropertyInfo:signedness=$%s$\n", ((REG_CSGSFS>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_CSGSFS:PropertyInfo:value=%lX\n", ((unsigned long)REG_CSGSFS));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_EFL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_EFL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_EFL:PropertyInfo:signedness=$%s$\n", ((REG_EFL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_EFL:PropertyInfo:value=%lX\n", ((unsigned long)REG_EFL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_ERR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_ERR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_ERR:PropertyInfo:signedness=$%s$\n", ((REG_ERR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_ERR:PropertyInfo:value=%lX\n", ((unsigned long)REG_ERR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_OLDMASK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_OLDMASK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_OLDMASK:PropertyInfo:signedness=$%s$\n", ((REG_OLDMASK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_OLDMASK:PropertyInfo:value=%lX\n", ((unsigned long)REG_OLDMASK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R10:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R10)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R10:PropertyInfo:signedness=$%s$\n", ((REG_R10>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R10:PropertyInfo:value=%lX\n", ((unsigned long)REG_R10));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R11:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R11)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R11:PropertyInfo:signedness=$%s$\n", ((REG_R11>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R11:PropertyInfo:value=%lX\n", ((unsigned long)REG_R11));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R12:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R12)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R12:PropertyInfo:signedness=$%s$\n", ((REG_R12>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R12:PropertyInfo:value=%lX\n", ((unsigned long)REG_R12));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R13:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R13)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R13:PropertyInfo:signedness=$%s$\n", ((REG_R13>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R13:PropertyInfo:value=%lX\n", ((unsigned long)REG_R13));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R14:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R14)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R14:PropertyInfo:signedness=$%s$\n", ((REG_R14>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R14:PropertyInfo:value=%lX\n", ((unsigned long)REG_R14));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R15:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R15)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R15:PropertyInfo:signedness=$%s$\n", ((REG_R15>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R15:PropertyInfo:value=%lX\n", ((unsigned long)REG_R15));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R8:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R8)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R8:PropertyInfo:signedness=$%s$\n", ((REG_R8>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R8:PropertyInfo:value=%lX\n", ((unsigned long)REG_R8));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R9:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_R9)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R9:PropertyInfo:signedness=$%s$\n", ((REG_R9>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_R9:PropertyInfo:value=%lX\n", ((unsigned long)REG_R9));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RAX:PropertyInfo:signedness=$%s$\n", ((REG_RAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RAX:PropertyInfo:value=%lX\n", ((unsigned long)REG_RAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RBP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBP:PropertyInfo:signedness=$%s$\n", ((REG_RBP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBP:PropertyInfo:value=%lX\n", ((unsigned long)REG_RBP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RBX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBX:PropertyInfo:signedness=$%s$\n", ((REG_RBX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RBX:PropertyInfo:value=%lX\n", ((unsigned long)REG_RBX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RCX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RCX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RCX:PropertyInfo:signedness=$%s$\n", ((REG_RCX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RCX:PropertyInfo:value=%lX\n", ((unsigned long)REG_RCX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDI:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RDI)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDI:PropertyInfo:signedness=$%s$\n", ((REG_RDI>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDI:PropertyInfo:value=%lX\n", ((unsigned long)REG_RDI));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RDX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDX:PropertyInfo:signedness=$%s$\n", ((REG_RDX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RDX:PropertyInfo:value=%lX\n", ((unsigned long)REG_RDX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RIP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RIP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RIP:PropertyInfo:signedness=$%s$\n", ((REG_RIP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RIP:PropertyInfo:value=%lX\n", ((unsigned long)REG_RIP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSI:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RSI)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSI:PropertyInfo:signedness=$%s$\n", ((REG_RSI>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSI:PropertyInfo:value=%lX\n", ((unsigned long)REG_RSI));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_RSP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSP:PropertyInfo:signedness=$%s$\n", ((REG_RSP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_RSP:PropertyInfo:value=%lX\n", ((unsigned long)REG_RSP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_TRAPNO:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(REG_TRAPNO)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_TRAPNO:PropertyInfo:signedness=$%s$\n", ((REG_TRAPNO>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:REG_TRAPNO:PropertyInfo:value=%lX\n", ((unsigned long)REG_TRAPNO));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RLIMIT_NOFILE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:signedness=$%s$\n", ((RLIMIT_NOFILE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RLIMIT_NOFILE:PropertyInfo:value=%lX\n", ((unsigned long)RLIMIT_NOFILE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DEFAULT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_DEFAULT)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DEFAULT:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_DEFAULT));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DI_LMID:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_DI_LMID)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DI_LMID:PropertyInfo:signedness=$%s$\n", ((RTLD_DI_LMID>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_DI_LMID:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_DI_LMID));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_GLOBAL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:signedness=$%s$\n", ((RTLD_GLOBAL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_GLOBAL:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_GLOBAL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_LAZY)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:signedness=$%s$\n", ((RTLD_LAZY>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LAZY:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_LAZY));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_LOCAL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:signedness=$%s$\n", ((RTLD_LOCAL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_LOCAL:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_LOCAL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(RTLD_NOW)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:signedness=$%s$\n", ((RTLD_NOW>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:RTLD_NOW:PropertyInfo:value=%lX\n", ((unsigned long)RTLD_NOW));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_NODEFER:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SA_NODEFER)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_NODEFER:PropertyInfo:signedness=$%s$\n", ((SA_NODEFER>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_NODEFER:PropertyInfo:value=%lX\n", ((unsigned long)SA_NODEFER));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_RESTART:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SA_RESTART)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_RESTART:PropertyInfo:signedness=$%s$\n", ((SA_RESTART>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_RESTART:PropertyInfo:value=%lX\n", ((unsigned long)SA_RESTART));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SA_SIGINFO)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:signedness=$%s$\n", ((SA_SIGINFO>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SA_SIGINFO:PropertyInfo:value=%lX\n", ((unsigned long)SA_SIGINFO));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SEEK_CUR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:signedness=$%s$\n", ((SEEK_CUR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_CUR:PropertyInfo:value=%lX\n", ((unsigned long)SEEK_CUR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SEEK_SET)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:signedness=$%s$\n", ((SEEK_SET>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SEEK_SET:PropertyInfo:value=%lX\n", ((unsigned long)SEEK_SET));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_BLOCK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:signedness=$%s$\n", ((SIG_BLOCK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_BLOCK:PropertyInfo:value=%lX\n", ((unsigned long)SIG_BLOCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_DFL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_DFL)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_DFL:PropertyInfo:value=%lX\n", ((unsigned long)SIG_DFL));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_ERR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_ERR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_ERR:PropertyInfo:value=%lX\n", ((unsigned long)SIG_ERR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_IGN:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_IGN)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_IGN:PropertyInfo:value=%lX\n", ((unsigned long)SIG_IGN));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_SETMASK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:signedness=$%s$\n", ((SIG_SETMASK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_SETMASK:PropertyInfo:value=%lX\n", ((unsigned long)SIG_SETMASK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIG_UNBLOCK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:signedness=$%s$\n", ((SIG_UNBLOCK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:SIG_UNBLOCK:PropertyInfo:value=%lX\n", ((unsigned long)SIG_UNBLOCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFDIR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IFDIR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFDIR:PropertyInfo:signedness=$%s$\n", ((S_IFDIR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFDIR:PropertyInfo:value=%lX\n", ((unsigned long)S_IFDIR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFLNK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IFLNK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFLNK:PropertyInfo:signedness=$%s$\n", ((S_IFLNK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IFLNK:PropertyInfo:value=%lX\n", ((unsigned long)S_IFLNK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRGRP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IRGRP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRGRP:PropertyInfo:signedness=$%s$\n", ((S_IRGRP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRGRP:PropertyInfo:value=%lX\n", ((unsigned long)S_IRGRP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IROTH:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IROTH)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IROTH:PropertyInfo:signedness=$%s$\n", ((S_IROTH>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IROTH:PropertyInfo:value=%lX\n", ((unsigned long)S_IROTH));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRUSR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IRUSR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRUSR:PropertyInfo:signedness=$%s$\n", ((S_IRUSR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRUSR:PropertyInfo:value=%lX\n", ((unsigned long)S_IRUSR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRWXU:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IRWXU)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRWXU:PropertyInfo:signedness=$%s$\n", ((S_IRWXU>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IRWXU:PropertyInfo:value=%lX\n", ((unsigned long)S_IRWXU));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWGRP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IWGRP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWGRP:PropertyInfo:signedness=$%s$\n", ((S_IWGRP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWGRP:PropertyInfo:value=%lX\n", ((unsigned long)S_IWGRP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWOTH:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IWOTH)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWOTH:PropertyInfo:signedness=$%s$\n", ((S_IWOTH>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWOTH:PropertyInfo:value=%lX\n", ((unsigned long)S_IWOTH));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWUSR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IWUSR)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWUSR:PropertyInfo:signedness=$%s$\n", ((S_IWUSR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IWUSR:PropertyInfo:value=%lX\n", ((unsigned long)S_IWUSR));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXGRP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IXGRP)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXGRP:PropertyInfo:signedness=$%s$\n", ((S_IXGRP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXGRP:PropertyInfo:value=%lX\n", ((unsigned long)S_IXGRP));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXOTH:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(S_IXOTH)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXOTH:PropertyInfo:signedness=$%s$\n", ((S_IXOTH>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:S_IXOTH:PropertyInfo:value=%lX\n", ((unsigned long)S_IXOTH));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_CLK_TCK)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:signedness=$%s$\n", ((_SC_CLK_TCK>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_CLK_TCK:PropertyInfo:value=%lX\n", ((unsigned long)_SC_CLK_TCK));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_GETPW_R_SIZE_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_GETPW_R_SIZE_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_GETPW_R_SIZE_MAX:PropertyInfo:signedness=$%s$\n", ((_SC_GETPW_R_SIZE_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_GETPW_R_SIZE_MAX:PropertyInfo:value=%lX\n", ((unsigned long)_SC_GETPW_R_SIZE_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_OPEN_MAX:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_OPEN_MAX)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_OPEN_MAX:PropertyInfo:signedness=$%s$\n", ((_SC_OPEN_MAX>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_OPEN_MAX:PropertyInfo:value=%lX\n", ((unsigned long)_SC_OPEN_MAX));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_PAGESIZE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:signedness=$%s$\n", ((_SC_PAGESIZE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGESIZE:PropertyInfo:value=%lX\n", ((unsigned long)_SC_PAGESIZE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_PAGE_SIZE)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:signedness=$%s$\n", ((_SC_PAGE_SIZE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PAGE_SIZE:PropertyInfo:value=%lX\n", ((unsigned long)_SC_PAGE_SIZE));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PHYS_PAGES:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(_SC_PHYS_PAGES)));
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PHYS_PAGES:PropertyInfo:signedness=$%s$\n", ((_SC_PHYS_PAGES>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:ConstantInfo:_SC_PHYS_PAGES:PropertyInfo:value=%lX\n", ((unsigned long)_SC_PHYS_PAGES));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPOLL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGPOLL)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPOLL:PropertyInfo:signedness=$%s$\n", ((SIGPOLL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPOLL:PropertyInfo:value=%lX\n", ((unsigned long)SIGPOLL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPWR:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGPWR)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPWR:PropertyInfo:signedness=$%s$\n", ((SIGPWR>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPWR:PropertyInfo:value=%lX\n", ((unsigned long)SIGPWR));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGABRT)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:signedness=$%s$\n", ((SIGABRT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGABRT:PropertyInfo:value=%lX\n", ((unsigned long)SIGABRT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGALRM)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:signedness=$%s$\n", ((SIGALRM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGALRM:PropertyInfo:value=%lX\n", ((unsigned long)SIGALRM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGBUS)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:signedness=$%s$\n", ((SIGBUS>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGBUS:PropertyInfo:value=%lX\n", ((unsigned long)SIGBUS));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGCHLD)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:signedness=$%s$\n", ((SIGCHLD>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCHLD:PropertyInfo:value=%lX\n", ((unsigned long)SIGCHLD));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGCONT)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:signedness=$%s$\n", ((SIGCONT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGCONT:PropertyInfo:value=%lX\n", ((unsigned long)SIGCONT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGFPE)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:signedness=$%s$\n", ((SIGFPE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGFPE:PropertyInfo:value=%lX\n", ((unsigned long)SIGFPE));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGHUP)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:signedness=$%s$\n", ((SIGHUP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGHUP:PropertyInfo:value=%lX\n", ((unsigned long)SIGHUP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGILL)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:signedness=$%s$\n", ((SIGILL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGILL:PropertyInfo:value=%lX\n", ((unsigned long)SIGILL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGINT)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:signedness=$%s$\n", ((SIGINT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGINT:PropertyInfo:value=%lX\n", ((unsigned long)SIGINT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGIO)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:signedness=$%s$\n", ((SIGIO>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIO:PropertyInfo:value=%lX\n", ((unsigned long)SIGIO));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGIOT)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:signedness=$%s$\n", ((SIGIOT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGIOT:PropertyInfo:value=%lX\n", ((unsigned long)SIGIOT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGKILL)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:signedness=$%s$\n", ((SIGKILL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGKILL:PropertyInfo:value=%lX\n", ((unsigned long)SIGKILL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGPIPE)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:signedness=$%s$\n", ((SIGPIPE>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPIPE:PropertyInfo:value=%lX\n", ((unsigned long)SIGPIPE));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGPROF)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:signedness=$%s$\n", ((SIGPROF>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGPROF:PropertyInfo:value=%lX\n", ((unsigned long)SIGPROF));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGQUIT)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:signedness=$%s$\n", ((SIGQUIT>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGQUIT:PropertyInfo:value=%lX\n", ((unsigned long)SIGQUIT));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGSEGV)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:signedness=$%s$\n", ((SIGSEGV>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSEGV:PropertyInfo:value=%lX\n", ((unsigned long)SIGSEGV));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGSTOP)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:signedness=$%s$\n", ((SIGSTOP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSTOP:PropertyInfo:value=%lX\n", ((unsigned long)SIGSTOP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGSYS)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:signedness=$%s$\n", ((SIGSYS>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGSYS:PropertyInfo:value=%lX\n", ((unsigned long)SIGSYS));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGTERM)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:signedness=$%s$\n", ((SIGTERM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTERM:PropertyInfo:value=%lX\n", ((unsigned long)SIGTERM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGTRAP)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:signedness=$%s$\n", ((SIGTRAP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTRAP:PropertyInfo:value=%lX\n", ((unsigned long)SIGTRAP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGTSTP)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:signedness=$%s$\n", ((SIGTSTP>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTSTP:PropertyInfo:value=%lX\n", ((unsigned long)SIGTSTP));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGTTIN)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:signedness=$%s$\n", ((SIGTTIN>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTIN:PropertyInfo:value=%lX\n", ((unsigned long)SIGTTIN));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGTTOU)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:signedness=$%s$\n", ((SIGTTOU>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGTTOU:PropertyInfo:value=%lX\n", ((unsigned long)SIGTTOU));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGURG)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:signedness=$%s$\n", ((SIGURG>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGURG:PropertyInfo:value=%lX\n", ((unsigned long)SIGURG));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGUSR1)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:signedness=$%s$\n", ((SIGUSR1>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR1:PropertyInfo:value=%lX\n", ((unsigned long)SIGUSR1));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGUSR2)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:signedness=$%s$\n", ((SIGUSR2>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGUSR2:PropertyInfo:value=%lX\n", ((unsigned long)SIGUSR2));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGVTALRM)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:signedness=$%s$\n", ((SIGVTALRM>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGVTALRM:PropertyInfo:value=%lX\n", ((unsigned long)SIGVTALRM));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGWINCH)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:signedness=$%s$\n", ((SIGWINCH>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGWINCH:PropertyInfo:value=%lX\n", ((unsigned long)SIGWINCH));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGXCPU)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:signedness=$%s$\n", ((SIGXCPU>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXCPU:PropertyInfo:value=%lX\n", ((unsigned long)SIGXCPU));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(SIGXFSZ)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:signedness=$%s$\n", ((SIGXFSZ>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:SIGXFSZ:PropertyInfo:value=%lX\n", ((unsigned long)SIGXFSZ));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_PROF:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ITIMER_PROF)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_PROF:PropertyInfo:signedness=$%s$\n", ((ITIMER_PROF>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_PROF:PropertyInfo:value=%lX\n", ((unsigned long)ITIMER_PROF));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_REAL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ITIMER_REAL)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_REAL:PropertyInfo:signedness=$%s$\n", ((ITIMER_REAL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_REAL:PropertyInfo:value=%lX\n", ((unsigned long)ITIMER_REAL));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_VIRTUAL:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ITIMER_VIRTUAL)));
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_VIRTUAL:PropertyInfo:signedness=$%s$\n", ((ITIMER_VIRTUAL>=0 ? 1 : 0)) ? "UNSIGNED" : "SIGNED");
    printf("NativeCodeInfo:PosixDirectives:EnumInfo:int:EnumConstantInfo:ITIMER_VIRTUAL:PropertyInfo:value=%lX\n", ((unsigned long)ITIMER_VIRTUAL));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:Lmid_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(Lmid_t)));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:long_long_int:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(long long int)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        long long int fieldHolder = all_bits_set;
        is_unsigned = fieldHolder > 0;
        printf("NativeCodeInfo:PosixDirectives:PointerToInfo:long_long_int:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:pthread_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(pthread_t)));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:sigset_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(sigset_t)));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:size_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(size_t)));
    printf("NativeCodeInfo:PosixDirectives:PointerToInfo:struct_passwd_:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(void *)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(Dl_info)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fbase:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((Dl_info *) 0)->dli_fbase)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fbase:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(Dl_info, dli_fbase)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fname:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((Dl_info *) 0)->dli_fname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_fname:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(Dl_info, dli_fname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_saddr:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((Dl_info *) 0)->dli_saddr)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_saddr:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(Dl_info, dli_saddr)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_sname:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((Dl_info *) 0)->dli_sname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:Dl_info:StructFieldInfo:dli_sname:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(Dl_info, dli_sname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_attr_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(pthread_attr_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_cond_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(pthread_cond_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_condattr_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(pthread_condattr_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:pthread_mutex_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(pthread_mutex_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:sem_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(sem_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_addr:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((siginfo_t *) 0)->si_addr)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_addr:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(siginfo_t, si_addr)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_code:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((siginfo_t *) 0)->si_code)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_code:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(siginfo_t, si_code)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        siginfo_t fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.si_code = all_bits_set;
        is_unsigned = fieldHolder.si_code > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_code:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_errno:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((siginfo_t *) 0)->si_errno)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_errno:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(siginfo_t, si_errno)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        siginfo_t fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.si_errno = all_bits_set;
        is_unsigned = fieldHolder.si_errno > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_errno:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_signo:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((siginfo_t *) 0)->si_signo)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_signo:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(siginfo_t, si_signo)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        siginfo_t fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.si_signo = all_bits_set;
        is_unsigned = fieldHolder.si_signo > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:siginfo_t:StructFieldInfo:si_signo:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_dirent:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct dirent)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_dirent:StructFieldInfo:d_name:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct dirent *) 0)->d_name)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_dirent:StructFieldInfo:d_name:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct dirent, d_name)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_itimerval:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct itimerval)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_itimerval:StructFieldInfo:it_interval:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct itimerval *) 0)->it_interval)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_itimerval:StructFieldInfo:it_interval:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct itimerval, it_interval)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_itimerval:StructFieldInfo:it_value:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct itimerval *) 0)->it_value)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_itimerval:StructFieldInfo:it_value:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct itimerval, it_value)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct passwd)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_dir:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct passwd *) 0)->pw_dir)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_dir:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct passwd, pw_dir)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_name:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct passwd *) 0)->pw_name)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_passwd:StructFieldInfo:pw_name:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct passwd, pw_name)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct rlimit)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct rlimit *) 0)->rlim_cur)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct rlimit, rlim_cur)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct rlimit fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.rlim_cur = all_bits_set;
        is_unsigned = fieldHolder.rlim_cur > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_cur:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct rlimit *) 0)->rlim_max)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct rlimit, rlim_max)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct rlimit fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.rlim_max = all_bits_set;
        is_unsigned = fieldHolder.rlim_max > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_rlimit:StructFieldInfo:rlim_max:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct sigaction)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct sigaction *) 0)->sa_flags)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct sigaction, sa_flags)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct sigaction fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.sa_flags = all_bits_set;
        is_unsigned = fieldHolder.sa_flags > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_flags:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_handler:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct sigaction *) 0)->sa_handler)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_handler:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct sigaction, sa_handler)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_mask:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct sigaction *) 0)->sa_mask)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_mask:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct sigaction, sa_mask)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_sigaction:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct sigaction *) 0)->sa_sigaction)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_sigaction:StructFieldInfo:sa_sigaction:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct sigaction, sa_sigaction)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct stat64)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_ino:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct stat64 *) 0)->st_ino)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_ino:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct stat64, st_ino)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct stat64 fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.st_ino = all_bits_set;
        is_unsigned = fieldHolder.st_ino > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_ino:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_mode:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct stat64 *) 0)->st_mode)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_mode:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct stat64, st_mode)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct stat64 fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.st_mode = all_bits_set;
        is_unsigned = fieldHolder.st_mode > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_mode:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_nlink:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct stat64 *) 0)->st_nlink)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_nlink:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct stat64, st_nlink)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct stat64 fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.st_nlink = all_bits_set;
        is_unsigned = fieldHolder.st_nlink > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_nlink:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct stat64 *) 0)->st_size)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct stat64, st_size)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct stat64 fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.st_size = all_bits_set;
        is_unsigned = fieldHolder.st_size > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_size:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_uid:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct stat64 *) 0)->st_uid)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_uid:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct stat64, st_uid)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct stat64 fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.st_uid = all_bits_set;
        is_unsigned = fieldHolder.st_uid > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_stat64:StructFieldInfo:st_uid:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct timespec)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct timespec *) 0)->tv_nsec)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct timespec, tv_nsec)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct timespec fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tv_nsec = all_bits_set;
        is_unsigned = fieldHolder.tv_nsec > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_nsec:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct timespec *) 0)->tv_sec)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct timespec, tv_sec)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct timespec fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tv_sec = all_bits_set;
        is_unsigned = fieldHolder.tv_sec > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timespec:StructFieldInfo:tv_sec:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct timeval)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct timeval *) 0)->tv_sec)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct timeval, tv_sec)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct timeval fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tv_sec = all_bits_set;
        is_unsigned = fieldHolder.tv_sec > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_sec:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct timeval *) 0)->tv_usec)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct timeval, tv_usec)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct timeval fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tv_usec = all_bits_set;
        is_unsigned = fieldHolder.tv_usec > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_timeval:StructFieldInfo:tv_usec:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tm:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct tm)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct tms)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct tms *) 0)->tms_cstime)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct tms, tms_cstime)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct tms fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tms_cstime = all_bits_set;
        is_unsigned = fieldHolder.tms_cstime > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cstime:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct tms *) 0)->tms_cutime)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct tms, tms_cutime)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct tms fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tms_cutime = all_bits_set;
        is_unsigned = fieldHolder.tms_cutime > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_cutime:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct tms *) 0)->tms_stime)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct tms, tms_stime)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct tms fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tms_stime = all_bits_set;
        is_unsigned = fieldHolder.tms_stime > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_stime:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct tms *) 0)->tms_utime)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct tms, tms_utime)));
    {
        int is_unsigned;
        unsigned long all_bits_set = -1;
        struct tms fieldHolder;
        memset(&fieldHolder, 0x0, sizeof(fieldHolder));
        fieldHolder.tms_utime = all_bits_set;
        is_unsigned = fieldHolder.tms_utime > 0;
        printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_tms:StructFieldInfo:tms_utime:PropertyInfo:signedness=$%s$\n", (is_unsigned) ? "UNSIGNED" : "SIGNED");
    }
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(struct utsname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:machine:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct utsname *) 0)->machine)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:machine:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct utsname, machine)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:nodename:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct utsname *) 0)->nodename)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:nodename:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct utsname, nodename)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:release:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct utsname *) 0)->release)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:release:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct utsname, release)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:sysname:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct utsname *) 0)->sysname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:sysname:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct utsname, sysname)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:version:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((struct utsname *) 0)->version)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:struct_utsname:StructFieldInfo:version:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(struct utsname, version)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(ucontext_t)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:StructFieldInfo:uc_mcontext_gregs:PropertyInfo:size=%lu\n", ((unsigned long)sizeof(((ucontext_t *) 0)->uc_mcontext.gregs)));
    printf("NativeCodeInfo:PosixDirectives:StructInfo:ucontext_t:StructFieldInfo:uc_mcontext_gregs:PropertyInfo:offset=%lu\n", ((unsigned long)offsetof(ucontext_t, uc_mcontext.gregs)));
    return 0;
}

int main(void) {
    return PosixDirectives();
}
