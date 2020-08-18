#include <stdio.h>
#include <math.h>

int main(){
  char letra = 'W';
  int i;
  printf("<<Forca de uma letra>>\n");
  printf("Você tem 5 chances de acertar\n\n");
  for(i=5; i>=0; i--){
    char letter;
    printf("Qual a letra?");
    scanf("%c", &letter);
    getchar();
    if(i == 0){
      printf("FIM DE JOGO!\n");
      break;
    }
    if(letter == letra){
      printf("ACERTOU!\nVOCÊ VENCEU!!!\n");
      break;
    }else {
    printf("Errado! Você tem mais %d chances\n", i);
    }
    
  }

}