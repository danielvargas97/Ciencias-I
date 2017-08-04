/*
    Ciencias de la computación 1
    Algoritmo de Multiplicación

    Daniel Alfonso Vargas Ortiz
    20152020009

*/


#include <iostream>
using namespace std;


int f(int,int);

int main(){
    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    cout << f(x,y) << endl;


    return 0;
}

int f(int m,int n){
    int resultado = 0;
    do{
        if(m%2 == 1){
            resultado+=n;
        }
        m = m/2;
        n+=n;
    }while(m!=0);

    return resultado;

}
