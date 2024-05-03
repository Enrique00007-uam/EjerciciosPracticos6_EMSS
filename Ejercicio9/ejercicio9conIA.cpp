/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
#include <vector>

int main() {
    // Prompt the user to enter the first matrix
    int m, n, p, q;
    std::cout << "Enter the dimensions of the first matrix (m x n): ";
    std::cin >> m >> n;
    std::vector<std::vector<int>> mat1(m, std::vector<int>(n));
    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> mat1[i][j];
        }
    }

    // Prompt the user to enter the second matrix
    std::cout << "Enter the dimensions of the second matrix (p x q): ";
    std::cin >> p >> q;
    std::vector<std::vector<int>> mat2(p, std::vector<int>(q));
    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            std::cin >> mat2[i][j];
        }
    }

    // Check if the matrices are compatible for multiplication
    if (n != p) {
        std::cout << "The matrices are not compatible for multiplication." << std::endl;
        return 0;
    }

    // Calculate the product of the two matrices
    std::vector<std::vector<int>> prod(m, std::vector<int>(q));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the product
    std::cout << "The product of the two matrices is:" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            std::cout << prod[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}