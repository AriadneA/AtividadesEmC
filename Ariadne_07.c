/* Nome: ARIADNE ARAUJO FARIAS N°07
  Turma:1AI-1 Data de criaçao:06/10/20  RA:195503
*/
#include<stdio.h>
#include<stdlib.h>
 int entrada(){
    int x, fat;
    printf("Digite um número inteiro positivo:");
    scanf("%d", &x);
    return x;
     }
 int fatorial(int n){
    int i, f = 1;
    for(i = 1; i <= n; i++){
    f = f * i ;
 }
 return f ;
}
 int saida(int a, int fat){
 printf("O fatorial de %d %c: %d \n", a,130, fat);
 system("pause");
 }
 int principal(){
 int a, fat;
 a = entrada();
 fat = fatorial(a);
 saida(a,fat);
 }
 int main( ){
  principal();
 return 0;
}
