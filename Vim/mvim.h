#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "cmode.h"

using namespace std;

#define MAX 100

//prototipos...
void carregarOpcoes();
bool Sair(char);
void Pause();
void CommandMode();
void CommandOptions();
void func1(char);
void func2(char);
void InsertMode();
void Teclas();
void Especial();
void getSexo(string);

void menu(){

   char c;

   cout << "Como usar o Vim - Editor de Textos" << endl;
   cout << "\nAbra o terminal: [Ctrl] + [alt] + [t]" << endl;
   cout << "\nDigite vim e o nome do arquivo que deseja abrir/criar" << endl;
   cout << "\nDigite vimtutor para ver o tutorial embutido no vim" << endl;
   string nome;
   cout << "\n\n\tInforme seu nome ☞  ";
   cin >> nome;
   setbuf(stdin, NULL);
   string sexo;
   cout << "\t\tInforme seu sexo: (F/M) ";
   cin >> sexo;
   setbuf(stdin, NULL);
   system("clear");
   while(1){
      cout << "Bem vindo ao Vim Menu, " << nome << "!☺";
      getSexo(sexo);
      cout << "\nOpções: \n" << endl;
      carregarOpcoes();
      cout << "\nEscolha ~:> ";
      cin >> c;
      system("clear");
      if(Sair(c))break;
      func1(c);
      system("clear");
   }
   cout << "Bye, bye " << nome << " ☻  ♡  ✓" << endl;
 }

void getSexo(string s){
   if(s == "F" || s == "f"){
      cout << " ♀" << endl;
   }else{
      cout << " ♂" << endl;
   }
}

void Pause(){
   char c[MAX];
   cout << "\nPressione [a] para proseguir ~:> ";
   cin >> c;
   setbuf(stdin, NULL);
}

bool Sair(char c){
   if(c == 27 || c == 'q' || c == 'Q'){
      cout << "Sair? (S/n): ";
      cin >> c;
      if(c == 's' || c == 'S'){
           system("clear");
	   return true;
       }
   }
   return false;
}

void carregarOpcoes(){
   FILE *arq;
   char linha[MAX];
   char *op;
   int i;
   arq = fopen("files/opcoes/opcoes.txt", "rt"); // abre um arquivo para leitura
   if(arq == NULL){
     cout << "Arquivo não foi aberto!" << endl;
     exit(1);
   }else{
        i = 1;
 	while(!feof(arq)){
	  op = fgets(linha, MAX, arq); // fgets le 99 caracteres ou até um \n
          if(op != NULL){
             printf("[%d] ☞  %s", i, op);
             i++;
	  }
	}

        printf("\n[Q] ☞  Quit\n");
   }
   fclose(arq);
}

void CommandMode(){
   system("clear");
   cout << "Ao entrar no Vim ele ja estará no modo de comandos." << endl;
   cout << "Os comandos começarão com dois pontos(:) e o nome do comando.\n";
   cout << "Exemplo ☞  :help" << endl;


   char c;
   while(1){
     cout << "\nModo de Comandos\n" << endl;
     cout << "\nOpções:" << endl;

     CommandOptions();

     cout << "[Q] ☞  Quit" << endl;
     cout << "\nEscolha ~:> ";
     cin >> c;

     if(Sair(c)) break;
     func2(c);
     system("clear");
   }

}

void CommandOptions(){
   char c;
   FILE *arq;
   char linha[MAX];
   char *op;
   arq = fopen("files/command/options.txt", "rt");
   if(arq == NULL){
     cout << "Arquivo nao foi aberto" << endl;
     exit(1);
   }else{
      int i = 1;
      while(!feof(arq)){
        op = fgets(linha, MAX, arq);
        if(op != NULL){
           printf("[%d] ☞  %s", i, op);
        }
	i++;
      }//fim while
   }//fim else
   fclose(arq);
}

void func1(char c){
   switch(c){
 	case '1':{
            CommandMode();
   	    break;
        }
	case '2':{
	    InsertMode();
	    break;
	}
        case '3':{
            cmd_Travou();
            break;
        }
	default:{
           cout << "..." << endl;
        }
   }//fim switch
}

void func2(char c){
   system("clear");
   switch(c){
     case '1':{
        cmd_Sair();
        break;
     }
     case '2':{
        cmd_Salvar();
 	break;
     }
     case '3':{
	cmd_Ajuda();
 	break;
     }
     case '4':{
	cmd_Mov();
	break;
     }
     case '5':{
        lineNumbers();
 	break;
     }
     case '6':{
	cmd_Modifica_Apaga();
	break;
     }
     case '7':{
   	cmd_Copiar_Recortar_Colar();
        break;
     }
     default:{
       cout << "..." << endl;
     }
   }//fim switch

}

void InsertMode(){
   char c;
   cout << "Ao entrar no modo de Inserção, o vim irá se comportar,";
   cout << " como um editor de textos" << endl;
   cout << "Para sair desse modo basta apertar [Esc]\n" << endl;
   while(1){
     cout << "Modo de Inserção\n" << endl;
     cout << "\nOpções:\n";
     cout << "[1] ☞  Teclas\n";
     cout << "[2] ☞  Inserir Caracteres Especiais" << endl;

     cout << "\n[Q] ☞  Quit" << endl;
     cout << "Escolha ~:> ";
     cin >> c;
     if(Sair(c))break;
     system("clear");
     switch(c){
        case '1':{
           Teclas();
           break;
   	}
	case '2':{
           Especial();
	   break;
        }
     }// fim switch
     system("clear");
   }// fim while

}


void Teclas(){
   cout << "Entrando no modo de Inserção - VIM\n" << endl;
   mostre("files/insert/insercao.txt");
   Back();
}

void Especial(){
   mostre("files/insert/special.txt");
   Back();
}
