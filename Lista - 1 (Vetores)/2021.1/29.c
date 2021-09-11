#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 30

void preencher(int *V);
int modificar(int *V,int k);

int main() {
  int i,V[TAM],k,R;
  preencher(V);
  printf("Digite o valor de K entre 1 e 4:\n");
  scanf("%d",&k);
  R=modificar(V,k);
  printf("O maior valor é %d!\n",R);
  return 0;
}

void preencher(int *V){
  int i;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%d",&V[i]);
  }
}

int modificar(int *V,int k){
  int i,j,resp=-10000,cont,soma=0,aux=0;
  for(i=0;i<TAM-(k-1);i++){
    j=i;
    cont=i;
    for(cont=i;cont<=i+k-1;cont++){
      soma=soma+V[j];
      j++;
    }
    if(resp<soma){
      resp=soma;
    }
    soma=0;
  }
  return resp;
}
