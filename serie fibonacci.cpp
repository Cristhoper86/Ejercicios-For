#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingresa la cantidad de términos de la serie Fibonacci: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Serie Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        int siguiente = a + b;
        a = b;
        b = siguiente;
    }

    cout << endl;
    return 0;
}
