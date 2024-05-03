/*Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n. Codifica 
el programa que resuelva este planteamiento. utiliza la sentencia for, haslo en c++*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}