#include<iostream>
using namespace std;

float calcularPromedio(float n1, float n2, float n3);
void mostrarResultado(float promedio);

int main()
{
    float nota1, nota2, nota3;
    float promedio;

    cout<<"Ingrese nota 1: ";
    cin>>nota1;

    cout<<"Ingrese nota 2: ";
    cin>>nota2;

    cout<<"Ingrese nota 3: ";
    cin>>nota3;

    promedio=calcularPromedio(nota1, nota2, nota3);

    mostrarResultado(promedio);

    return 0;
}

float calcularPromedio(float n1, float n2, float n3)
{
    float promedio;

    promedio = (n1 + n2 + n3) / 3;

    cout<<"Promedio calculado:\n "<<promedio<<endl;
    return promedio;
}

void mostrarResultado(float promedio)
{
    if(promedio >= 51)
    {
        cout<<"APROBADO"<<endl;
    }
    else
    {
        cout<<"REPROBADO"<<endl;
    }
}
