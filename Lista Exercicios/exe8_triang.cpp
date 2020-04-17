/*Escreva um procedimento que recebes 3 valores reais X, Y e Z e que
verifique se esses valores podem ser os comprimentos dos lados de um
triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para
que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado de um triângulo
é menor do que a soma do comprimento dos outros dois lados. O
procedimento deve identificar o tipo de triângulo formado observando as
seguintes definições:
o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/
#include<conio.h>
#include<stdio.h>
//#include<locale.h>

void verTriang(float x, float y, float z) { //para se formar um triang precisa ser true: y+z > x, x+z > y, x+y > z
  //setlocale(LC_ALL, "Portuguese");
  if (x < (y+z) && y < (x+z) && z < (x+y)){
    if (x == y && x == z && y == z){
      printf("Triangulo Equilatero");
    }else if (x == y || x == z || y == z){
      printf("Triangulo Isosceles");
    }else{
      printf("Triangulo Escaleno");
    }
  }
  else{
    printf("Impossivel formar um triangulo com os valores informados");
  }
}
main(){
  //setlocale(LC_ALL, "Portuguese");
  float ladoX, ladoY, ladoZ;
  printf("Digite lado x: ");
  scanf("%f", &ladoX);
  printf("Digite lado y: ");
  scanf("%f", &ladoY);
  printf("Digite lado z: ");
  scanf("%f", &ladoZ);
  verTriang(ladoX, ladoY, ladoZ);
  getch();
}
