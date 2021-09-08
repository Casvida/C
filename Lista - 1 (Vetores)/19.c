#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<ctype.h>

void preencher(char *V,int tam);
int imprimir(char *V,int tam);

int main(){
  char V[15];
  int R;
  preencher(V,15);
  R=imprimir(V,15);
  if(R==0){
    printf("A palavra é palíndrome!\n");
  }else{
    printf("A palavra não é palíndrome!\n");
  }
  return 0;
}

void preencher(char *V,int tam){
  printf("Digite a palavra para verificação:\n");
  scanf("%s",V);
}

int imprimir(char *V,int tam){
  int resp,tamanho,i=0;
  char aux[15];
  while(V[i]!='\0'){
    V[i]=tolower(V[i]);
    i++;
  }
  tamanho=strlen(V);
  tamanho--;
  i=0;
  while(V[i]!='\0'){
    aux[tamanho]=tolower(V[i]);
    i++;
    tamanho--;
  }
  resp=strcmp(V,aux);
  return resp;
}