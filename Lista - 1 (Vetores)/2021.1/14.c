#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<ctype.h>

void preencher(char *V,int tam);
int imprimir(char *V,int tam,char R);

int main() {
  char V[30];
  char R;
  int resp=0;
  preencher(V,30);
  resp=imprimir(V,30,R);
  if(resp==1){
    printf("A letra existe na string!\n");
  }else{
     printf("A letra não existe na string!\n");
  }
  return 0;
}

void preencher(char *V,int tam){
  printf("Digite a frase:\n");
  scanf("%[^\n]s",V);
}

int imprimir(char *V,int tam,char R){
  int i=0,resp=0;
  printf("Digite a letra para ser verificada:\n");
  scanf(" %c",&R);
  while(V[i]!='\0'){
    V[i]=toupper(V[i]);
    i++;
  }
  R=toupper(R);
  for(i=0;i<tam;i++){
    if(V[i]==R){
      resp=1;
    }
  }
  return resp;
}