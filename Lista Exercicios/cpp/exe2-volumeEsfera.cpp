/*Fa�a um procedimento que recebe por par�metro o raio de uma esfera e
calcula o seu volume (v = 1.33 * PI * R�). Pesquise e use a fun��o pow()
para a exponencia��o. */
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14 //Constante de PI
void volEsfera(float valRaio);

void volEsfera(float valRaio){
     float result;
     result = (1.33333 * PI * pow(valRaio, 3));//valRadio^3
     printf("Esfera Raio: %.2f Volume: %.2f", valRaio, result);
     }
main(){
       float raio;
       printf("Digite o raio da esfera: ");
       scanf("%f", &raio);
                   volEsfera(raio);
       getch();
       }
