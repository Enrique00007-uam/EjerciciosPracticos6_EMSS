/* 5.Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>

using namespace std;
int calificaciones[8];
int calcularPromedio(int c[]);
int alumAprobados, alumReprobados;
int main(int argc, char const *argv[])
{
   
   calcularPromedio(calificaciones);
    
   
    
    return 0;
}
 
 
 int calcularPromedio(int c[]){
int sumaC;
float promedio;
    for (int i = 0; i < 8; i++)
    {   cout << "escribe la calificacion: " << i+1 << endl;
        cin >> calificaciones[i];
        sumaC = sumaC + calificaciones[i];
    if (calificaciones[i]>=70)
       {
        alumAprobados ++;
       }
       else
       {
        alumReprobados ++;
       }
    }

    promedio = sumaC/8;

    cout << "El promedio general de la clase es: " << promedio << endl;
    cout << "La cantidad de alumnos aprobados es: " << alumAprobados << endl;
    cout << "La cantidad de alumnos reprobados es: " << alumReprobados << endl;

    
    }
 
