#include <iostream>
#include <stdio.h>
using namespace std;

#define T 100

void Back(){
   setbuf(stdin, NULL);
   char c;
   cout << "\nPressione [b] para voltar《 ";
   cin >> c;
   setbuf(stdin, NULL);
}


void mostre(const char* link){
   FILE *arq;
   char linha[T];
   char *op;
   arq = fopen(link, "rt");
   if(arq == NULL){
  	cout << "Arquivo nao pode ser aberto" << endl;
   }else{
      while(!feof(arq)){
        op = fgets(linha, T, arq);
        if(op != NULL){
           printf("%s\n", op); 
        } 
      }
   }
  fclose(arq);
}

void cmd_Sair(){
   cout << "Comandos para SAIR\n" << endl;
   mostre("files/command/exit.txt");
   Back();
}

void cmd_Salvar(){
   cout << "Comandos para Salvar as modificações feitas no arquivo\n" << endl;
   mostre("files/command/save.txt");
   Back();
}

void cmd_Ajuda(){
   cout << "Comandos de Ajuda\n" << endl;
   mostre("files/command/help.txt");
   Back();
} 

void cmd_Mov(){
   cout << "Comandos para movimentar rapidamente pelo Arquivo" << endl;
   cout << "\nLetras maiusculas e minusculas se comportam diferente\n" << endl;
   mostre("files/command/mov.txt");
   Back();

}

void lineNumbers(){
   cout << "Comando para mostrar a numeração de linhas no VIM\n" << endl;
   mostre("files/command/linum.txt");
   Back();

}

void cmd_Modifica_Apaga(){
   cout << "Modificando/Apagando caracteres e linhas\n" << endl;
   mostre("files/command/modificaApaga.txt");
   Back();
}

void cmd_Copiar_Recortar_Colar(){
   cout << "Copiar, Recortar e Colar\n" << endl;
   mostre("files/command/crc.txt");
   Back(); 

}

void cmd_Travou(){
   cout << "Caso o vim não esteja repondendo ao nenhum comando tente isto!\n\n";
   mostre("files/opcoes/travou.txt");
   Back();
}
