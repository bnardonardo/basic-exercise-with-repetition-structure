#include <stdio.h>
#include <locale.h>
int main ()
{

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   // Criar um programa  que leia um n�mero (X), e depois leia X n�meros inteiros e imprima o menor deles.
    int num, menor=0;
    int n;

   // entradas
 printf("Digite um n�mero: ");
 scanf("%i", &num);

 menor=num;

 for(n=1; n<10; n++)
 {
 printf("\nDigite o %do n�mero: ",n+1);
 scanf("%i", &num);

 if(num<menor)
 menor=num;
 }


 printf("\nO menor n�mero �: %i", menor);

 getch();
}
