#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    pid_t p = fork();

    if (p < 0){
        perror("fork failed");
        exit(1);
    }

    else {
        printf("New Process Created: , process_id(pid) = %d\n", getpid());
    }

    return 0;
    
    
}