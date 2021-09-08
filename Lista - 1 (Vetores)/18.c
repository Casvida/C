#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<ctype.h>

void preencher(char *V1,char *V2,int tam);
void imprimir(char *V1,char *V2,int tam);

int main() {
  char V1[20],V2[20];
  preencher(V1,V2,20);
  imprimir(V1,V2,20);
  return 0;
}

void preencher(char *V1,char *V2,int tam){
  printf("Digite a primeira frase:\n");
  scanf(" %[^\n]s",V1);
  printf("Digite a segunda frase:\n");
  scanf(" %[^\n]s",V2);
}

void imprimir(char *V1,char *V2,int tam){
  int i=0,tamanho1=0,tamanho2=0,conteudo=0;
  while(V1[i]!='\0'){
    V1[i]=tolower(V1[i]);
    i++;
  }
  i=0;
  while(V2[i]!='\0'){
    V2[i]=tolower(V2[i]);
    i++;
  }
  conteudo=strcmp(V1,V2);
  tamanho1=strlen(V1);
  tamanho2=strlen(V2);
  if(conteudo==0){
    if(tamanho1==tamanho2){
      printf("As frases tem o mesmo tamanho e o mesmo conteudo!");
    }
  }else{
    if(tamanho1==tamanho2){
      printf("As frases tem o mesmo tamanho mas não tem o mesmo conteudo!");
    }else{
      printf("As frases não tem o mesmo tamanho e nem o mesmo conteudo!");
    }
  }
}