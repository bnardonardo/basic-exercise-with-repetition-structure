#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=100;

   // entradas
   while (n >= 1)
    {
    printf ("%i ; \n", n);
    n --;
    }
   //process

   // saida
return(0);
}

