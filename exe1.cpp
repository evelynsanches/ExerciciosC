/*1. Crie um procedimento que receba por parâmetro dois valores reais
(float) e execute a subtração do primeiro valor pelo segundo, em seguida
exiba o resultado. */
#include<conio.h>
#include<stdio.h>

void subtracao(float a, float b){
    float resultado = a-b; 
    printf("%.2f - %.2f = %.2f", a, b, resultado);
}

main()
{
      float num1, num2;
      
      printf("Digite um numero: ");
      scanf("%f", &num1);
      printf("Digite outro numero: ");
      scanf("%f", &num2);
      
      subtracao(num1, num2);
      
getch();
}
      
             
