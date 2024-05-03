/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>
using namespace std;

int main() {
    int scores[8];
    int approved = 0;
    int reprobated = 0;
    int sum = 0;

    cout << "Enter the scores of 8 students: ";
    for (int i = 0; i < 8; i++) {
        cin >> scores[i];
        sum += scores[i];
        if (scores[i] >= 70) {
            approved++;
        } else {
            reprobated++;
        }
    }

    double average = static_cast<double>(sum) / 8;
    cout << "Number of approved students: " << approved << endl;
    cout << "Number of reprobated students: " << reprobated << endl;
    cout << "Average score: " << average << endl;

    return 0;
}