/*2. Faça um procedimento que recebe por parâmetro o raio de uma esfera e
calcula o seu volume (v = 1.33 * PI * R³). Pesquise e use a função pow()
para a exponenciação. */

#include<conio.h>
#include<stdio.h>
#include<math.h>

void volume(float raio){
     
     float volume = (1.33333 * 3.14 * pow(raio, 3));
     
     printf("O volume eh: %.2f", volume);
}
main()
{
      float valor;
      printf("Digite o raio da esfera: ");
      scanf("%f", &valor);
      
      volume(valor);
      
getch();
}
