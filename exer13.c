#include <stdio.h>

int main(){
  int n, i , j, mult, count;
  printf("Digite um numero N:");
  scanf("%d", &n);
  printf("Digite um numero para i:");
    scanf("%d", &i);
  printf("Digite um numero para j:");
  scanf("%d", &j);

  mult= 0;
  count = 0;

  while(count < n){
    if(mult % i == 0 || mult % j == 0 ){
      printf("%d,", mult);
      count = count+ 1;
    }
    mult++;
  }

}
