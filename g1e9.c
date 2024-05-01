#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n=0, m;

   // entradas
   do{

  m = (n * n);
    printf ("%i ; ", m);
    n ++;
    } while(m < 400);
   //process

   // saida
return(0);
}

