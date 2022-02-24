#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid > 0) {
        printf("PID PAI: %d\n", getpid());
        sleep(25);
        execlp("/bin/ps", "ps", "-l", NULL);
    }

    else {
        printf("PID FILHO: %d\n", getpid());
        exit(0);
    }

    return 0;
}
