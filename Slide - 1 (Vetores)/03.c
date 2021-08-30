#include <stdio.h>
#define TAM 20

void preencher(int *V);
int resp(int *V,int X);

int main() {
  int V[TAM],R=0,X;
  preencher(V);
  printf("Digite o valor para verificar:\n");
  scanf("%d",&X);
  R=resp(V,X);
  if(R==1){
    printf("O valor %d pertence ao vetor\n",X);
  }else{
    printf("O valor %d nao pertence ao vetor\n",X);
  }
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

int resp(int *V,int X){
  int i,R=0;
  for(i=0;i<TAM;i++){
    if(V[i]==X){
      R=1;
    }
  }
  return R;
}