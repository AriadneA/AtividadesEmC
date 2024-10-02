 #include<stdio.h>
 #include<conio.c>

    void linhavert(int col){
     int y;
     for(y=2;y<=29;y++){
     gotoxy(col,y);
     printf("%c",186);
     }
    }
 void linhahori(int lin){
     int y;
     for(y=2;y<=119;y++){
     gotoxy(y,lin);
     printf("%c",205);
     }
 }

void cantos(){
    gotoxy(1,1);
   printf("%c",201);
  gotoxy(1,30);
  printf("%c",200);
  gotoxy(120,1);
  printf("%c",205);
  gotoxy(120,30);
  printf("%c",188);
}
int main(){
  window(1,1,120,30);
  int x;
  linhavert(1);
  linhavert(120);
  linhahori(30);
  linhahori(1);
  cantos();
  gotoxy(10,5);
  scanf("%d",x);
}
