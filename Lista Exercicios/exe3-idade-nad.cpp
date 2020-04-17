/*Faça um procedimento que recebe a idade de um nadador por
parâmetro e exiba a categoria desse nadador de acordo com a tabela
abaixo:*/
#include<conio.h>
#include<stdio.h>

void catNadador(int idNadador){
     if(idNadador <= 7)
        printf("Infantil A");
     else if(idNadador <= 10)
        printf("Infantil B");
     else if(idNadador <= 13)
        printf("Juvenil A");
     else if(idNadador <= 17)
        printf("Juvenil B");
     else
         printf("Adulto"); //Adulto
     
     }
     
main(){
       int idade;
       
       printf("Digite a Idade do nadador: ");
       scanf("%d", &idade);
                   catNadador(idade);
       getch();
       }
