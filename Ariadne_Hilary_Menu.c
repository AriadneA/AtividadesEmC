/* Nomes: ARIADNE ARAUJO FARIAS(07) e HILARY LARISSA SILVA DE SOUSA(19)
 Turma:1AI-1  RA: ARIADNE: 195503 e HILARY: 195495
 Data de cria�ao: 02/10/20
*/
#include<stdio.h>
#include<locale.h>
#include "subrotinaAH.c"
void SubMenuSoma(){
   setlocale(LC_ALL, "Portuguese");
   int op,n1,n2,n3,n4,soma;
   printf("---Soma---");
   printf("\n1-Soma com dois n�meros\n");
   printf("\n2-Soma com tres n�meros\n");
   printf("\n3-Soma com quatro n�meros\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Soma com dois n�meros---");
       printf("\nEntre com os dois n�meros\n");
       n1 = leia();
       n2 = leia();
       soma = somaD(n1,n2);
       imprime(soma);
       break;
      case 2:
       printf("---Soma com tr�s n�meros---");
       printf("\nEntre com os tr�s n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       soma = somaT(n1,n2,n3);
       imprime(soma);
       break;
       case 3:
        printf("---Soma com quatro n�meros---");
       printf("\nEntre com os quatro n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       soma = somaQ(n1,n2,n3,n4);
       imprime(soma);
       break;
       default:
        printf("\nDigite uma op��o valida\n");
        Menu();
     }

}
void SubMenuSub(){
setlocale(LC_ALL, "Portuguese");
int op,n1,n2,n3,n4,sub;
   printf("---Subtra��o---");
   printf("\n1-Subtra��o com dois n�meros\n");
   printf("\n2-Subtra��o com tres n�meros\n");
   printf("\n3-Subtra��o com quatro n�meros\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Subtra��o com dois n�meros---");
       printf("\nEntre com os dois n�meros\n");
       n1 = leia();
       n2 = leia();
       sub = subD(n1,n2);
       imprime(sub);
       break;
      case 2:
       printf("---Subtra��o com tr�s n�meros---");
       printf("\nEntre com os tr�s n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       sub = subT(n1,n2,n3);
       imprime(sub);
       break;
       case 3:
        printf("---Subtra��o com quatro n�meros---");
       printf("\nEntre com os quatro n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       sub = subQ(n1,n2,n3,n4);
       imprime(sub);
       break;
       default:
        printf("\nDigite uma op��o valida\n");
        Menu();
     }
}
void SubMenuMul(){
  setlocale(LC_ALL, "Portuguese");
 int op,n1,n2,n3,n4,mul;
   printf("---Multiplica��o---");
   printf("\n1-Multiplica��o com dois n�meros\n");
   printf("\n2-Multiplica��o com tres n�meros\n");
   printf("\n3-Multiplica��o com quatro n�meros\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Multiplica��o com dois n�meros---");
       printf("\nEntre com os dois n�meros\n");
       n1 = leia();
       n2 = leia();
       mul = multD(n1,n2);
       imprime(mul);
       break;
      case 2:
       printf("---Multiplicacao com tr�s numeros---");
       printf("\nEntre com os tr�s n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       mul = multT(n1,n2,n3);
       imprime(mul);
       break;
       case 3:
       printf("---Multiplica��o com quatro n�meros---");
       printf("\nEntre com os quatro n�meros\n");
       n1 = leia();
       n2 = leia();
       n3 = leia();
       n4 = leia();
       mul = multQ(n1,n2,n3,n4);
       imprime(mul);
       break;
       default:
        printf("\nDigite uma op��o valida\n");
        Menu();
     }

 }
void SubMenuDiv(){
 setlocale(LC_ALL, "Portuguese");
int op,n1,n2,div;
   printf("---Divis�o---");
   printf("\n1-Divis�o de A por B\n");
   printf("\n2-Divis�o de B por A\n");
   op = leia();
   switch(op){
       case 1:
       printf("---Divis�o ---");
       printf("\nEntre com os dois n�meros\n");
       n1 = leia();
       n2 = leia();
       if(n1 != 0 && n2 != 0){
       div = divD(n1,n2);
       }
       imprime(div);
       break;
      case 2:
      printf("---Divis�o ---");
       printf("\nEntre com os dois n�meros\n");
       n1 = leia();
       n2 = leia();
       if(n1 != 0 && n2 != 0){
       div = divD2(n1,n2);
       }
       imprime(div);
       break;
       default:
        printf("\nDigite uma op��o valida\n");
        Menu();
     }
}
void SubMenuSair(){
 setlocale(LC_ALL, "Portuguese");
 printf("\nVoce digitou a op��o de sair\n");
 Menu();
}

void Menu(){
 setlocale(LC_ALL, "Portuguese");
 int op;
 printf("---Menu---");
 printf("\n1-Somar\n");
 printf("\n2-Subtrair\n");
 printf("\n3-Multiplicar\n");
 printf("\n4-Divis�o\n");
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
    printf("\nDigite uma op��o valida\n");
    Menu();
   }
}

int main(){
   Menu();
  return 0;
}
