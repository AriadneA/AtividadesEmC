#include<stdio.h>
#include<stdlib.h>
#include<conio.c>
int main(){
    char c;
    c = getch();
    printf("%d",c);
    if(c == 69){
    printf("Tecla valida");
    }else{
     textcolor(RED);
     printf("Tecla invalida");
    }
    getch();
return 0;
}
