#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int con;
void holaMundo(int signalNumber){
    if (signalNumber == 10){
        printf("Es la señal 10 \n");
    } else {
        printf("Es Otra señal\n");
    }
    con =  2;
}

void nomematas(int sig){
    printf("jajaja, no me matas\n");
    int con=1;
}

int main(){
    con=1;
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(2,nomematas);
    while(con == 1){
    printf("Estoy trabajando\n");
    sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}