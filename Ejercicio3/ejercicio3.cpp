/*3. Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int suma;
    for (int i = 1; i <=100; i++)
    {
        
        
        suma = suma + i * i;
        
    }
 cout << suma;
    
    return 0;
}