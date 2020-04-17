/*4. Criar uma struct “cliente” com codigo, nome e rg. Declare uma variável
global do tipo cliente. Crie um procedimento para preencher os dados do
cliente e outro procedimento para exibir os dados do cliente. Crie, no
main, um menu para o usuário poder optar por: sair, cadastrar e exibir. */

#include<conio.h>
#include<stdio.h>


struct cliente{
       int cod;
       char nome;
       long int rg;
}

cliente cli
