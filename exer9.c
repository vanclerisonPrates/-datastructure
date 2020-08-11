#include <stdio.h>

int main(){
  int var;
  int i;

  scanf("%d", &var);
  
  for(i=var; i<=0; i++){
    printf("%d...", i);
  }

  printf("FIM!");
}
