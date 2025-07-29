#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número entero: ";
    cin >> numero;

    string numStr = to_string(abs(numero)); // Convertir a string y usar valor absoluto para evitar signo

    int suma = 0;

    for (int i = 0; i < numStr.length(); i++) {
        suma += numStr[i] - '0'; // Convertir caracter a su valor numérico
    }

    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}
