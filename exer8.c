#include <stdio.h>

int main(){
  int var;
  int i;

  scanf("%d", &var);
  
  do{
    printf("%d...", var);
    var += 1;
  }while(var <=0);

  printf("FIM!");
}
