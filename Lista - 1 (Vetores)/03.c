#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 40

void preencher(int *V);
void imprimir(int *V);

int main(){
  int V[TAM];
  srand(time(NULL));
  preencher(V);
  imprimir(V);
  return 0;
}

void preencher(int *V){
  int i;
  for(i=0;i<TAM;i++){
    V[i]=rand()%100+1;
    printf("%d\n",V[i]);
  }
}

void imprimir(int *V){
  int i,x,R=0;
  printf("Digite o valor para verificar:\n");
  scanf("%d",&x);
  for(i=0;i<TAM;i++){
    if(V[i]==x){
      R++;
    }
  }
  if(R>0){
    printf("O valor aparece no vetor\n");
  }
  for(i=0;i<TAM;i++){
    if(V[i]==x){
      printf("Na posição %d do vetor\n",i);
    }
  }
  if(R==0){
    printf("O valor não aparece no vetor\n");
  }
}
