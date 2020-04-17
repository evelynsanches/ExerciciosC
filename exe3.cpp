/*3. Faça um procedimento que recebe a idade de um nadador por
parâmetro e exiba a categoria desse nadador de acordo com a tabela
abaixo: 
        5 a 7 - infantil A
        8 a 10 - infantil B
        11 a 13 - juvenil A
        14 a 17 - juvenil B
        maiores de 18 - adulto*/

#include<stdio.h>
#include<conio.h>

void categoria(int idade){
     if(idade >= 5 && idade <= 7)
         printf("Infantil A");
     else if(idade >=8 && idade <= 10)
         printf("Infantil B");
     else if(idade >= 11 && idade <= 13)
         printf("Juvenil A");
     else if(idade >= 14 && idade <=17)
         printf("Juvenil B");
     else if(idade >=18)
         printf("Adulto");
     else
         printf("Idade invalida");
         
}
main()
{
      int valor;
      printf("Digite sua idade: ");
      scanf("%d", &valor);
      categoria(valor);
      
getch();
}
