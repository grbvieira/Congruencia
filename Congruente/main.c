/// <summary>
/// Código referente ao trabalho final da disciplina Modelagem e Simulação de Sistemas
/// Alunos:
/// Fernanda de Medeiros Antonaccio
/// Gerson Rodrigo Braga Vieira
/// Jéssica Luana Oliveira de Lima
/// Lorena Paiva de Figueiredo
/// Ígor Martins
/// 
/// O programa realiza a geração de números aleatórios na quantidade informada pelo usuário.
/// O método utilizado é o Congruencial Linear Misto
/// </summary>
/// 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/// <summary>
/// Calcula número aleatório congruencial linear misto
/// </summary>
/// <param name="numero">Numero anterior ou a semente</param>
/// <param name="a">Multiplicador</param>
/// <param name="c">Incremento</param>
/// <param name="m">Módulo</param>
/// <param name="bits">Quantidade de bits que terá o número aleatório, por padrão são 16</param>
/// <returns>Número aleatório</returns>
int calcularNumero(int numero_anterior, int multiplicador, int incremento, int modulo, int bits = 16);

/// <summary>
/// Ponto de entrada do programa
/// </summary>
/// <returns>Resultado da execução do programa</returns>
int main(void) {

	int x				= 1;	// Semente
	int multiplicador	= 37;	// Multiplicador
	int incremento		= 3;	// Incremento
	int modulo			= 2;	// Módulo
	int numero_de_bits	= 32;	// Quantidade de bits a serem usados no resultado do número aleatório
	int quantidade;				// Quantidade de números a serem calculados

	printf("Digite a quantidade de numeros desejados: ");
	scanf("%d", &quantidade);

	// Iteramos sobre a quantidade de números a serem gerados
	for (int i = 0; i < quantidade; i++) {

		// Pegamos o número calculado e retornamos para a variável
		// x para ser usada como número anterior no cálculo do próximo número aleatório
		x = calcularNumero(x, multiplicador, incremento, modulo, numero_de_bits);

		printf("%d\n", x);
	}

	// Pausa para vermos os resultados
	system("pause");

	return 0;
}

// Definição da função já foi documentada no começo do arquivo
int calcularNumero(int numero_anterior, int multiplicador, int incremento, int modulo, int bits = 16) {
	return ((multiplicador * numero_anterior) + incremento) % (int)pow(modulo, bits);
}

