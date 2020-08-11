#include <stdio.h>

int main(){
  int var;
  
  scanf("%d", &var);
  while(var >= 0 ){
    printf("%d..", var);
    var--;
  }
  printf("FIM!");
}