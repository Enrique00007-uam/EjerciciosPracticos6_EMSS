// Desarrollar un programa que imprima los números impares en orden descendente que
// hay entre 1 y 100. Haslo en c++ utilizando la sentencia for

#include <iostream>
using namespace std;

int main() {
    for (int i = 99; i >= 1; i--) {
        if (i % 2!= 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
