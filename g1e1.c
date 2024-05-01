#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=0;

   // entradas
   while (n < 31)
    {
    printf ("%i ; ", n);
    n ++;
    }
   //process

   // saida
return(0);
}

