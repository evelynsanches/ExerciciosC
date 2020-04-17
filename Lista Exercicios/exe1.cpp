/*Crie  um  procedimento  que  receba  por  parâmetro  do
is  valores  reais 
(float) e execute a subtração do primeiro valor pel
o segundo, em seguida 
exiba o resultado. */
#include<conio.h>
#include<stdio.h>
void subtracao(float val1, float val2); //Prototipo

void subtracao(float val1, float val2){
     float result;
     result = val1 - val2;
     printf("%.2f - %.2f = %.2f", val1, val2, result);
}

main(){
       float num1, num2;
       
       printf("Digite valor 1: ");
       scanf("%f", &num1);
       printf("Digite valor 2: ");
       scanf("%f", &num2);
                   subtracao(num1, num2); //Procedimento
       getch();
       }
