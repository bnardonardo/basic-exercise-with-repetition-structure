#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=1, m=0;

   // entradas
do {
    printf("%i \n", n);
    n+=2;
    m++;
 } while(m < 100);
   //process

   // saida
return(0);
}
