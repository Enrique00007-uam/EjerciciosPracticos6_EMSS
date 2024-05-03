
//Crea un programa que permita al usuario ingresar dos vectores de la
//misma longitud y luego calcule su producto punto. Muestra el resultado
//al finalizar el cálculo.
#include <iostream>
#include <vector>

int main() {
    // Prompt the user to enter the first vector
    std::vector<int> vec1;
    int n;
    std::cout << "Enter the length of the first vector: ";
    std::cin >> n;
    std::cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        vec1.push_back(temp);
    }

    // Prompt the user to enter the second vector
    std::vector<int> vec2;
    std::cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        vec2.push_back(temp);
    }

    // Calculate the dot product of the two vectors
    int dot_product = 0;
    for (int i = 0; i < n; i++) {
        dot_product += vec1[i] * vec2[i];
    }

    // Display the dot product
    std::cout << "The dot product of the two vectors is: " << dot_product << std::endl;

    return 0;
}