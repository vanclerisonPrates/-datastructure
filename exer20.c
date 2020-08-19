#include <stdio.h>
#include <math.h>

int main(){
  int i,j,n=6,valores=0;
      
  for(i=1; i<=n; i++){
      for(j=1; j<=i; j++){
        valores++;
        printf("%d ", valores);
      }
    printf("\n");
  }
  
  
}
