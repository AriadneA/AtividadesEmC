#include<stdio.h>
#include<stdlib.h>
#include<conio.c>

int main(){
    int i, j;
    gotoxy(20,20);
    textbackground(15);
     for(i=1; i<30; i++){
        for(j=1;j<3;j++){
            printf(" ");
            if(1%5==0)
            Sleep(2000);
        }
     }
    gotoxy(10,10);
    textcolor(1);
    textbackground(15);
    printf("Aula de PDV");
    gotoxy(20,5);
    textcolor(13);
    textbackground(12);
    printf("Linguagem C");
    getch();
return 0;
}
