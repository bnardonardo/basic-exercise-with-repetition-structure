#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=1;

   // entradas
do {
    n++;
    printf("%i \n", n);
    n++;
    }while (n < 101);
   //process

   // saida
return(0);
}

