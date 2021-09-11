#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 50 

void preencher(int *V);
void modificar(int *V);
void imprimir(int *V);

int main() {
  int V[TAM];
  preencher(V);
  imprimir(V);
  modificar(V);
  imprimir(V);
  return 0;
}

void preencher(int *V){
  srand(time(NULL));
  int i;
  for(i=0;i<TAM;i++){
    V[i]=rand()%100+1;
  }
}

void modificar(int *V){
  int i,j,soma=0,aux[TAM];
  for(i=0;i<TAM;i++){
    soma=0;
    for(j=0;j<TAM;j++){
      if(j!=i){
        soma=soma+V[j];
      }
    }
    aux[i]=soma;
  }
  for(i=0;i<TAM;i++){
    V[i]=aux[i];
  }
}

void imprimir(int *V){
  int i;
  for(i=0;i<TAM;i++){
    printf("%d\n",V[i]);
  }
  printf("\n\n");
}