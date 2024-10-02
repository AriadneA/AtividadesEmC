#include<stdio.h>
#include<stdlib.h>
#include<conio.c>
void linhavert(int col, int b, int c){
     int y;
     for(y=b;y<=c;y++){
     gotoxy(col,y);
     printf("%c",186);
     }
    }
void linhahori(int lin, int b, int c){
     int y;
     for(y=b;y<=c;y++){
     gotoxy(y,lin);
     printf("%c",205);
     }
 }
void cantos(int x, int y, int i,int j){
  gotoxy(x,y);
  printf("%c",201);
  gotoxy(j,y);
  printf("%c",187);
  gotoxy(x,i);
  printf("%c",200);
  gotoxy(j,i);
  printf("%c",188);
}
void bordas(){
  window(1,1,120,30);
  linhavert(1,2,29);
  linhavert(120,2,29);
  linhahori(30,2,119);
  linhahori(1,2,119);
  cantos(1,1,30,120);
  cabecalho();
  rodape();
  nome();
  botoes();
}
void cabecalho(){
  int i;
  gotoxy(2,5);
  for(i=1;i<119;i++){
   printf("%c",196);
  }
  gotoxy(38,3);
  textcolor(YELLOW);
  printf("Sistema de Ponto de Vendas de uma Livraria");
}
void rodape(){
  int i;
  gotoxy(2,26);
  for(i=1; i<119;i++){
  printf("%c",196);
  }
  gotoxy(28,27);
  textcolor(YELLOW);
  printf("Desenvolvido pelas alunas Ariadne Araujo e Giovanna Ribeiro - 2020 - FMM");
}
void nome(){
  gotoxy(49,7);
  printf("Bem Vindo ao Sistema!");
  gotoxy(34,19);
  printf("Pressione a tela E para Entrar ou a tecla S para Sair");
}
void botoes(){
  textcolor(WHITE);
  linhavert(54,10,12);
  linhavert(64,10,12);
  linhahori(10,54,64);
  linhahori(12,54,64);
  cantos(54,10,12,64);
  gotoxy(56,11);
  textcolor(WHITE);
  printf("ENTRAR");
  //
  linhavert(54,15,17);
  linhavert(64,15,17);
  linhahori(15,54,64);
  linhahori(17,54,64);
  cantos(54,15,17,64);
  gotoxy(57,16);
  textcolor(WHITE);
  printf("SAIR");
}
void tela2(){
  textbackground(BLUE);
  botoes_tela2();
  cabecalho();
  rodape();
}
void botoes_tela2(){
  window(1,1,120,30);
  textcolor(WHITE);
  int i,x;
  int l[6], s[6];
  linhavert(1,2,29);
  linhavert(120,2,29);
  linhahori(30,2,119);
  linhahori(1,2,119);
  cantos(1,1,30,120);
  cabecalho();
  rodape();
//1
  textcolor(WHITE);
  linhavert(30,10,25);
  linhavert(90,10,25);
  linhahori(9,31,90);
  linhahori(25,31,90);
  cantos(30,9,25,90);
  //2
  linhavert(38,21,24);
  linhavert(48,21,24);
  linhahori(21,38,48);
  linhahori(24,38,48);
  cantos(38,21,24,48);
//3
  linhavert(70,21,24);
  linhavert(80,21,24);
  linhahori(21,70,80);
  linhahori(24,70,80);
  cantos(70,21,24,80);
  //
  textcolor(WHITE);
  gotoxy(52,10);
  printf("Acesso ao Sistema");
  gotoxy(41,22);
  printf("Logar");
  gotoxy(71,22);
  printf("Cancelar");
  gotoxy(45,14);
  printf("Login:");
  gotoxy(45,18);
  printf("Senha:");
  gotoxy(55,14);
  textbackground(15);
  for(i=1;i<15;i++){
  printf("%c",219);
  }
  gotoxy(55,18);
  for(i=1;i<15;i++){
  textbackground(15);
  printf("%c",219);
  }
  gotoxy(55,14);
  textcolor(1);
  textbackground(15);
  for(i = 0; i < 6; i ++){
  scanf("%d", &l[ i ]);
 }
  gotoxy(55,18);
  scanf("%d",s);
  textcolor(15);
  textbackground(1);
  login(l,6);
}
void tela_3(){
  bordas();
  textcolor(WHITE);
  linhavert(30,10,25);
  linhavert(90,10,25);
  linhahori(9,31,90);
  linhahori(25,31,90);
  cantos(30,9,25,90);
  Menu();
}
void login(int *h,int tam){
 int L, j[6]={1,9,5,5,0,3}, g[6]={1,9,5,5,7,3};
   L = getch();
   if(L == 76){
    clrscr();
    bordas();
    if( h[tam] == j[6]){
        tela_3();
    }else if( h[tam] == g[6]){
      tela_3();
    }
  }else{
    tela2();
  }
}
void Menu(){
  textcolor(WHITE);
  gotoxy(53,12);
  printf("Menu do Sistema");
  gotoxy(51,14);
  printf("1-Fornecedores");
  gotoxy(51,15);
  printf("2-Clientes");
  gotoxy(51,16);
  printf("3-Vendedores");
  gotoxy(51,17);
  printf("4-Produtos");
  gotoxy(51,18);
  printf("5-Venda");
  linhavert(38,21,24);
  linhavert(48,21,24);
  linhahori(21,38,48);
  linhahori(24,38,48);
  cantos(38,21,24,48);
  linhavert(70,21,24);
  linhavert(80,21,24);
  linhahori(21,70,80);
  linhahori(24,70,80);
  cantos(70,21,24,80);
  gotoxy(40,22);
  printf("Voltar");
  gotoxy(73,22);
  printf("Sair");
 //opcoes();
}
void carregando(){
    char E;
    int i,j;
    gotoxy(53,21);
    E = getch();
    if(E == 69){
    printf("Tecla valida");
     clrscr();
     bordas();
        gotoxy(53,22);
        printf("Carregando");
        gotoxy(45,23);
        for(i=0;i<1;i++){
        for(j=0;j<20;j++) {
        textbackground(15);
            printf(" ");
            Sleep(100);
        }
        for(j=0;j<20;j++) {
        printf(" ");
        }
}
    }else{
     textcolor(RED);
     printf("Tecla invalida!!");
     gotoxy(50,23);
     printf("Digite uma tecla valida");
     textcolor(WHITE);
     carregando();
    }
}
void sequencia(){
  textbackground(BLUE);
   bordas();
  carregando();
  tela2();
  getch();
  _setcursortype(0);
}
int main(){
 sequencia();
  gotoxy(1,120);
  getch();
  _setcursortype(0);
  system("cls");
  return 0;
}

