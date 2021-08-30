#include <stdio.h>
#define TAM 30

void preencher(float *V);
float resp(float *V,float X);

int main() {
  float V[TAM],R=0,X;
  preencher(V);
  printf("Digite o valor para verificar:\n");
  scanf("%f",&X);
  R=resp(V,X);
  if(R==1){
    printf("O valor %f pertence ao vetor\n",X);
  }else{
    printf("O valor %f nao pertence ao vetor\n",X);
  }
  return 0;
}

void preencher(float *V){
  int i;
  printf("Digite os valores do vetor:\n");
  for(i=0;i<TAM;i++){
    scanf("%f",&V[i]);
  }
  printf("\n");
}

float resp(float *V,float X){
  float R=0;
  int i;
  for(i=0;i<TAM;i++){
    if(V[i]==X){
      R=1;
    }
  }
  return R;
}
