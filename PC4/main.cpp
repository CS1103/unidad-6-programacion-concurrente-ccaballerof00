#include <iostream>
#include <vector>
#include "Concurrente.h"
#include <ctime>
#include <thread>

using namespace std;


int main() {
    Matriz<int> m1 =Matriz<int>(2,3);
    for(int i=0;i<m1.filas;i++){
        for(int j=0;j<m1.columnas;j++){
            m1.AnadirElemento(2,i,j);
        }
    }
    m1.imprimirMatriz();
    cout<<endl;


    Matriz<int> m2 = Matriz<int>(3,4);
    for(int i=0;i<m2.filas;i++){
        for(int j=0;j<m2.columnas;j++){
            m2.AnadirElemento(3,i,j);
        }
    }

   m2.imprimirMatriz();
    cout<<endl;


    unsigned t0, t1;
    try {
        t0=clock();
        Matriz<int> m3 = m1 ^ m2;
        t1=clock();
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
        cout<< "Tiempo de ejecución:"<<time<<endl;
        m3.imprimirMatriz();
    }
    catch (exception& e)
    {
        cout<<e.what();
    }
    cout<<endl;

    /*Matriz<int> m4 =Matriz<int>(3,4);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            m4.AnadirElemento(5,i,j);
        }
    }
    m4.imprimirMatriz();
    cout<<endl;


    Matriz<int> m5 = Matriz<int>(4,4);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            m5.AnadirElemento(1,i,j);
        }
    }

    m5.imprimirMatriz();
    cout<<endl;*/

    Matriz<int>m6=m1*m2;
    m6.imprimirMatriz();
    //thread::hardware_concurrency();
}