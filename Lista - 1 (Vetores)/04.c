#include<stdio.h>
#include <stdlib.h>
#define TAM 25

void preencher(int *V);
int verificar(int *V);

int main() {
  int V[TAM],aux=0;
  preencher(V);
  aux=verificar(V);
  if(aux==0){
    printf("Está em ordem crescente!\n");
  }else{
    printf("Não está em ordem crescente!\n");
  }
  return 0;
}

void preencher(int *V){
  int i;
  printf("Digite os valores:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
}

int verificar(int *V){
  int cont=0,R=0;
  for(cont=0;cont<TAM-1;cont++){
    if(V[cont+1]<V[cont]){
      R=1;
    }
  } 
  return R;
}