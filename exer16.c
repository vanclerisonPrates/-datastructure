#include <stdio.h>
#include <math.h>

int main() {
    for(int x = 1; x<128; x*=2){
       int y = x* 2;
      printf("Com %d bits e possivel enderecar %.0f posicoes de memoria\n",y, pow(2,x * 2));}

}