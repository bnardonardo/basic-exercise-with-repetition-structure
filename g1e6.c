#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=1, m;

   // entradas
   while (m < 200)
    {
    printf ("%i ", m);
    m = n * 5;
    n ++;

    }
   //process

   // saida
return(0);
}

