#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba\n");

    int pid = fork();

    if( pid == 0){
        printf("Soy el proceso hijo\n");
    }else{
        printf("Soy el proceso padre\n");
        sleep(10);
        printf("ya termine padre");
    }
    return 0;
}