#include <iostream>
#include <string>

using namespace std;

// Función para leer la fecha
void leerFecha(int &dia, int &mes, int &año) {
    cout << "--- Conversor de Fechas ---" << endl;
    cout << "Ingrese el dia (ej. 20): ";
    cin >> dia;
    cout << "Ingrese el mes (ej. 5): ";
    cin >> mes;
    cout << "Ingrese el año (ej. 50): ";
    cin >> año;
}

// Procedimiento para convertir la fecha
void LITERAL(int dia, int mes, int año, string &mesLiteral, int &añoCompleto) {

    // Uso de la estructura switch para asignar el mes a la variable string
    switch (mes) {
        case 1: mesLiteral = "Enero"; break;
        case 2: mesLiteral = "Febrero"; break;
        case 3: mesLiteral = "Marzo"; break;
        case 4: mesLiteral = "Abril"; break;
        case 5: mesLiteral = "Mayo"; break;
        case 6: mesLiteral = "Junio"; break;
        case 7: mesLiteral = "Julio"; break;
        case 8: mesLiteral = "Agosto"; break;
        case 9: mesLiteral = "Septiembre"; break;
        case 10: mesLiteral = "Octubre"; break;
        case 11: mesLiteral = "Noviembre"; break;
        case 12: mesLiteral = "Diciembre"; break;
        default: mesLiteral = "Mes Invalido"; break;
    }

    // Transformación del año al formato completo (hasta el 2050)
    if (año < 100) {
        if (año <= 50) {
            // Si el año ingresado es menor o igual a 50, se asume que es del 2000 al 2050
            añoCompleto = 2000 + año;
        } else {
            // Si es mayor a 50 (ej. 99), se asume que es de 1900 (ej. 1999)
            añoCompleto = 1900 + año;
        }
    } else {
        // Si el usuario ingresa el año con 4 dígitos, se mantiene igual
        añoCompleto = año;
    }
}

// Función para mostrar la fecha literal
void mostrarFecha(int dia, string mesLiteral, int añoCompleto) {
    cout << "\nFecha convertida: " << dia << " de " << mesLiteral << " de " << añoCompleto << endl;
}

int main() {
    int dia, mes, año, añoCompleto;
    string mesLiteral;

    leerFecha(dia, mes, año);
    LITERAL(dia, mes, año, mesLiteral, añoCompleto);
    mostrarFecha(dia, mesLiteral, añoCompleto);

    return 0;
}
