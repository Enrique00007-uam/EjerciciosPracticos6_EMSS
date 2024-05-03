// Desarrolla un programa que solicite al usuario ingresar dos vectores de igual longitud y
// luego calcule la suma de ambos vectores.
// El resultado debe mostrarse en un tercer vector


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

    // Calculate the sum of the two vectors
    std::vector<int> sum(n);
    for (int i = 0; i < n; i++) {
        sum[i] = vec1[i] + vec2[i];
    }

    // Display the sum vector
    std::cout << "The sum of the two vectors is: ";
    for (int i = 0; i < n; i++) {
        std::cout << sum[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}