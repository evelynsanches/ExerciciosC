/*Criar uma struct �cliente� com codigo, nome e rg. Declare uma vari�vel
global do tipo cliente. Crie um procedimento para preencher os dados do
cliente e outro procedimento para exibir os dados do cliente. Crie, no
main, um menu para o usu�rio poder optar por: sair, cadastrar e exibir. */
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#define TVET 2

struct cliente {
  int cod;
  char nome[30];
  long int rg;
};

  cliente cli[TVET]; //Var global de cliente

void cadClientes(){
  system("cls");
  int i;
  printf("Cadastro de Clientes: ");
  for (i = 0; i < TVET; i++) {
    cli[i].cod = i+1;
    printf("Digite nome: ");
    fflush(stdin);
    gets(cli[i].nome);
    printf("Digite rg: ");
    fflush(stdin);
    scanf("%d", &cli[i].rg);
  }
}
void exiClientes(){
  system("cls");
  int i;
  printf("Lista de Clientes Cadastrados\n");
  for (i = 0; i < TVET; i++) {
    if (cli[i].cod == NULL){ //Verifica se o vetor esta preenchido
      printf("Nao ha clientes cadastrados");
      break;
    }else
      printf("Cod: [%d] \t Nome: %s \t RG: %d\n", cli[i].cod, cli[i].nome, cli[i].rg);
  }
  getch();
}
main(){
  int opc;
  do {
    system("cls");
    printf("[0]Sair \n[1]Cadastrar Clientes \n[2]Exibir Clientes");
    scanf("%d", &opc);
    if(opc == 0)
      exit(0);
    switch (opc) {
      case 0:
        exit(0);
        break;
      case 1:
        cadClientes();
        break;
      case 2:
        exiClientes();
        break;
      default:
        printf("Opcao invalida");

    }
  } while(opc !=0);
  getch();
}
