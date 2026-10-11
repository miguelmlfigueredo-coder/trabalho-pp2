#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int qtdEquipes= 3;
	int qtdjogos = 18;
	int i=1;
	int totaldevitorias=0;
	int totaldeDerrotas=0;
	int totaldeEmpates=0;
	
	int vitorias=0;
	int Derrotas=0;
	int Empates=0;
	int pontos=0;