/* Nomes: ARIADNE ARAUJO FARIAS(07) e HILARY LARISSA SILVA DE SOUSA(19)
 Turma:1AI-1  RA: ARIADNE: 195503 e HILARY: 195495
 Data de criaçao: 02/10/20
*/
#include<stdio.h>
#include<locale.h>
int somaD(int n1,int n2){

return (n1+n2);
}

int somaT(int n1, int n2, int n3){

return (n1 + n2 + n3);
}

int somaQ(int n1, int n2, int n3, int n4){

return(n1 + n2 + n3 + n4);
}

int subD(int n1,int n2){

return (n1 - n2);
}

int subT(int n1, int n2, int n3){

return (n1 - n2 - n3);
}

int subQ(int n1, int n2, int n3, int n4){

return (n1 - n2 - n3- n4);
}
int multD(int n1,int n2){

return (n1 * n2);
}
int multT(int n1,int n2, int n3){

return (n1 * n2 * n3);
}
int multQ(int n1,int n2, int n3, int n4){

return ((n1 * n2) * (n3 * n4));
}

double divD(int n1, int n2){

return (n1/n2);
}
double divD2(int n1,int n2){

return (n2/n1);
}

int leia(){
    int a;
    printf("\n Digite um valor:  ");
    scanf("%d", &a);

return a;
}

void imprime(int b){
 printf("\nO resultado: %d\n",b);
}



