#include <iostream>
using namespace std;
    int main(){
    double x;
    int n;
    double sumaCosh = 0.0;

    cout << "--- Calculo de Deflexion (Coseno Hiperbolico) ---" << endl;
    cout << "Ingrese la distancia (x): ";
    cin >> x;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    for (int k = 0; k < n; k++) {
        int exponente = 2 * k;
        double numerador = 1.0;
        for (int i = 0; i < exponente; i++) {
            numerador *= x;
    }
    double denominador = 1.0;
        for (int i = 1; i <= exponente; i++) {
            denominador *= i;
        }
        double terminoActual = numerador / denominador;
        sumaCosh += terminoActual;
    }

    cout << "\nEl valor aproximado de cosh(" << x << ") con " << n << " terminos es: " << sumaCosh << endl;

    return 0;
}
