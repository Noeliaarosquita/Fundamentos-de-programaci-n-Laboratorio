#include <iostream>
#include <cmath>

using namespace std;

// Función para leer el número y los decimales
void leerDatosRedondeo(double &R, int &n) {
    cout << "--- Herramienta de Redondeo ---" << endl;
    cout << "Ingrese el numero real (R): ";
    cin >> R;
    cout << "Ingrese la cantidad de decimales (n): ";
    cin >> n;
}

// Función que realiza el redondeo
double redondearNumero(double R, int n) {
    // Calculamos el factor de multiplicacion: 10 elevado a la n
    double factor = pow(10, n);

    // Multiplicamos, redondeamos el entero y volvemos a dividir
    return round(R * factor) / factor;
}

// Función para mostrar el resultado final
void mostrarRedondeo(double resultado) {
    cout << "\nEl numero redondeado es: " << resultado << endl;
}

int main() {
    double numeroReal, numeroRedondeado;
    int decimales;

    leerDatosRedondeo(numeroReal, decimales);
    numeroRedondeado = redondearNumero(numeroReal, decimales);
    mostrarRedondeo(numeroRedondeado);

    return 0;
}
