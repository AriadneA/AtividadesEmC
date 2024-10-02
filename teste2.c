#include<stdio.h>
 #include<conio.c>
void botoes(){
  int i;
  textcolor(WHITE);
  gotoxy(54,10);
  printf("%c",201);
  for(i=1;i<10;i++){
     printf("%c",205);
  }
  printf("%c",187);
  gotoxy(54,11);
  printf("%c",186);
  gotoxy(64,11);
  printf("%c",186);
  gotoxy(54,12);
  printf("%c",200);
   for(i=1;i<10;i++){
    printf("%c",205);
   }
   printf("%c",188);
   gotoxy(56,11);
   textcolor(WHITE);
   printf("ENTRAR");


  gotoxy(54,15);
  printf("%c",201);

  for(i=1;i<10;i++){
     printf("%c",205);
  }
  printf("%c",187);
  gotoxy(54,16);
  printf("%c",186);
  gotoxy(64,16);
  printf("%c",186);
  gotoxy(54,17);
  printf("%c",200);
   for(i=1;i<10;i++){
    printf("%c",205);
   }
   printf("%c",188);
   gotoxy(57,16);
   textcolor(WHITE);
   printf("SAIR");

}


void linhavert(int col, int lin, int y,int i){
     for(y=y;y<=i;y++){
     gotoxy(col,lin);
     printf("%c",186);
     }
    }
 void linhahori(int col, int lin, int y, int i){
     for(y=2;y<=119;y++){
     gotoxy(col,lin);
     printf("%c",205);
     }
 }

int main(){
 linhavert(54,11,11,12);
return 0;
}
