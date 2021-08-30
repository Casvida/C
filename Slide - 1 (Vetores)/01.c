/*Obs.: Não sei se posições pares seriam {0,2,4,6,8,10,12,14} ou considerando 0 como 1, seria então {1,3,5,7,9,11,13,15}, então fiz com base na primeira alternativa*/

#include <stdio.h>
#define TAM 15

void preencher(float *V);
void imprimir(float *V);

int main() {
  float V[TAM];
  preencher(V);
  imprimir(V);
  return 0;
}

void preencher(float *V){
  int i;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%f",&V[i]);
  }
}

void imprimir(float *V){
  int i;
  for(i=1;i<TAM;i++){
    printf("%f\n",V[i]);
    i++;
  }
}