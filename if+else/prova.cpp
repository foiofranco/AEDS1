// Avaliação | Laboratório de Programação | Data: 13/08/2021
// Nome: João Francisco da Silva Franco || Matrícula: 2021008720

#include <iostream>
#include <locale.h>

using namespace std;

// Função Auxiliar:
void aprovacao (int matricula, float nota1, float nota2, float nota3, int frequencia){
// Variáveis:
	// ndm = número de matrícula | fda = frequência do aluno | cont = contador;
	// rpv = reprovados, rpv = reprovados por frequência;
	int ndm[10], fda[10], cont = 0, rpv = 0, rpf = 0;
	
	// nf = nota final| nta = nota do aluno | sdnt = soma das notas da turma;
	// nm = Nota média da turma | pdrpf = percentual de reprovados por frequência;
	float nf = 0, nta[10], maiornota = 0, menornota = 101, sdnt = 0, nmdt = 0, pdrpf = 0;
	
	// Condição com base no número de alunos exigidos:
	while (cont < 10){
	// Letra A:
		// Pedido do número de matrícula:
		cout << "Aluno " << cont+1 << ":" << endl << endl;
		cout << "- Número de matrícula: ";
		cin >> matricula;
		if (matricula < 0){
			while (matricula < 0){
				cout << "- Digite um número de matrícula positivo: ";
				cin >> matricula;
			}
		}
		
		// Pedido da primeira nota:
		cout << "- Primeira nota: ";
		cin >> nota1;
		if (nota1 < 0 || nota1 > 100){
			while (nota1 < 0 || nota1 > 100){
				cout << "- Nota inválida, insira um valor de 0 até 100 para a primeira nota: ";
				cin >> nota1;
			}
		}
			
		// Pedido da segunda nota:
		cout << "- Segunda nota: ";
		cin >> nota2;
		if (nota2 < 0 || nota2 > 100){
			while (nota2 < 0 || nota2 > 100){
				cout << "- Nota inválida, insira um valor de 0 até 100 para a segunda nota: ";
				cin >> nota2;
			}
		}
		
		// Pedido da terceira nota:
		cout << "- Terceira nota: ";
		cin >> nota3;
		if (nota3 < 0 || nota3 > 100){
			while (nota3 < 0 || nota3 > 100){
				cout << "- Nota inválida, insira um valor de 0 até 100 para a terceira nota: ";
				cin >> nota3;
			}
		}
		
		// Pedido da frequência:
		cout << "- Frequência: ";
		cin >> frequencia;
		if (frequencia < 0 || frequencia > 40){
			while (frequencia < 0 || frequencia > 200){
				cout << "- Frequência inválida, insira um valor de 0 a 200 de acordo com o ano letivo: ";
				cin >> frequencia;
			}
		}
		cout << endl << "------------------------------------------------------------------------------------------------" << endl << endl;
	
	// Letra B:
		// Nota final:
		nf = ((nota1 + nota2 + nota3)/3);
		
		// Reprovados:
		if (nf < 60 || frequencia < 20){
			rpv++;
		}
		
		// Reprovados por frequência:
		if (frequencia < 20){
			rpf++;
		}
		
		// Soma das notas da turma:
		sdnt = sdnt + nf;
		
		// Menor nota:
		if (nf < menornota){
			menornota = nf;
		}
		
		// Maior nota:
		if (nf > maiornota){
			maiornota = nf;
		}
		
		// Armazenamento condicionado de informações:
		if (cont == 0){
			ndm[0] = matricula;
			nta[0] = nf;
			fda[0] = frequencia;
		}else{
			if (cont == 1){
				ndm[1] = matricula;
				nta[1] = nf;
				fda[1] = frequencia;
			}else{
				if (cont == 2){
					ndm[2] = matricula;
					nta[2] = nf;
					fda[2] = frequencia;
				}else{
					if (cont == 3){
						ndm[3] = matricula;
						nta[3] = nf;
						fda[3] = frequencia;
					}else{
						if (cont == 4){
							ndm[4] = matricula;
							nta[4] = nf;
							fda[4] = frequencia;
						}else{
							if (cont == 5){
								ndm[5] = matricula;
								nta[5] = nf;
								fda[5] = frequencia;
							}else{
								if (cont == 6){
									ndm[6] = matricula;
									nta[6] = nf;
									fda[6] = frequencia;
								}else{
									if (cont == 7){
										ndm[7] = matricula;
										nta[7] = nf;
										fda[7] = frequencia;
									}else{
										if (cont == 8){
											ndm[8] = matricula;
											nta[8] = nf;
											fda[8] = frequencia;
										}else{
											if (cont == 9){
												ndm[9] = matricula;
												nta[9] = nf;
												fda[9] = frequencia;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		// Contador:
		cont++;
	}
	// Nota média da turma:
	nmdt = (sdnt/10);
	
	// Percentual de alunos reprovados por falta:
	pdrpf = ((100*rpf)/10);
	
	// Resultado - Relatório dos alunos: 
	cout <<  "Relatório específico: " << endl << endl;
	
	// Aluno 1:
	cout << "- Aluno: 1 | Matrícula: " << ndm[0] << " | Nota: " << nta[0] << " | Frequência: " << fda[0] << " | Situação: ";
	if (nta[0] < 60 || fda[0] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 2:
	cout << "- Aluno: 2 | Matrícula: " << ndm[1] << " | Nota: " << nta[1] << " | Frequência: " << fda[1] << " | Situação: ";
	if (nta[1] < 60 || fda[1] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 3:
	cout << "- Aluno: 3 | Matrícula: " << ndm[2] << " | Nota: " << nta[2] << " | Frequência: " << fda[2] << " | Situação: ";
	if (nta[2] < 60 || fda[2] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 4:
	cout << "- Aluno: 4 | Matrícula: " << ndm[3] << " | Nota: " << nta[3] << " | Frequência: " << fda[3] << " | Situação: ";
	if (nta[3] < 60 || fda[3] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 5:
	cout << "- Aluno: 5 | Matrícula: " << ndm[4] << " | Nota: " << nta[4] << " | Frequência: " << fda[4] << " | Situação: ";
	if (nta[4] < 60 || fda[4] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 6:
	cout << "- Aluno: 6 | Matrícula: " << ndm[5] << " | Nota: " << nta[5] << " | Frequência: " << fda[5] << " | Situação: ";
	if (nta[5] < 60 || fda[5] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 7:
	cout << "- Aluno: 7 | Matrícula: " << ndm[6] << " | Nota: " << nta[6] << " | Frequência: " << fda[6] << " | Situação: ";
	if (nta[6] < 60 || fda[6] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 8:
	cout << "- Aluno: 8 | Matrícula: " << ndm[7] << " | Nota: " << nta[7] << " | Frequência: " << fda[7] << " | Situação: ";
	if (nta[7] < 60 || fda[7] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 9:
	cout << "- Aluno: 9 | Matrícula: " << ndm[8] << " | Nota: " << nta[8] << " | Frequência: " << fda[8] << " | Situação: ";
	if (nta[8] < 60 || fda[8] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 10:
	cout << "- Aluno: 10 | Matrícula: " << ndm[9] << " | Nota: " << nta[9] << " | Frequência: " << fda[9] << " | Situação: ";
	if (nta[9] < 60 || fda[9] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	cout << endl << "------------------------------------------------------------------------------------------------" << endl << endl;
	
	// Resultado - Relatório geral: 
	cout << "Relatório geral: " << endl << endl;
	
	// Menor nota:
	cout << "- Menor nota : " << menornota << endl;
	
	// Maior nota:
	cout << "- Maior nota: " << maiornota << endl;
	
	// Média da turma:
	cout << "- Média da turma: " << nmdt << endl;
	
	// Total de alunos reprovados:
	cout << "- Total de alunos reprovados: " << rpv << endl;
	
	// Percentual de alunos reprovados por frequência:
	cout << "- Percentual de alunos reprovados por frequência: " << pdrpf << "%" << endl << endl;
	
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	
}

// Função principal:
int main (){
	setlocale (LC_ALL, "Portuguese");
	int matricula = 0, frequencia = 0;
	float nota1 = 0, nota2 = 0, nota3 = 0;
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "O programa questão realiza um relatório de aprovação sobre uma turma de 10 alunos de acordo com:" << endl << endl;
	cout << "- O número de matrícula de cada aluno." << endl;
	cout << "- As três notas anuais obtidas por cada aluno." << endl;
	cout << "- O número de aulas frequentadas por cada aluno." << endl << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	aprovacao (matricula, nota1, nota2, nota3, frequencia);
	return 0;
}
