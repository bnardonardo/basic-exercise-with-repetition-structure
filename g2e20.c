#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   //Escreva um programa  que mostre a tabuada do 7.
   // var
    int n=1, tab;

   // entradas
 for (n=1; tab<70; n++)
 {
     tab = (n * 7);
    printf("%i x 7 = %i\n", n, tab);
 }
   //process

   // saida
return(0);
}

