#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

void preencher(int *V);
void imprimir(int *V);

int main() {
  srand((unsigned)time(NULL));
  int V[TAM];
  preencher(V);
  imprimir(V);
  return 0;
}

void preencher(int *V){
  int i,cont2;
  for(i=0;i<TAM;i++){
    V[i]=rand()%20+1;
    for(cont2=0;cont2<i;cont2++){
      while(V[i]==V[cont2]){
        V[i]=rand()%20+1;
      }
    }
  }
}

void imprimir(int *V){
  int i;
  for(i=0;i<TAM;i++){
    printf("%d\n",V[i]);
  }
}