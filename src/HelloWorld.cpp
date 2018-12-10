#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int ano, idade;

    cout << "Digite o ano de nascimento: ";
    cin >> ano;

    idade = 2018 - ano;
    for (int i = 0; i < 10; i++) {
        cout << "Idade: " << idade << endl;
    }
    return 0;
}
