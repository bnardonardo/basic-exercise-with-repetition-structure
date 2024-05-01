#include <stdio.h>

int main(){

    int a, i;
    float b,resulta,soma;
    soma=0;

    printf ("Insira aqui o valor de A");
    scanf ("%i",&a);
    printf ("Insira aqui o valor de B ( Real )");
    scanf ("%f",&b);

    resulta = a*b;

    for (i = 0; i < a; i++ ){
        soma += b;}

        printf ("O Valor A x B = %f", resulta);
        printf ("Feito atraves da soma deu = %f",soma);
        system("pause");
        return 0;
        }
