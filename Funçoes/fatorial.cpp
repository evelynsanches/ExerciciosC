#include<conio.h>
#include<stdio.h>

int fatorial(int num){
    int i, r=1;
    for(i=2; i<=num; i++){
        r = r * i;
    }
    return r;
}
main(){
       int n;
       printf("Digite: ");
       scanf("%d", &n);
       printf("\nFatorial: %d", fatorial(n));

getch();
}
