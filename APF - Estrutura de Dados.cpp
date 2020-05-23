#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include "biblioteca_APF.h"
int main(){
	setlocale(LC_ALL,"");
	do{
		menu();
		switch (entrada_opcao()){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 0:
				printf("\nTecle <enter> para fechar o programa!");
				exit(0);
			default:
				printf("\n	Opção inválida. Tecle qualquer tecla para retornar ao menu.");
				system("pause>null");
				return main();
		}
	}while(consistencia() != 's');
}
