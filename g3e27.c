#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   //Escreva um programa  que mostre a tabuada do 7.
   // var
 int n, i, resultado=0;

 printf("Digite um n�mero: ");
 scanf("%i", &n);

 for (i=2 ; i<=n / 2 ; i++)
    {
    if (n % i == 0) {
       resultado++;
       break;
    }
 }

 if (resultado == 0)
    printf("%i � um n�mero primo\n", n);
 else
    printf("%i n�o � um n�mero primo\n", n);

 return (0);
}
