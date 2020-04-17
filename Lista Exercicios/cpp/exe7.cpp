/*Faça um procedimento que recebe 3 valores inteiros por parâmetro e
exibe-os ordenados em ordem crescente.*/
#include<conio.h>
#include<stdio.h>
#define TVET 3

void ordInteiros(int val1, int val2, int val3) {
  int i, j, aux, vet[TVET] = { val1, val2, val3 };

  for(i=0; i<TVET; i++){
    for(j=i+1; j<TVET; j++){
      if(vet[i] > vet[j]){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  for (i=0; i<TVET; i++)
    printf("%d", vet[i]);
}
main(){
  int num1, num2, num3;

  printf("Digite valor 1: ");
  scanf("%d", &num1);
  printf("Digite valor 2: ");
  scanf("%d", &num2);
  printf("Digite valor 3: ");
  scanf("%d", &num3);
    ordInteiros(num1, num2, num3);
  getch();
}
