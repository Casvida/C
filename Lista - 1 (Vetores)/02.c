#include <stdio.h>
#define TAM 150

void preencher(int *V);
void inverter(int *V);
void imprimir(int *V);

int main() {
  int V[TAM];
  preencher(V);
  inverter(V);
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

void inverter(int *V){
  int i,j=14,aux=0;
  for(i=0;i<7;i++){
    aux=V[i];
    V[i]=V[j];
    V[j]=aux;
    j--;
  }
}

void imprimir(int *V){
  int i;
  for(i=0;i<TAM;i++){
    printf("%d\n",V[i]);
  }
}
