#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

void P1(int *V1);
void P2(int *V1,int *V2);
int F1(int *V1,int *V2,int i);

int main() {
  srand((unsigned)time(NULL));
  int V1[TAM],V2[TAM];
  P1(V1);
  P2(V1,V2);
  return 0;
}

void P1(int *V1){
  int i;
  for(i=0;i<TAM;i++){
    V1[i]=rand()%10+1;
    printf("%d\n",V1[i]);
  }
  printf("\n\n");
}

void P2(int *V1,int *V2){
  int i,fat;
  for(i=0;i<TAM;i++){
    V2[i]=F1(V1,V2,i);
    printf("%d\n",V2[i]);
  }
}

int F1(int *V1,int *V2,int i){
  int resp=0,fat;
  for(fat=1;V1[i]>1;V1[i]=V1[i]-1){
    fat=fat*V1[i];
  }
  resp=fat;
  return resp;
}
