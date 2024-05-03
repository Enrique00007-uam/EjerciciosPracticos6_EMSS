/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int i, suma;

    for (int i = 100; i <= 200; i=i+2)
    {
        
        suma = suma + i;
    }
    
    cout << "El resultado de la suma es: " << suma << endl;


    return 0;
}
