#include <iostream>
#include <string>

using namespace std;

// DECLARACION DE FUNCIONES

void leerDatos(string &cadena, string &subcadena);

int BuscarSubCadena(string subcadena, string cadena);

void mostrarResultado(string cadena, string subcadena, int posicion);

// MAIN

int main() {

string cadena;
string subcadena;
int posicion;

leerDatos(cadena, subcadena);

posicion = BuscarSubCadena(subcadena, cadena);

mostrarResultado(cadena, subcadena, posicion);

return 0;
}

// DETALLE DE FUNCIONES

void leerDatos(string &cadena, string &subcadena) {

cout << "Ingrese la cadena principal: ";
getline(cin, cadena);

cout << "Ingrese la subcadena a buscar: ";
getline(cin, subcadena);
}

int BuscarSubCadena(string subcadena, string cadena) {

int posicion;

posicion = cadena.find(subcadena);

if(posicion >= 0) {
return posicion;
}
else {
return -1;
}
}

void mostrarResultado(string cadena, string subcadena, int posicion) {

cout << "\n===== RESULTADO =====" << endl;
cout << "Cadena principal: " << cadena << endl;
cout << "Subcadena buscada: " << subcadena << endl;

if(posicion != -1) {
cout << "La subcadena se encuentra en la posicion: "
<< posicion << endl;
}
else {
cout << "La subcadena no se encuentra en la cadena." << endl;
}
}
