/* Nomes: ARIADNE ARAUJO FARIAS(07) e HILARY LARISSA SILVA DE SOUSA(19)
 Turma:1AI-1  RA: ARIADNE: 195503 e HILARY: 195495
 Data de criaçao: 02/10/20
*/
#include<stdio.h>
#include<locale.h>
#include "subrotinaAH.c"
void SubMenuSoma(){
   setlocale(LC_ALL, "Portuguese");
   int op,n1,n2,n3,n4,soma;
   printf("---Soma---");
   printf("\n1-Soma com dois números\n");
   printf("\n2-Soma com tres números\n");
   printf("\n3-Soma com quatro números\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Soma com dois números---");
       printf("\nEntre com os dois números\n");
       n1 = leia();
       n2 = leia();
       soma = somaD(n1,n2);
       imprime(soma);
       break;
      case 2:
       printf("---Soma com três números---");
       printf("\nEntre com os três números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       soma = somaT(n1,n2,n3);
       imprime(soma);
       break;
       case 3:
        printf("---Soma com quatro números---");
       printf("\nEntre com os quatro números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       soma = somaQ(n1,n2,n3,n4);
       imprime(soma);
       break;
       default:
        printf("\nDigite uma opção valida\n");
        Menu();
     }

}
void SubMenuSub(){
setlocale(LC_ALL, "Portuguese");
int op,n1,n2,n3,n4,sub;
   printf("---Subtração---");
   printf("\n1-Subtração com dois números\n");
   printf("\n2-Subtração com tres números\n");
   printf("\n3-Subtração com quatro números\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Subtração com dois números---");
       printf("\nEntre com os dois números\n");
       n1 = leia();
       n2 = leia();
       sub = subD(n1,n2);
       imprime(sub);
       break;
      case 2:
       printf("---Subtração com três números---");
       printf("\nEntre com os três números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       sub = subT(n1,n2,n3);
       imprime(sub);
       break;
       case 3:
        printf("---Subtração com quatro números---");
       printf("\nEntre com os quatro números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       sub = subQ(n1,n2,n3,n4);
       imprime(sub);
       break;
       default:
        printf("\nDigite uma opção valida\n");
        Menu();
     }
}
void SubMenuMul(){
  setlocale(LC_ALL, "Portuguese");
 int op,n1,n2,n3,n4,mul;
   printf("---Multiplicação---");
   printf("\n1-Multiplicação com dois números\n");
   printf("\n2-Multiplicação com tres números\n");
   printf("\n3-Multiplicação com quatro números\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Multiplicação com dois números---");
       printf("\nEntre com os dois números\n");
       n1 = leia();
       n2 = leia();
       mul = multD(n1,n2);
       imprime(mul);
       break;
      case 2:
       printf("---Multiplicacao com três numeros---");
       printf("\nEntre com os três números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       mul = multT(n1,n2,n3);
       imprime(mul);
       break;
       case 3:
       printf("---Multiplicação com quatro números---");
       printf("\nEntre com os quatro números\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       mul = multQ(n1,n2,n3,n4);
       imprime(mul);
       break;
       default:
        printf("\nDigite uma opção valida\n");
        Menu();
     }

 }
void SubMenuDiv(){
 setlocale(LC_ALL, "Portuguese");
int op,n1,n2,div;
   printf("---Divisão---");
   printf("\n1-Divisão de A por B\n");
   printf("\n2-Divisão de B por A\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Divisão ---");
       printf("\nEntre com os dois números\n");
       n1 = leia();
       n2 = leia();
       if(n1 != 0 && n2 != 0){
       div = divD(n1,n2);
       }
       imprime(div);
       break;
      case 2:
      printf("---Divisão ---");
       printf("\nEntre com os dois números\n");
       n1 = leia();
       n2 = leia();
       if(n1 != 0 && n2 != 0){
       div = divD2(n1,n2);
       }
       imprime(div);
       break;
       default:
        printf("\nDigite uma opção valida\n");
        Menu();
     }
}
void SubMenuSair(){
 setlocale(LC_ALL, "Portuguese");
 printf("\nVoce digitou a opção de sair\n");
 Menu();
}

void Menu(){
 setlocale(LC_ALL, "Portuguese");
 int op;
 printf("---Menu---");
 printf("\n1-Somar\n");
 printf("\n2-Subtrair\n");
 printf("\n3-Multiplicar\n");
 printf("\n4-Divisão\n");
 printf("\n5-Sair\n");
 op = leia();
   switch(op){
   case 1:
       SubMenuSoma();
    break;
   case 2:
       SubMenuSub();
   break;
   case 3:
       SubMenuMul();
    break;
   case 4:
       SubMenuDiv();
       break;
   case 5:
       SubMenuSair();
   default:
    printf("\nDigite uma opção valida\n");
    Menu();
   }
}

int main(){
   Menu();
  return 0;
}
