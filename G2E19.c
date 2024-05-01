#include <stdio.h>
#include <locale.h>
int main ()
{

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   // 19)  Criar um programa  que leia um número (X), e depois leia X números inteiros e imprima
   //o maior deles.
    int num, maior=0;
    int n;

   // entradas
 printf("Digite um número: ");
 scanf("%i", &num);

 maior=num;

 for(n=1; n<10; n++)
 {
 printf("\nDigite o %do número: ",n+1);
 scanf("%i", &num);

 if(num>maior)
 maior=num;
 }


 printf("\nO maior número é: %i", maior);

 getch();
}

