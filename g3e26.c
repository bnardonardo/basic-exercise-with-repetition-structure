#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   //Escreva um programa  que mostre a tabuada do 7.
   // var
    float a, soma=0, cont;
    int b;

   // entradas
 printf("Digite o primeiro n�mero: ");
 scanf("%f", &a);

 printf("Digite o segundo n�mero: ");
 scanf("%i", &b);

   //process

    for (cont=0; cont<b; cont++ )
        {
        soma += a;
        }

    printf("O produto de AxB �: %f", soma);
   // saida
return(0);
}

