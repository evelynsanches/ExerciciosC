/*2. Fa�a um procedimento que recebe por par�metro o raio de uma esfera e
calcula o seu volume (v = 1.33 * PI * R�). Pesquise e use a fun��o pow()
para a exponencia��o. */

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
