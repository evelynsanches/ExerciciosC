/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes,
coletando dados sobre o salário e número de filhos. Faça um
procedimento que leia esses dados para um número não determinado
de pessoas e retorne a média de salário da população, a média do
número de filhos, o maior salário e o percentual de pessoas com salário
até R$350,00.*/
#include<conio.h>
#include<stdio.h>

struct habitantes{
  float salario;
  int filhos;
};
  habitantes hab[50];
void coletDados(){
  float totSalario = 0, maiorSalario = 0, salAte350 = 0;
  int i = 0, j, totFilhos = 0;
  do{
    printf("--[%d]habitante--\n", i);
    printf("Digite salario: ");
    scanf("%f", &hab[i].salario);
    if (hab[i].salario == 0){ break;}
    printf("Digite num de filhos: ");
    scanf("%d", &hab[i].filhos);
    i++;
  }while(hab[i-1].salario != 0);

  for(j = 0; j < i; j++){
    //printf("Salario: %.2f | Filhos: %d\n", hab[j].salario, hab[j].filhos);
    totSalario += hab[j].salario;
    totFilhos += hab[j].filhos;
    if (hab[j].salario > maiorSalario){
      maiorSalario = hab[j].salario;
    }
    if (hab[j].salario <= 350.00){
      salAte350++;
    }
  }
  printf("---[%d]Habitantes---\n", i);
  printf("Media salarial da populacao: %.2f\nMedia de filhos: %d \nMaior salario: %.2f \nPercentual de salarios ate 350.00 : %.2f \%%", totSalario/i, totFilhos/i, maiorSalario, salAte350/i);
}
main(){
  coletDados();
  getch();
}
