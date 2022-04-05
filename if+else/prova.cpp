// Avalia��o | Laborat�rio de Programa��o | Data: 13/08/2021
// Nome: Jo�o Francisco da Silva Franco || Matr�cula: 2021008720

#include <iostream>
#include <locale.h>

using namespace std;

// Fun��o Auxiliar:
void aprovacao (int matricula, float nota1, float nota2, float nota3, int frequencia){
// Vari�veis:
	// ndm = n�mero de matr�cula | fda = frequ�ncia do aluno | cont = contador;
	// rpv = reprovados, rpv = reprovados por frequ�ncia;
	int ndm[10], fda[10], cont = 0, rpv = 0, rpf = 0;
	
	// nf = nota final| nta = nota do aluno | sdnt = soma das notas da turma;
	// nm = Nota m�dia da turma | pdrpf = percentual de reprovados por frequ�ncia;
	float nf = 0, nta[10], maiornota = 0, menornota = 101, sdnt = 0, nmdt = 0, pdrpf = 0;
	
	// Condi��o com base no n�mero de alunos exigidos:
	while (cont < 10){
	// Letra A:
		// Pedido do n�mero de matr�cula:
		cout << "Aluno " << cont+1 << ":" << endl << endl;
		cout << "- N�mero de matr�cula: ";
		cin >> matricula;
		if (matricula < 0){
			while (matricula < 0){
				cout << "- Digite um n�mero de matr�cula positivo: ";
				cin >> matricula;
			}
		}
		
		// Pedido da primeira nota:
		cout << "- Primeira nota: ";
		cin >> nota1;
		if (nota1 < 0 || nota1 > 100){
			while (nota1 < 0 || nota1 > 100){
				cout << "- Nota inv�lida, insira um valor de 0 at� 100 para a primeira nota: ";
				cin >> nota1;
			}
		}
			
		// Pedido da segunda nota:
		cout << "- Segunda nota: ";
		cin >> nota2;
		if (nota2 < 0 || nota2 > 100){
			while (nota2 < 0 || nota2 > 100){
				cout << "- Nota inv�lida, insira um valor de 0 at� 100 para a segunda nota: ";
				cin >> nota2;
			}
		}
		
		// Pedido da terceira nota:
		cout << "- Terceira nota: ";
		cin >> nota3;
		if (nota3 < 0 || nota3 > 100){
			while (nota3 < 0 || nota3 > 100){
				cout << "- Nota inv�lida, insira um valor de 0 at� 100 para a terceira nota: ";
				cin >> nota3;
			}
		}
		
		// Pedido da frequ�ncia:
		cout << "- Frequ�ncia: ";
		cin >> frequencia;
		if (frequencia < 0 || frequencia > 40){
			while (frequencia < 0 || frequencia > 200){
				cout << "- Frequ�ncia inv�lida, insira um valor de 0 a 200 de acordo com o ano letivo: ";
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
		
		// Reprovados por frequ�ncia:
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
		
		// Armazenamento condicionado de informa��es:
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
	// Nota m�dia da turma:
	nmdt = (sdnt/10);
	
	// Percentual de alunos reprovados por falta:
	pdrpf = ((100*rpf)/10);
	
	// Resultado - Relat�rio dos alunos: 
	cout <<  "Relat�rio espec�fico: " << endl << endl;
	
	// Aluno 1:
	cout << "- Aluno: 1 | Matr�cula: " << ndm[0] << " | Nota: " << nta[0] << " | Frequ�ncia: " << fda[0] << " | Situa��o: ";
	if (nta[0] < 60 || fda[0] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 2:
	cout << "- Aluno: 2 | Matr�cula: " << ndm[1] << " | Nota: " << nta[1] << " | Frequ�ncia: " << fda[1] << " | Situa��o: ";
	if (nta[1] < 60 || fda[1] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 3:
	cout << "- Aluno: 3 | Matr�cula: " << ndm[2] << " | Nota: " << nta[2] << " | Frequ�ncia: " << fda[2] << " | Situa��o: ";
	if (nta[2] < 60 || fda[2] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 4:
	cout << "- Aluno: 4 | Matr�cula: " << ndm[3] << " | Nota: " << nta[3] << " | Frequ�ncia: " << fda[3] << " | Situa��o: ";
	if (nta[3] < 60 || fda[3] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 5:
	cout << "- Aluno: 5 | Matr�cula: " << ndm[4] << " | Nota: " << nta[4] << " | Frequ�ncia: " << fda[4] << " | Situa��o: ";
	if (nta[4] < 60 || fda[4] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 6:
	cout << "- Aluno: 6 | Matr�cula: " << ndm[5] << " | Nota: " << nta[5] << " | Frequ�ncia: " << fda[5] << " | Situa��o: ";
	if (nta[5] < 60 || fda[5] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 7:
	cout << "- Aluno: 7 | Matr�cula: " << ndm[6] << " | Nota: " << nta[6] << " | Frequ�ncia: " << fda[6] << " | Situa��o: ";
	if (nta[6] < 60 || fda[6] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 8:
	cout << "- Aluno: 8 | Matr�cula: " << ndm[7] << " | Nota: " << nta[7] << " | Frequ�ncia: " << fda[7] << " | Situa��o: ";
	if (nta[7] < 60 || fda[7] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 9:
	cout << "- Aluno: 9 | Matr�cula: " << ndm[8] << " | Nota: " << nta[8] << " | Frequ�ncia: " << fda[8] << " | Situa��o: ";
	if (nta[8] < 60 || fda[8] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	// Aluno 10:
	cout << "- Aluno: 10 | Matr�cula: " << ndm[9] << " | Nota: " << nta[9] << " | Frequ�ncia: " << fda[9] << " | Situa��o: ";
	if (nta[9] < 60 || fda[9] < 20){
		cout << "reprovado." << endl;
	}else{
		cout << "aprovado." << endl;
	}
	
	cout << endl << "------------------------------------------------------------------------------------------------" << endl << endl;
	
	// Resultado - Relat�rio geral: 
	cout << "Relat�rio geral: " << endl << endl;
	
	// Menor nota:
	cout << "- Menor nota : " << menornota << endl;
	
	// Maior nota:
	cout << "- Maior nota: " << maiornota << endl;
	
	// M�dia da turma:
	cout << "- M�dia da turma: " << nmdt << endl;
	
	// Total de alunos reprovados:
	cout << "- Total de alunos reprovados: " << rpv << endl;
	
	// Percentual de alunos reprovados por frequ�ncia:
	cout << "- Percentual de alunos reprovados por frequ�ncia: " << pdrpf << "%" << endl << endl;
	
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	
}

// Fun��o principal:
int main (){
	setlocale (LC_ALL, "Portuguese");
	int matricula = 0, frequencia = 0;
	float nota1 = 0, nota2 = 0, nota3 = 0;
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "O programa quest�o realiza um relat�rio de aprova��o sobre uma turma de 10 alunos de acordo com:" << endl << endl;
	cout << "- O n�mero de matr�cula de cada aluno." << endl;
	cout << "- As tr�s notas anuais obtidas por cada aluno." << endl;
	cout << "- O n�mero de aulas frequentadas por cada aluno." << endl << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl << endl;
	aprovacao (matricula, nota1, nota2, nota3, frequencia);
	return 0;
}
