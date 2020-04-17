/*Recebe como parâmetro um número inteiro e exibe na tela a tabuada de
multiplicação até 10 do número lido.*/
#include<conio.h>
#include<stdio.h>
void mult(int val); //Assint. Prototypo

void mult(int val) {
  int cont; 
  int result = 0;
  for(cont = 1; cont <=10; cont++) {
    result = cont * val;
    printf("%d x %d = %d\n", cont, val, result);
  }
}

main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
    mult(num);
  getch();
}
