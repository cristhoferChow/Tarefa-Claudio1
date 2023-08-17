// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
    string nome = "";
    string res = "";
    float n1 = 0;
    float n2 = 0;
    float med = 0;




    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua primeira nota: ";
    cin >> n1;

    cout << "Digite sua segunda nota: ";
    cin >> n2;

    med = (n1 + n2) / 2;

    if (med>=6) {
        res = "Aprovado";
    }
    else {
        res = "Reprovado";
    }

    system("cls");

    cout << "Nome: " << nome << endl;
    cout << "Sua media e: " << med << endl;
    cout << "Voce foi: " << res << endl;

}
