#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=200;

   // entradas
   while (n >= 100)
    {
    printf ("%i ; \n", n);
    n --;
    }
   //process

   // saida
return(0);
}
