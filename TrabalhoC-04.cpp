#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura de decisão, qualquer multiplicção por 0 retorna 0
int func_recursiva(int multiplicando, int multiplicador) {
	if (multiplicando == 0 || multiplicador == 0) {
		return 0;
	}
	// Se for igual a 1 retorna o valor
	else if (multiplicando == 1) {
		return(multiplicador);
	}
	// Se não for 0 e nem 1 retorna a função abaixo
	else {
		return(multiplicador + func_recursiva(multiplicando - 1, multiplicador));
	}
}
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa em Português BR

	int resposta;
	resposta = func_recursiva(3, 2);
	system("pause");
	return 0;
}