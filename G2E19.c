#include <stdio.h>
#include <locale.h>
int main ()
{

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");
   // 19)  Criar um programa  que leia um n�mero (X), e depois leia X n�meros inteiros e imprima
   //o maior deles.
    int num, maior=0;
    int n;

   // entradas
 printf("Digite um n�mero: ");
 scanf("%i", &num);

 maior=num;

 for(n=1; n<10; n++)
 {
 printf("\nDigite o %do n�mero: ",n+1);
 scanf("%i", &num);

 if(num>maior)
 maior=num;
 }


 printf("\nO maior n�mero �: %i", maior);

 getch();
}

