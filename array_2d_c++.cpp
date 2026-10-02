// == 2D ARRAYS IN C++ == 
// ROWS, COLUMNS MATRIX

// BASICS OF 2D ARRAYS IN C++
#include <iostream>
#include <algorithm>
#include <climits>
#include <array>
#include <vector>
using namespace std;

int main () {
    // 1D Array Declaration
    int arr [7] = {1, 2, 3, 4, 5, 6, 7};
    
    // 2D Array Declaration
    int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3; 

    // Accessing 2D Array Elements
    cout << matrix[2][1] << endl; // Output: 8

    //  Modifying existing elements in 2D Array
    matrix[2][1] = 108;
    cout << matrix[2][1] << endl;  // Output: 108
     
    return 0;
}



// 2D ARRAY TRAVERSAL IN C++
#include <iostream>
#include <algorithm>
#include <climits>
#include <array>
#include <vector>
using namespace std;

int main () {
    int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;

    // Traversing 2D Array usinG Nested Loops
    // FOR LOOP (NESTED)
    for (int i = 0; i < rows; i++) {
        cout << " [";
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "]" << endl;
        cout << endl;
    }

    return 0;
}




// INPUT AND OUTPUT OF 2D ARRAYS IN C++
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <array>
using namespace std;

int main () {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows ;
    cout << "Enter the number of columns: ";
    cin >> columns;

    if (rows <= 0 || columns <= 0) {
        cout << "Invalid input. Number of rows and columns must be positive integers." << endl;
        return 1; // Exit the program with an error code
    }

    if (rows * columns > 1000000) {
        cout << "Input size is too large. Please enter smaller dimensions." << endl;
        return 1; // Exit the program with an error code
    }

    vector<vector<int>> matrix (rows, std::vector<int>(columns));

    cout << "Enter elements of 2D array: " << endl;
    
    // INPUT OF 2D ARRAY ELEMENTS
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    // OUTPUT OF 2D ARRAY ELEMENTS
    for (int i = 0; i < rows; i++) {
        cout << "[";
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }
}
