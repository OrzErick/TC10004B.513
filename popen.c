#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    FILE *sort;
    char *cadenas[10];
    cadenas[0]= "hola";
    cadenas[1]= "otra";
    cadenas[2]= "ya";
    cadenas[3]= "fin";
    sort = popen("sort","w");
    for(int i=0;i<4;i++){
        fprintf(sort,"%s\n",cadenas[i]);
    }
    pclose(sort);
    return 0;
}