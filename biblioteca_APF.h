void menu(){
	system("cls");
	printf("\n    | SISTEMA DE GERENCIAMENTO ACAD�MICO |\n");
	printf("\n	| 1 - Cadastrar Disciplina |");
	printf("\n	| 2 - Cadastrar Estudante  |");
	printf("\n	| 3 - Inserir Notas        |");
	printf("\n	| 4 - Alterar Nota         |");
	printf("\n	| 5 - Relat�rio de Notas   |");
	printf("\n	| 0 - Sair do Programa     |");
	printf("\n\n	 Op��o selecionada: ");
}
int entrada_opcao(){
	int opcao;
	scanf("%d", &opcao);
	return opcao;
}
char consistencia(){
	char opcao_2;
		do{
			system("cls");
			printf("\n	| Voc� deseja sair do programa agora? <s> p/ sim ou <n> para n�o: ");
			scanf("%c", &opcao_2);
			opcao_2 = tolower (opcao_2);
		}while (opcao_2 != 's' && opcao_2 != 'n');
	if(opcao_2 == 's'){
		printf("\nTecle <enter> para fechar o programa!");
	}
	return opcao_2;
}
