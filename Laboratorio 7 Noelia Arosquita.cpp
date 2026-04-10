#include <iostream>
using namespace std;
int main() {
    int N;
    float sumatoriatotal;

    cout << "Ingrese N:";
    cin >> N;
    int f1 =0,f2=1,fib;
    int impar=1;
    for (int i=1;i<=N;i++){
        cout<<f1<<"/"<<impar<<endl;
        fib=f1+f2;
        f1=f2;
        f2=fib;
        impar+=2;
        sumatoriatotal+=(float)f1/impar;

    }
    cout<<"Mostrar sumatoriatotal:"<<sumatoriatotal<<endl;
return 0;


    }
