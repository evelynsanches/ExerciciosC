/* Faça um procedimento para verificar se um ano é bissexto ou não.
Utilize a regra: um ano bissexto é divisível por 4, mas não por 100, ou
então se é divisível por 400. Exemplo: 1988 é bissexto, pois é divisível
por 4 e não é por 100; 2000 é bissexto porque é divisível por 400. O ano
deve ser recebido por parâmetro.*/
#include<conio.h>
#include<stdio.h>
void verifAno(int ano){
  if ((ano %4 == 0 && ano %100 != 0) || (ano %400 == 0))
    printf("Ano bissexto");
  else
    printf("Ano nao bissexto");
}
main(){
  int ano;
  printf("Digite um ano: ");
  scanf("%d", &ano);
    verifAno(ano);
  getch();
}
