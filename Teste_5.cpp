#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Digite uma string: ";
    cin >> str;

    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }

    for (int i = 0; i < tam / 2; i++) {
        char temp = str[i];
        str[i] = str[tam - i - 1];
        str[tam - i - 1] = temp;
    }

    cout << "String invertida: " << str << endl;

    return 0;
}

