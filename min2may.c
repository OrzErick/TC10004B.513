#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char may;
    int n=0;
    int vocales=0;
    do{
        n=read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if (
			may == 'A' || 
			may == 'E' || 
			may == 'I' || 
			may == 'O' || 
			may == 'U'
			)
		{
			vocales++;
		}
        //write(STDOUT_FILENO,&may,1);
    } while(n !=0);
    printf("El total de vocales es %d\n",vocales);
    return 0;
}