/*. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome
*/

#include <stdio.h>
#include <string.h>
#define TAM 50
#define gets(a)fgets(a,sizeof(a),stdin);a[strcspn(a,"\n")]='\0';

int main(void) {
  int i;
  char nome[TAM];

  printf("digite seu nome:");
  gets(nome);
 
  for(i=0;i<4;i++){
    printf("%c",nome[i]);
  }
  return 0;
}