// // == 2D ARRAYS IN C++ == 
// // ROWS, COLUMNS MATRIX
// // EACH ELEMENT IN A 2D ARRAY IS IDENTIFIED BY TWO INDICES: THE ROW INDEX AND THE COLUMN INDEX.
// // Each Block of memory in a 2D array is stored in a contiguous manner, meaning that the elements are stored one after the other in memory. The order in which the elements are stored can be either row-major or column-major, depending on the programming language and the specific implementation.
// // Each Block of matrix is called "CELL"



// // BASICS OF 2D ARRAYS IN C++
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <array>
// #include <vector>
// using namespace std;

// int main () {
//     // 1D Array Declaration
//     int arr [7] = {1, 2, 3, 4, 5, 6, 7};
    
//     // 2D Array Declaration
//     int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     int rows = 4;
//     int cols = 3; 

//     // Accessing 2D Array Elements
//     cout << matrix[2][1] << endl; // Output: 8

//     //  Modifying existing elements in 2D Array
//     matrix[2][1] = 108;
//     cout << matrix[2][1] << endl;  // Output: 108
     
//     return 0;
// }




// // 2D ARRAY TRAVERSAL IN C++
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <array>
// #include <vector>
// using namespace std;

// int main () {
//     int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     int rows = 4;
//     int columns = 3;

//     // Traversing 2D Array usinG Nested Loops
//     // FOR LOOP (NESTED)
//     for (int i = 0; i < rows; i++) {
//         cout << " [";
//         for (int j = 0; j < columns; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "]" << endl;
//         cout << endl;
//     }

//     return 0;
// }




// // INPUT AND OUTPUT OF 2D ARRAYS IN C++
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <vector>
// #include <array>
// using namespace std;

// int main () {
//     int rows, columns;
//     cout << "Enter the number of rows: ";
//     cin >> rows ;
//     cout << "Enter the number of columns: ";
//     cin >> columns;

//     if (rows <= 0 || columns <= 0) {
//         cout << "Invalid input. Number of rows and columns must be positive integers." << endl;
//         return 1; // Exit the program with an error code
//     }

//     if (rows * columns > 1000000) {
//         cout << "Input size is too large. Please enter smaller dimensions." << endl;
//         return 1; // Exit the program with an error code
//     }

//     vector<vector<int>> matrix (rows, vector<int>(columns));

//     cout << "Enter elements of 2D array: " << endl;
    
//     // INPUT OF 2D ARRAY ELEMENTS
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     // OUTPUT OF 2D ARRAY ELEMENTS
//     for (int i = 0; i < rows; i++) {
//         cout << "[";
//         for (int j = 0; j < columns; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << "]";
//         cout << endl;
//     }
// }




// // STORING OF 2D ARRAYS IN C++ MEMORY HARDWARE
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <array>
// #include <vector>
// using namespace std;

// int main () {
//     // 1D Array Declaration
//     int arr [7] = {1, 2, 3, 4, 5, 6, 7};
    
//     // 2D Array Declaration
//     int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     int rows = 4;
//     // 1. ROW MAJOR FORM
//     // [1 2 3 4 5 6 7 8 9 10 11 12]
//     // MATRIX IS STORED IN MEMORY AS A SINGLE CONTINUOUS BLOCK OF MEMORY
    
//     int cols = 3; 
//     // 2. COLUMN MAJOR FORM
//     // [1 4 7 10 2 5 8 11 3 6 9 12]
//     // MATRIX IS STORED IN MEMORY AS A SINGLE CONTINUOUS BLOCK OF MEMORY

//     return 0;
// }




// // LINEAR SEARCH IN 2D ARRAYS IN C++
// #include <iostream>
// #include <algorithm>
// #include <climits>
// #include <array>
// #include <vector>
// #include <utility>
// using namespace std;

// pair<int, int> linearSearch2DArrPair(int matrix[][3], int row, int col, int target) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (matrix[i][j] == target) {
//                 // Return the indices of the found element as a pair
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1}; // Return (-1, -1) if the target is not found
// }

// bool linearSearch2DArrBool(int matrix[][3], int row, int col, int target) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (matrix[i][j] == target) {
//                 return true; // Return true if the target is found
//             }
//         }
//     }
//     return false; // Return false if the target is not found
// }

// int main () {
//     // 2D Array Declaration
//     int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//     int row = 4;
//     int col = 3; 

//     int n ;
//     cout << "Enter target number to search: ";
//     cin  >> n; // Input the target value to search for

//     cout << "\nSearching for " << n << " in the 2D array.." << endl;

//     // boolalpha to force standard C++ to print "true" or "false" instead of 1 or 0
//     cout << "Target exists: " << boolalpha << linearSearch2DArrBool(matrix, row, col, n) << endl;  // Output: true

//     // Execute the search ONCE, and store the result in a pair to avoid calling the function twice
//     pair<int, int> indices = linearSearch2DArrPair(matrix, row, col, n);

//     // Extract the row (.first) and column (.second) indices from the pair
//     cout << "Indices of " << n << " in the 2D Array is (" << indices.first << ", " << indices.second << ")" << endl;  // Output: Indices of 5 in the 2D Array is (1, 1)"
//     return 0;
// }




// Q1. MAXIMUM ROW SUM
#include <iostream>
#include <algorithm>
#include <climits>
#include <array>
#include <vector>
using namespace std;

int getMaxRowSum(int mat[][3], int row, int col) {
    int maxRowSum = INT_MIN;
    for (int i = 0; i <row; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += mat[i][j]; 
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main () {
    // 2D Array Declaration
    int matrix [4] [3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    cout << "Maximum row sum: " << getMaxRowSum(matrix, rows, cols) << endl;
    return 0;
}



// 2D VECTORS IN C++
// Dynamic
// Resizable-in-Runtime