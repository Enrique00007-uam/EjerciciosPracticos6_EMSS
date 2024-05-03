/*Realice un programa que permita calcular y dar como salida el promedio general de una sección,
 tomando en cuenta que está compuesta por 10 estudiantes y que se tiene la nota de cada uno de ellos.
 haslo en c++ con la sentencia for*/

 #include <iostream>
using namespace std;

int main() {
    float scores[10];
    float sum = 0;
    float average;

    cout << "Enter the scores of 10 students: ";
    for (int i = 0; i < 10; i++) {
        cin >> scores[i];
        sum += scores[i];
    }

    average = sum / 10;
    cout << "The average score of the section is: " << average << endl;

    return 0;
}