// Atividade - AEDs | Exercício nº 3;
// Nome: João Francisco da Silva Franco | Matrícula: 2021008720 | Data: 28/07/2021

#include <iostream>

using namespace std;

void pesquisa (float salario, int filhos){
	// Variáveis:
	float somasalario = 0, maiorsalario = 0, salariocem = 0, mediasalario = 0, somafilhos = 0, mediafilhos = 0, percentualsalariocem = 0;
	int habitantes = 0;
	while (salario >= 0){
		cout << endl << "Digite o valor do salario: R$ ";
		cin >> salario;
		if (salario >= 0){
			cout << "Digite o numero de filhos: ";
			cin >> filhos;
			// Salário da população:
			somasalario = somasalario + salario;
			habitantes++;
			// Filhos da população:
			somafilhos = somafilhos + filhos;
			// Maior salário;
			if (salario > maiorsalario){
			maiorsalario = salario;
			}
			// Pessoas com salário até R$ 100,00:
			if (salario <= 100){
			salariocem++;
			}
		}		
	}
	// Média dos salários da populacao:
	mediasalario = somasalario/habitantes;
	// Média dos filhos da população:
	mediafilhos = somafilhos/habitantes;
	// Percentual de pesssoas com o salário até R$ 100,00.
	percentualsalariocem = (salariocem*100)/habitantes;
	// Dados:
	cout << endl << "Dados:" << endl;
	cout << "- Media dos salarios da populacao: R$ " << mediasalario << endl;
	cout << "- Media do numero de filhos: " << mediafilhos << endl;
	cout << "- Maior salario: R$ " << maiorsalario << endl;
	cout << "- Percentual de pessoas com salario ate R$ 100,00: " << percentualsalariocem << "%.";
}

int main (){
	// Variáveis:
	float salario = 0;
	int filhos = 0;
	// Opções:
	cout << "O programa em questao realiza uma pesquisa a servico de um municipio." << endl;
	cout << "Contendo:" << endl;
	cout << endl << "- A media dos salarios da populacao." << endl;
	cout << "- A media do numero de filhos da populacao." << endl;
	cout << "- O maior salario da populacao." << endl;
	cout << "- O percentual de pessoas com salario ate' R$ 100,00 da populacao." << endl;
	cout << endl << "Para obter os dados acima, insira o salario seguido do numero de filhos de cada habitante." << endl;
	cout << "Para finalizar a operacao e obter os dados, insira um numero negativo." << endl;
	// Função:
	pesquisa(salario, filhos);
	return 0;
}
