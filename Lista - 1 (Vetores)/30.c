#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 40

void preencher(int *V1,int *V2);
int modificar(int *V1,int *V2,int x,int y);

int main() {
  int V1[TAM],V2[TAM],R=0,x,y;
  preencher(V1,V2);
  printf("Digite o valor de X:\n");
  scanf("%d",&x);
  printf("Digite o valor de Y:\n");
  scanf("%d",&y);
  R=modificar(V1,V2,x,y);
  if(R==1){
    printf("A condição é verdadeira!\n");
  }else{
    printf("A condição é falsa!\n");
  }
  return 0;
}

void preencher(int *V1,int *V2){
  int i;
  printf("Digite os valores do vetor 1:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V1[i]);
  }
  printf("Digite os valores do vetor 2:\n");
    for(i=0;i<TAM;i++){
    scanf("%d",&V2[i]);
  }
}

int modificar(int *V1,int *V2,int x,int y){
  int resp=0,i,j,somatorio=0,produtorio=1;
  for(i=0;i<TAM;i++){
    if(i%2==0){
      if(V1[i]<0){
        V1[i]=V1[i]*(-1);
      }
      somatorio=somatorio+(x*V1[i]);
    }else{
      produtorio=produtorio*(y*V2[i]);
    }
  }
  if(somatorio<=produtorio){
    resp=1;
  }
  return resp;
}

