#include<stdio.h>
#include <stdlib.h>
#define TAM 10

void preencher(int *V);
int verificar(int *V);

int main() {
  int V[TAM],aux=0;
  preencher(V);
  aux=verificar(V);
  if(aux==0){
    printf("É uma progressão aritimética\n");
  }else{
    printf("Não é uma progressão aritimética\n");
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
  int cont=0,cont2=0,R=0,aux=0,aux2=0;
  aux=V[1]-V[0];
  cont2=1;
  printf("%d\n",aux);
  for(cont=0;cont<TAM-1;cont++){
    aux2=V[cont2]-V[cont];
    cont2++;
    printf("%d\n",aux2);
    if(aux!=aux2){
      R=1;
    }
  } 
  return R;
}