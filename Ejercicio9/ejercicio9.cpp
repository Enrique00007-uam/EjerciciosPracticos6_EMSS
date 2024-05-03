/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Matriz1[3][3];
    int Matriz2[3][3];
    int Matriz3[3][3];

    for (int i =0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            
            cout << "Matriz 1" << endl;
            cout <<"Escribe un numero: Fila" <<i+1 << ", columna" << j+1 << ":"<<endl;
            cin >> Matriz1[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
             cout << "Matriz 2" << endl;
            cout <<"Escribe un numero: Fila" <<i+1 << ", columna" << j+1 << ":"<<endl;
            cin >> Matriz2[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            Matriz3[i][j] = Matriz1[i][j] * Matriz2[i][j];
        }
        
    }

    cout << endl;
    for (int i=0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< Matriz1[i][j] ;
    
        }
    cout << endl;
    }

 cout << endl;
    for (int i=0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< Matriz2[i][j];
        
        }
    cout << endl;
    }

     cout << endl;
    for (int i=0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< Matriz3[i][j];
    
        }
cout << endl;
    }
    return 0;
}
