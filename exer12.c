#include <stdio.h>

int main(){
  int n;
  int i;
  int soma = 0;
  scanf("%d", &n);
  
  for(i=n ; i>= 0; i--){
    soma = soma + i;
  }
  
  printf("%d", soma);
}