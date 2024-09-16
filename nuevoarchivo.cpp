#include <iostream>

using namespace std;

int main() {
    // Declarar variables para los números y el resultado
    double num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es ahora: " << suma << endl;

    return 0;
}

