#include <stdio.h>
#include <zconf.h>

int main() {
    setvbuf(stdout, NULL, _IOFBF, 128);
    printf("H");
    sleep(1);
    printf("E");
    sleep(1);
    printf("L");
    sleep(1);
    printf("L");
    sleep(1);
    printf("O");
    return 0;
}