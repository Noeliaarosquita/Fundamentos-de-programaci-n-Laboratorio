#include <iostream>
#include <string>

using namespace std;

void mostrarMenu();
float obtenerPrecio(int opcion);
float calcularSubtotal(float precio, int meses);
float calcularDescuento(float subtotal, int meses);
void mostrarResultado(string nombre, float subtotal, float descuento, float total);


int main() {
    string nombre;
    int opcion, meses;
    float precio, subtotal, descuento, total;

    cout << "Nombre del cliente: ";
    getline(cin, nombre);
    mostrarMenu();
    cout << "Elige un plan (1, 2 o 3): ";
    cin >> opcion;
    cout << "Cuantos meses?: ";
    cin >> meses;


    precio = obtenerPrecio(opcion);
    subtotal = calcularSubtotal(precio, meses);
    descuento = calcularDescuento(subtotal, meses);

    total = subtotal - descuento;

    mostrarResultado(nombre, subtotal, descuento, total);

    return 0;
}



void mostrarMenu() {
    cout << "1. Basico (100) \n2. Intermedio (180) \n3. Premium (250)\n";
}

float obtenerPrecio(int opcion) {
    if (opcion == 1) return 100;
    if (opcion == 2) return 180;
    if (opcion == 3) return 250;
    return 0;
}

float calcularSubtotal(float precio, int meses) {
    return precio * meses;
}

float calcularDescuento(float subtotal, int meses) {
    if (meses > 3) {
        return subtotal * 0.15; // 15% de descuento
    }
    return 0;
}

void mostrarResultado(string nombre, float subtotal, float descuento, float total) {
    cout << "\n--- RECIBO ---\n";
    cout << "Cliente: " << nombre << "\n"; //
    cout << "Subtotal: " << subtotal << "\n";
    cout << "Descuento: " << descuento << "\n";
    cout << "Total a pagar: " << total << "\n";
}
