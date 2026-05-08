#include <iostream>
#include <cmath>

using namespace std;

// Función para leer los datos
void leerDatos(float &base, float &exponente) {
    cout << "--- Calculadora de Potencias ---" << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
}

// Función que calcula la potencia
float POTEN(float x, float y) {
    return pow(x, y);
}

// Función para mostrar el resultado
void mostrarResultado(float base, float exponente, float resultado) {
    cout << "\nEl resultado de elevar " << base << " a la potencia de " << exponente << " es: " << resultado << endl;
}

int main() {
    float base, exponente, resultado;

    leerDatos(base, exponente);
    resultado = POTEN(base, exponente);
    mostrarResultado(base, exponente, resultado);

    return 0;
}
