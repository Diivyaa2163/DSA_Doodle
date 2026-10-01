// OPERATORS IN C++: Arithmetic, Relational, Logical, Assignment, 
// ARITHMETIC OPERATORS: +, -, *, /, %
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int modulo = a % b;
    cout << "sum = " <<sum << endl;
    cout << "difference = " <<difference << endl;
    cout << "product = "<< (a * b) << endl;
    cout << "quotient = " << (a / b) << endl;
    cout << "modulo = " << (a % b) << endl;
    return 0;
}

// RELATIONAL OPERATORS: ==, !=, >, <, >=, <=
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    cout << (a == b) << endl; // false
    cout << (a != b) << endl; // true
    cout << (a > b) << endl; // true
    cout << (a < b) << endl; // false
    cout << (a >= b) << endl; // true
    cout << (a <= b) << endl; // false
    return 0;
}


// LOGICAL OPERATORS: &&, ||, !
#include <iostream>
using namespace std;
int main() {
    bool isSunny = true;
    bool isWarm = false;
    cout << (isSunny && isWarm) << endl; // false
    cout << (isSunny || isWarm) << endl; // true
    cout << (!isSunny) << endl; // false
    return 0;
}



// BINARY (2) OPERATORS IN C++: AND, OR, XOR, NOT
#include <iostream>
using namespace std;
int main() {
    int a = 6; // 0110
    int b = 2; // 0010
    cout << (a & b) << endl; // 0010 = 2
    return 0;
}


// UNARY (1) OPERATORS IN C++: Increment, Decrement, Negation
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "Original value of a: " << a << endl;
    cout << "Value of a after increment: " << ++a << endl;
    cout << "Value of a after decrement: " << --a << endl;
    return 0;
}

// PRE INCREMENT AND POST INCREMENT OPERATORS IN C++
// PRE INCREMENT: Increments the value of the variable before using it in an expression
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = ++a; // a is incremented to 6, then assigned
    cout << "Value of a: " << a << endl; // 6
    cout << "Value of b: " << b << endl; // 6
    return 0;
}

// POST INCREMENT: Uses the value of the variable in an expression before incrementing it
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = a++; // b is assigned 5, then a is incremented to 6
    cout << "Value of a: " << a << endl; // 6
    cout << "Value of b: " << b << endl; // 5
    return 0;
}



// BITWISE OPERATORS
#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int b = 3;

   // BITWISE AND &
   cout << ( a & b ) << endl;   // 1010 & 0011 = 0010 = 2

   // BITWISE OR |
   cout << ( a | b ) << endl;  // 1010 | 011 = 1011 = 11

   // BITWISE EXCLUSIVE-OR XOR ^
   cout << ( a ^ b ) << endl;  // 1010 ^ 011 = 1001 = 9

   // BITWISE LEFTSHIFT OPERATOR <<
   cout << ( a << b ) << endl;   // 1010 << 2 = 1010000 = 80

   // BITWISE RIGHTSHIFT OPERATOR >> 
   cout << ( a >> b ) << endl;  // 1010 >> 2 = 00000001 = 1 

   return 0;
} 




// FIND IF A NUMBER IS 2's power or not 
// METHOD 1: Using normal operations
#include <iostream>
using namespace std;

bool findTwo(int n) {

   // EDGE CASE: Negative input
   if (n <= 0) {
      return false;
   }

   while (n % 2 == 0) {
      cout << n << endl;
      n = n / 2;     // Shrink the number
   }

   // If it is a perfect power of 2, the final division will leave exactly 1.
   // If it leaves any other odd number (like 3 or 7), it fails.
   if (n == 1) {
      return true;
   }
   else {
      return false;
   }
}

int main() {
   int n;
   cout << "Enter a number: " ;
   cin >> n;

   if (findTwo(n) == true) {
      cout << n << " is a power of 2!" << endl;
   } 
   else {
      cout << n << " is NOT a power of 2." << endl;
   }

   return 0;
}



// FIND IF A NUMBER IS EXPONENT OF 2
// METHOD 2: BITWISE OPERATOR
#include <iostream>
using namespace std;

bool isMultTwo(int n) {
   if (n <= 0) {
      return false;
   }
   
   // EDGE CASE: n = 1
   if (n == 1) {
      return true;
   }
   while(n % 2 == 0) {
      if ((n ^ ((2*n) - 1)) == (n - 1 )) {     // eg 1000 (8) ^ 1111 (15) = 0111 (7) ; 
         return true;                               
      }
      else{
         return false;
      }
   }
   return false;
}

int main () {
   int n;
   cout << "Enter a number: ";
   cin >> n;

   if (isMultTwo(n) == true) {
      cout << "Your entered number " << n << " is an exponent of 2 ";
   }
   else {
      cout << "Your entered number "<< n << " is not an exponent of 2";
   }
   return 0;
}