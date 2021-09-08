#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

void preencher(char *V,int tam);
void imprimir(char *V,int tam);

int main() {
  char V[50];
  preencher(V,50);
  imprimir(V,50);
  return 0;
}

void preencher(char *V,int tam){
  printf("Digite a frase:\n");
  scanf("%[^\n]s",V);
}

void imprimir(char *V,int tam){
  int i;
  for(i=0;i<tam;i++){
    if(V[i]==' '){
      continue;
    }
    printf("%c",V[i]);
    if(V[i]=='\0'){
      return;
    }
  }
}