#include <stdio.h>

int main(){
  int var;
  
  scanf("%d", &var);
  
  do{
    printf("%d..", var);
    var--;
  }
  while(var >= 0 );
  
  printf("FIM!");
}
