/*Escreva um procedimento que recebe as 3 notas de um aluno por
parâmetro e uma letra. Se a letra for A o procedimento calcula a média
aritmética das notas do aluno e se for P, a sua média ponderada (pesos:
5, 3 e 2). A média calculada também deve retornar por parâmetro.*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
void calcNotas(float nota1, float nota2, float nota3, char tipo){
  float media = 0;
  if (tipo == 'A' || tipo == 'a') //Se for aritmética
    media = (nota1 + nota2 + nota3) / 3.0;
  if (tipo == 'P' || tipo == 'p') //Se for ponderada
    media = (nota1*5 + nota2*3 + nota3*2)/10;
  printf("Media[%c]: %2.f", tipo, media);
  //getch();
}
main(){
  float p1, p2, p3;
  char tipMed;
  printf("Digite a nota1: ");
  scanf("%f", &p1);
  printf("Digite a nota2: ");
  scanf("%f", &p2);
  printf("Digite a nota3: ");
  scanf("%f", &p3);
  printf("Digite o tipo de media [A]Aritmetica \\ [P]Ponderada: ");
  fflush(stdin);
  scanf("%c", &tipMed);
  calcNotas(p1, p2, p3, tipMed);
  getch();
}
