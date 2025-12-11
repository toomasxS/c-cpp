#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);
int anoAtual = datetime.tm_year + 1900;
int mesAtual = datetime.tm_mon + 1;
int diaAtual = datetime.tm_mday;

string grauIdade(int idade) {
    if (idade >= 0 && idade <= 1) return "Recem-nascido";
    else if (idade > 1 && idade <= 3) return "Bebe";
    else if (idade > 3 && idade <= 12) return "Crianca";
    else if (idade > 12 && idade <= 18) return "Adolescente";
    else if (idade > 18 && idade <= 50) return "Adulto";
    else if (idade > 50) return "Velhote !!!";
    return "Nao encontrei correspondencia";
}

int main() {
    char op = '0';
    int idade;
    int idadeX = 0;
    int anoAtual = 2025;
    int anoNascimento = anoAtual - idade;
    int mes, dia;

    do {
        cout << "Menu:\n";
        cout << "1 - Saber grau da sua idade\n";
        cout << "2 - Calcular ano em que nasceu\n";
        cout << "3 - Saber a geração que nasceu\n";
        cout << "0 - Sair\n";
        cout << "O que pretende fazer: ";
        cin >> op;

        switch (op) {

            case '1':
                cout << "\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "\nVoce parece ser um " << grauIdade(idadeX) << "\n\n";
                break;


            case '2':
                cout << "\nQual a sua idade atual? ";
                cin >> idade;

                cout << "Dia do seu aniversario (1-31): ";
                cin >> dia;

                cout << "Mês do seu aniversário (1-12): ";
                cin >> mes;


                if (mes == 12 && dia >= 11) {
                    anoNascimento -= 1;
                }

                cout << "\nVocê nasceu em " << anoNascimento << "\n\n";
                break;

            case '3':
                cout << "\nQual a sua idade atual? ";
                cin >> idade;

            case '0':
                cout << "Sair do programa .. xau\n";
                break;

            default:
                cout << "Opcao invalida!\n";
                break;
        }
    } while (op != '0');

    return 0;
}
