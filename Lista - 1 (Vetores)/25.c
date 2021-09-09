#include<stdio.h>
#include<stdlib.h>
#define TAM 100

void P1(int *V);
void P2(int *V);

int main(){
  int V[100];
  P1(V);
  P2(V);
  return 0;
}

void P1(int *V){
  int i;
  printf("Digite os números do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
}

void P2(int *V){
  int i,j,aux=0;
  printf("Números que aparecem só uma vez:\n");
  for(i=0;i<TAM;i++){
    aux=0;
    for(j=0;j<TAM;j++){
      if(V[i]==V[j]){
        aux++;
      }
    }
    if(aux==1){
      printf("%d ",V[i]);
    }
  }
}