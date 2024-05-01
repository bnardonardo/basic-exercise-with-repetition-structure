#include <stdio.h>
#include <locale.h>
int main ()
{

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   // Criar um programa  que leia um número (X), e depois leia X números inteiros e imprima o menor deles.
    int num, menor=0;
    int n;

   // entradas
 printf("Digite um número: ");
 scanf("%i", &num);

 menor=num;

 for(n=1; n<10; n++)
 {
 printf("\nDigite o %do número: ",n+1);
 scanf("%i", &num);

 if(num<menor)
 menor=num;
 }


 printf("\nO menor número é: %i", menor);

 getch();
}
