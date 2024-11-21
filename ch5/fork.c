#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int x = 100;

    printf("x is set to %d\n", x);

    pid_t p = fork();

    if (p < 0){
        perror("fork failed");
        exit(1);
    }

    else if (p == 0){
        printf("Child: process_id(pid) = %d\n", getpid());
        printf("The int x is: %d\n", x);
        x = 200;
        printf("Child: Changed x to %d\n", x);
    }

    else {
        printf("Parent: process_id(pid) = %d\n", getpid());
        printf("Parent: x = %d\n", x);
        x = 300;
        printf("Parent: Changed x to %d\n", x);
    }

    return 0;
    
    
}