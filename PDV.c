#include<stdio.h>
#include<stdlib.h>
#include<conio.c>
void borda(){
 window(1,1,120,30);
 textcolor(WHITE);
  int i,x,y;
  gotoxy(0,0);
  printf("%c",201);
  for(i=1; i<119;i++){
   printf("%c",205);
  }
  gotoxy(120,0);
  printf("%c",187);

  for(x=1;x<120;x++){
    for(y=2;y<29;y++){
        gotoxy(x,0);
        printf("%c",186);
        gotoxy(120,y);
         printf("%c",186);
        }
  }
  gotoxy(30,0);
  printf("%c",200);
  for(i=1,1; i<119;i++){
   printf("%c",205);
  }
  gotoxy(199,0);
  printf("%c",188);

}
void cborda(){
  borda();
  cabecalho();
  rodape();
  nome();
  botoes();
}

void cabecalho(){
  int i;
  gotoxy(2,5);
  for(i=1,1; i<119;i++){
   printf("%c",196);
  }
  gotoxy(38,3);
  textcolor(YELLOW);
  printf("Sistema de Ponto de Vendas de uma Livraria");

}

void rodape(){
  int i;
  gotoxy(2,26);
  for(i=1,1; i<119;i++){
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

void tela2(){
  textbackground(BLUE);
  botoestela2();
  cabecalho();
  rodape();
}

void botoestela2(){
 textcolor(WHITE);
 window(1,1,120,30);
  int i,x,y;
  char j[15],g[10];
  gotoxy(0,0);
  printf("%c",201);
  for(i=1,1; i<119;i++){
   printf("%c",205);
  }
  gotoxy(120,0);
  printf("%c",187);

  for(x=1;x<199;x++){
    for(y=2;y<29;y++){
        gotoxy(x,0);
        printf("%c",186);
        gotoxy(120,y);
         printf("%c",186);
        }
  }
  gotoxy(30,0);
  printf("%c",200);
  for(i=1,1; i<119;i++){
   printf("%c",205);
  }
  gotoxy(199,0);
  printf("%c",188);
  cabecalho();
  rodape();
 //1
 textcolor(WHITE);
  gotoxy(30,9);
  printf("%c",201);
  for(i=1; i<60;i++){
   printf("%c",205);
  }
  gotoxy(90,9);
  printf("%c",187);

    for(x=10;x<25;x++){
      gotoxy(30,x);
      printf("%c",186);
      gotoxy(90,x);
      printf("%c",186);
 }
   gotoxy(30,25);
  printf("%c",200);
  for(i=1; i<60;i++){
   printf("%c",205);
  }
  gotoxy(90,25);
  printf("%c",188);

//2
 textcolor(WHITE);
  gotoxy(38,21);
  printf("%c",201);
  for(i=1;i<10;i++){
     printf("%c",205);
  }
  printf("%c",187);
  gotoxy(38,22);
  printf("%c",186);
  gotoxy(48,22);
  printf("%c",186);
  gotoxy(38,22);
  gotoxy(38,23);
  printf("%c",186);
  gotoxy(48,23);
  printf("%c",186);
  gotoxy(38,23);
  printf("%c",200);

   for(i=1;i<10;i++){
     printf("%c",205);
   }
   printf("%c",188);
//3
 textcolor(WHITE);
  gotoxy(70,21);
  printf("%c",201);
  for(i=1;i<10;i++){
     printf("%c",205);
  }

  printf("%c",187);
  gotoxy(70,22);
  printf("%c",186);
  gotoxy(80,22);
  printf("%c",186);


  gotoxy(70,23);
  printf("%c",186);
  gotoxy(80,23);
  printf("%c",186);
  gotoxy(70,23);
  printf("%c",200);

   for(i=1;i<10;i++){
     printf("%c",205);
   }
   printf("%c",188);
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
  scanf("%s",j);
  gotoxy(55,18);
  scanf("%s",g);
  textcolor(15);
  textbackground(1);
}

void carregando(){
    char E;
    int i,j;
    gotoxy(53,21);
    E = getch();
    if(E == 69){
    printf("Tecla valida");
     clrscr();
     cborda();
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
   cborda();
  carregando();
  tela2();
  getch();
  _setcursortype(0);
}

void LoginSaida(){
 textcolor(15);
  gotoxy(56,27);
   printf("L para login ou C pra cancelar");
}

int main(){
sequencia();
  gotoxy(1,120);
  getch();
  _setcursortype(0);
  system("cls");
  return 0;
}
