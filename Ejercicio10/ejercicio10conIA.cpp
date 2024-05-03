

#include <iostream>
#include <vector>

int main() {
    // Prompt the user to enter the matrix
    int m, n;
    std::cout << "Enter the number of rows and columns of the matrix: ";
    std::cin >> m >> n;
    std::vector<std::vector<int>> mat(m, std::vector<int>(n));
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> mat[i][j];
        }
    }

    // Calculate the transpose of the matrix
    std::vector<std::vector<int>> transpose(n, std::vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // Print the transposed matrix
    std::cout << "Transposed matrix: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}