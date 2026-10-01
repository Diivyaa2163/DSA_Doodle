// Boilerplate Code : Basic code structure for C++17
#include <iostream>
using namespace std;
int main() {
    cout << "Hi, My name is Divya\nfrom Switzerland";
    return 0;
}

// camelCase :- First word letters will be in lowercase, whereas First letter of second word in uppercase

// INPUT IN C++: Using cin to take input from the user
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: "<< age << endl;
    return 0;
}

// SUM OF TWO NUMBERS USING C++
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter first number: ";
    cin >> a;

    int b;
    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;
    cout << "SUM OF TWO NUMBERS = " << sum << endl;
    
    return 0;
}





// DECIMAL TO BINARY CONVERSION
#include <iostream>
using namespace std;

int decToBinary(int decNum) {
   int ans = 0, pow = 1;

   while (decNum > 0) {
      int rem = decNum % 2;
      decNum /= 2;
    // UPDATE VARIABLES
      ans += (rem * pow);
      pow *= 10;
   }
   return ans; //binary form
}
int main () {
   int decNum = 50;

   for ( int i = 1; i <= 50; i++) {
        cout << decToBinary(i) << endl;
   }
}



// BINARY TO DECIMAL
#include <iostream> 
using namespace std;

int binaryToDec(int binaryNum) {
   int pow = 1; 
   int ans = 0;

   while (binaryNum > 0) {

      // OPERATION PERFORM
      int rem = binaryNum % 10;
      ans += (rem * pow);

      // UPDATION
      binaryNum = binaryNum / 10;
      pow *= 2;
   }
   return ans;
}

int main () {
   int binaryNum = 0;
   cout << "Enter a Binary Number: " ;
   cin >> binaryNum;

   cout << "The Decimal value is: " << binaryToDec(binaryNum) << endl;
   return 0;
}




// REVERSE NUMBER
#include <iostream>
using namespace std;

int reversenum(int n) {
   int unitdigit;
   int newNum = 0;

   while (n > 0) {
      unitdigit = n % 10;
      newNum = (newNum*10) + unitdigit;
      n = n/10;

   }
   return newNum;
}

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;

   cout << "Reverse of your entered number " << n << " is " << reversenum(n) << endl;
   return 0;
}






