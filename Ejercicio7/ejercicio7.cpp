/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vector1[1000];
    int vector2[1000];
    int vector3[1000];
    int i;
    int N;

  cout << "ingrese la longitud de los vectores" << endl;
  cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cout << "Vector 1" << endl;
        cout << "Agrega un numero al vector: " << endl;
        cin >> vector1[i];
    }
    
for (int i = 0; i < N; i++)
    {
        cout << "Vector 2" << endl;
        cout << "Agrega un numero al vector: " << endl;
        cin >> vector2[i];
    }

 

 for(int i = 0; i < N; i++)
 {
    cout << endl;
    vector3[i]=vector1[i]+vector2[i];
    cout << vector3[i] << endl;
 }

 
    
    
    return 0;
}
