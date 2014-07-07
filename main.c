#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
        pid_t pid = fork();
        if (pid == 0) {
                setsid();
                pid_t pid = fork();
                if (pid == 0) {
                        setsid();
                        sleep(1000);
                        return 0;
                }

                if (pid > 0) {
                        sleep(10);
                        return 0;
                }
                printf("error double fork %d\n", pid);
                return 0;
        }
        if (pid > 0) {
                sleep(20);
                return 0;
        }
        printf("error fork %d\n", pid);
}
