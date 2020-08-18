#include <stdio.h>
#include <math.h>

int main(){
  printf("<<Conversor>>\n\n");
  int funcao;
  printf("Digite uma opção\n");
  printf("1- Para converter de Km/h para m/s\n");
  printf("2- Para converter de m/s para km/h\n");
  printf("0- para sair\n\n");

  int i ;
  scanf("%d", &i);
  while(i != 0){
      if(i == 1){
        float velocidade;
        printf("Digite a velocidade (km/h): ");
        scanf("%f", &velocidade);
        velocidade = velocidade / 3.6;
        printf("A velocidade em m/s e: %f\n", velocidade);
        printf("Digite uma opção\n1- km/h para m/s \nm/s para km/h\n");
        scanf("%d", &i);
      }
      if(i == 2){
        int velocidade;
        printf("Digite a velocidade (m/s): ");
        scanf("%d", &velocidade);
        velocidade = velocidade * 3.6;
        printf("A velocidade em km/h e: %d\n", velocidade);
        printf("Digite uma opção\n1- km/h para m/s \nm/s para km/h\n");
        scanf("%d", &i);
      }
      if( i > 2 || i < 0){
        printf("Digite uma opção valida\n");
        scanf("%d", &i);
      }
      
  }

  printf("Finalizando...");

}
