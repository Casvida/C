#include <stdio.h>
#define TAM 10

void preencher(int *V);
void imprimir(int *V);

int main() {
  int V[TAM];
  preencher(V);
  imprimir(V);
  return 0;
}

void preencher(int *V){
  int i;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
  printf("\n");
}

void imprimir(int *V){
  int i;
  printf("Ordem Inversa:\n");
  for(i=9;i>=0;i--){
    printf("%d\n",V[i]);
  }
}