#include <stdio.h>

int main(){
  int n;
  int soma = 0;
  scanf("%d", &n);
  
  do{
    soma = soma + n;
    n--;
  }
  
  while(n >= 0);

    printf("%d", soma);
}
