#include <stdio.h>

int main(){
  int var;
  int i;

  scanf("%d", &var);
  
  while(var != 0){
    if(var < 0){
      printf("%d...", var);
      var++;
    }

    if(var >0){
      printf("%d...", var);
      var--;
    }
  }

  printf("0...FIM!");
}
