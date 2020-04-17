/*Criar um programa com um vetor de inteiros com 100 posições e global.
Criar um procedimento para preencher este vetor com números
aleatórios (rand) e outro procedimento que exibirá todos os valores
acima de 80.*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TVET 100

int vetor[TVET];

void preencherValores(){
  srand(time(NULL));
  int i;
  for(i = 0; i < TVET; i++){
    vetor[i] = rand()%99+1;
    //printf("%d, ", vetor[i]);
  }
}
void exibirValores(){
  int j;
  for(j = 0; j < TVET; j++){
    if (vetor[j] > 80){
      printf("%d, ", vetor[j]);
    }
  }
}
main(){
  preencherValores();
  exibirValores();
  getch();
}
