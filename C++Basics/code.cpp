// // Boilerplate Code : Basic code structure for C++17
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hi, My name is Divya\nfrom Switzerland";
//     return 0;
// }


// PRIMITIVE DATA TYPES IN C++ :- Boolean, Char, Float, Int, Double
// #include <iostream>
// using namespace std;
// int main() {

//     // boolean = 1 byte
//     bool isSafe  = true;
//     cout<< isSafe<< endl;

//     // char = 1 byte
//     char grade = 'A';
//     cout<< grade<<endl;

//     // float = 4 byte
//     float PI = 3.14f;
//     cout << PI << endl;

//     // int = 4 byte
//     int age = 22;
//     cout << age << endl;

//     // double = 8 byte (default data type)
//     double largeDecimalNumbers = 3.14159265358979323846;
//     cout << largeDecimalNumbers << endl;

//     return 0;
// }

// TYPE CASTING: Converting data from one type to another
// TWO TYPES OF TYPE CASTING: Implicit and Explicit
// 1. Implicit Type Casting: Done by the compiler automatically
// #include <iostream>
// using namespace std;
// int main () {
//     char grade = 'A'; // ASCII value of 'A' is 65
//     int value = grade;
//     cout << value << endl;
//     return 0;
// }

// 2. Explicit Type Casting: Done by the programmer using type casting operators
// #include <iostream>
// using namespace std;
// int main () {
//     double price = 100.99;
//     int newPrice = (int)price;
//     cout<<newPrice<<endl;
//     return 0;
// }

// INPUT IN C++: Using cin to take input from the user
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "Your age is: "<< age << endl;
//     return 0;
// }

// OPERATORS IN C++: Arithmetic, Relational, Logical, Assignment, 
//ARITHMETIC OPERATORS: +, -, *, /, %
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10, b = 5;
//     int sum = a + b;
//     int difference = a - b;
//     int product = a * b;
//     int quotient = a / b;
//     int modulo = a % b;
//     cout << "sum = " <<sum << endl;
//     cout << "difference = " <<difference << endl;
//     cout << "product = "<< (a * b) << endl;
//     cout << "quotient = " << (a / b) << endl;
//     cout << "modulo = " << (a % b) << endl;
//     return 0;
// }

// RELATIONAL OPERATORS: ==, !=, >, <, >=, <=
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10, b = 5;
//     cout << (a == b) << endl; // false
//     cout << (a != b) << endl; // true
//     cout << (a > b) << endl; // true
//     cout << (a < b) << endl; // false
//     cout << (a >= b) << endl; // true
//     cout << (a <= b) << endl; // false
//     return 0;
// }


// LOGICAL OPERATORS: &&, ||, !
// #include <iostream>
// using namespace std;
// int main() {
//     bool isSunny = true;
//     bool isWarm = false;
//     cout << (isSunny && isWarm) << endl; // false
//     cout << (isSunny || isWarm) << endl; // true
//     cout << (!isSunny) << endl; // false
//     return 0;
// }

// SUM OF TWO NUMBERS USING C++
// #include <iostream>
// using namespace std;

// int main() {

//     int a;
//     cout << "Enter first number: ";
//     cin >> a;

//     int b;
//     cout << "Enter second number: ";
//     cin >> b;

//     int sum = a + b;
//     cout << "SUM OF TWO NUMBERS = " << sum << endl;
    
//     return 0;
// }

// BINARY (2) OPERATORS IN C++: AND, OR, XOR, NOT
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 6; // 0110
//     int b = 2; // 0010
//     cout << (a & b) << endl; // 0010 = 2

// UNARY (1) OPERATORS IN C++: Increment, Decrement, Negation
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     cout << "Original value of a: " << a << endl;
//     cout << "Value of a after increment: " << ++a << endl;
//     cout << "Value of a after decrement: " << --a << endl;
//     return 0;
// }

// PRE INCREMENT AND POST INCREMENT OPERATORS IN C++
// PRE INCREMENT: Increments the value of the variable before using it in an expression
//#include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = ++a; // a is incremented to 6, then assigned
//     cout << "Value of a: " << a << endl; // 6
//     cout << "Value of b: " << b << endl; // 6
//     return 0;
// }

// POST INCREMENT: Uses the value of the variable in an expression before incrementing it
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = a++; // b is assigned 5, then a is incremented to 6
//     cout << "Value of a: " << a << endl; // 6
//     cout << "Value of b: " << b << endl; // 5
//     return 0;
// }

//CONDITONAL STATEMENTS IN C++: if, else if, else
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "Enter a number: " << endl;
//     cin >> n;
//     if (n>=0){
//         cout << "The number is positive or zero" <<endl;
//     } else {
//         cout << "The number is negative" << endl;
//     }
//     return 0;
// }

//FINDING GRADES USING CONDITIONAL STATEMENTS IN C++:
// #include <iostream>
// using namespace std;
// int main () {
//     float n;
//     cout << "Enter your marks: " << endl;
//     cin >> n;
//     if (n>90){
//         cout << "Your grade is A+" <<endl;
//     } else if (n<90 && n>=80){
//         cout << "Your grade is A" << endl;
//         } else if (n<80 && n>=70){
//         cout << "Your grade is B+" << endl;
//     } else {
//         cout << "Your grade is B" << endl;
//     }
//     return 0;
// }

//FIND UPPERCASE OR LOWERCASE CHARACTER USING CONDITIONAL STATEMENTS IN C++:
// #include <iostream>
// using namespace std;
// int main() {
//     char input;
//     cout << "Enter a character: " << endl;
//     cin >> input;
//     int value = input;
//     if (value >= 65 && value <= 90 ) {
//         cout << " Uppercase Character";
//     } else if (value >= 97 && value <= 122) {
//         cout << "Lowercase Character";
//     } else {
//         cout << "Not an Alphabet Character";
//     }
//     return 0;
// }

//METHOD 2
// #include <iostream>
// using namespace std;
// int main() {
//     char input;
//     cout << "Enter a character: " << endl;
//     cin >> input;
//     int value = input;
//     if ( value >= 'A' && value <= 'Z'){
//         cout << "Uppercase Character";
//     } else if (value >= 'a' && value <= 'z') {
//         cout << "Lowercase Character";
//     } else {
//         cout << "Not an Alphabet Character";
//     }
//     return 0;
// }

// TERNARY (3) STATEMENT:- Condition ? stt1 : stt2;
// Ternary statement is a shorthand for if-else statement
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 45;
//     cout << (n >= 0 ? "positive" : "negative") << endl;
//     return 0;
// }

// LOOPS
// Print numbers from 0 to n using while loop
// #include <iostream>
// using namespace std;

// int main() {
//     int count = 0;    // Initialisation 
//     int n=0;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     while (count<=n)   // Condition {
//         cout << count << endl;
//         count++;    //updation
//     }

//     return 0;
// }

// camelCase :- First word letters will be in lowercase, whereas First letter of second word in uppercase


// FOR LOOP
// Print numbers from 0 to n using while loop
// #include <iostream>
// using namespace std;

// int main () {

//     int n = 0;
//     cout << "Enter a number: " ;
//     cin >> n;

//     for (int count = 0 ; count <= n ; count++) {
//         cout << count << " ";

//     }
//     return 0;

// }

// Sum of numbers from 0 to n using FOR loop
// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     // GOAL 1: Print the Equation (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55)
//     int sum1 = 0;
//     for (int count = 0; count <= n; count++) {
//         cout << count << " " ;

//         if (count < n) {
//             cout << " + " ;    // Print '+' if we are not at the last number
//         } else {
//             cout << " = " ;    // Print '=' if we are at the last number
//         }
//         sum1 += count ;
//     }
//     cout << "Cumulative sum Pattern is: " << sum1 << " " << endl;    // Prints the final answer at the end of the equation
    
//     // GOAL 2: Print the Running Sequence of Sum (0 1 3 6 10 15 21 28 36 45 55)
//     int sum2 = 0;
//     for (int count =0; count <= n; count++) {
//         sum2 += count;
//         cout << "Cumulative Sum Series is: " << sum2 << " " ;    // Print the newly updated sum on every spin 
//     }
//     cout << endl;    // Drops the cursor to a new line after the sequence finishes

//     // GOAL 3: The Final Statement
//     // Sum2 already hold the final total from the loop above
//     cout << "Sum of numbers from 0 to n is : " << sum2 << endl;    // Sum of numbers from 0 to n is : 55
//     return 0;
// }


// SUM OF NUMBERS 0 TO N USING WHILE LOOP
// #include <iostream>
// using namespace std;

// int main() { 

//     int n = 0;
//     cout << "Enter a number: " ;
//     cin >> n;

//     int count = 0;
//     int sum1 = 0;

//     while ( count <= n) {
//         cout << count;

//         if (count < n) {
//             cout << " + " ;
//         } else {
//             cout << " = " ;
//         }
//         sum1 += count;
//         count ++ ;
//     }
//     cout << sum1 << endl;

//     int count = 1;
//     int sum2 = 0;

//     while ( count <= n) {
//         sum2 += count ;
//         count ++ ;
//     }
//     cout << "Sum of numbers from 0 to n is: " << sum2 << endl ;

//     return 0;
// }

// SUM OF ALL ODD NUMBERS FROM M TO N using WHILE loop
// #include <iostream>
// using namespace std;

// int main () {

//     int m = 0;
//     int n = 0;

//     cout << "Enter starting number (m) : " ;
//     cin >> m;
//     cout << "Enter ending number (n) : " ;
//     cin >> n;

//     int i = m;
//     int sum = 0;

//     while ( i <= n) {
        
//         if ((i % 2) != 0) {
//             cout << i;

//             if (i + 2 <= n) {
//             cout << " + ";
//         } else {
//             cout << " = ";
//         }

//         sum += i;
//     }
//     i ++ ;                   
// }
//     cout << sum << endl;

//     i = m;
//     int sum2 = 0;
//     while (i <= n) {
//         if ((i % 2) != 0)  {
//             sum2 += i;
//         } 
//         i++;
//         }
//         cout << "Sum of odd numbers from " << m << " to " << n << " is : " << sum2 << endl;
//         return 0;
       
//     }


//SUM OF ODD NUMBERS FROM m TO n using FOR LOOP
// #include <iostream>
// using namespace std;

// int main() {
//     int m = 0;
//     int n = 0;

//     cout << "Enter starting number (m): " ;
//     cin >> m;
//     cout << "Enter ending number (n) : " ;
//     cin >> n;

//     int sum = 0;

//     for (int i = m; i <= n; i++ ) {
//         if ( i % 2 != 0) {
//             cout << i << " ";

//             if ( i + 2 <= n) {
//                 cout << " + ";
//             } else {
//                 cout << " = ";
//             }
//             sum += i;
//         } 
//     } 
//     cout << sum << endl;

//     int sum2 = 0;
//     for (int i = m; i <= n; i++) {
//         if ( i % 2 != 0) {
//             sum2 += i;
//         } 
//     } 
//     cout << "Sum of odd numbers from " << m << " to " << n << " is : " << sum2 << endl;
//     return 0;
// }

// DO WHILE LOOP
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 10 ;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i++;
//     } while (i <= n);

//     cout << endl;
//     return 0;
// }

// PRIME OR NOT using DO-WHILE LOOP
// #include <iostream>
// using namespace std;

// int main() {

//     // Edge Case: 0 & 1 are never prime numbers
//     if (n < 2) {
//         cout << n << " is NOT a prime number." << endl;
//         return 0;
//         }

//     int n = 0;
//     cout << "Enter a number : " ;
//     cin >> n;

//     cout << "Prime numbers up to " << n << " are: ";

//     // OUTER LOOP: Picks the current number to test ( from 2 up to n-1 )
//     for (int num = 2; num < n; num++) {
//         bool isPrime = true;    // Raise the flag for every new 'num'

//         // INNER LOOP: Tests if 'num' is prime by dividing it
//         for (int i = 2; i < num; i++) {
            
//             if (num % i == 0) {
//                 isPrime = false;    // Divides perfectly! Drop the flag.
//                 break;  //Stop testing further number immediately
//             }
//         }

// // After the loop finishes (or breaks) , we check the status of our flag
//     if (isPrime == true) {
//         cout << n << "is a PRIME number" << endl;
//     } else {
//         cout << n << " is NON PRIME number" << endl;
//     }

//         // After the inner loop finishes testing, check the flag!
//         if (isPrime) {
//             cout << num << " ";    // Print the prime number
//         }
//     }

//     cout << endl;
//     return 0;
// }
   // Edge Case: 0 & 1 are never prime numbers
//     if (n < 2) {
//         cout << n << " is NOT a prime number." << endl;
//         return 0;
//     }

//     int i = 2;  // Prime math ALWAYS starts at 2
//     bool isPrime = true;    // Flag: Assume it is prime until proven otherwise

//     // Caveat: If n is 2, skip the do-while loop entirely
//     // otherwise 2 % 2 will accidentally flag it as non-prime!
//  //   if (n > 2) {
//         do {
//             if (n % i == 0) {
//                 isPrime = false;    // We found a perfect divisor! Drop the flag.
//                 break;  // Jump out of the loop instantly
//             }
//             i++ ;
//         } while ((i < n) && (n >2));
//  //   }

//     // After the loop finishes (or breaks) , we check the status of our flag
//     if (isPrime == true) {
//         cout << n << "is a PRIME number" << endl;
//     } else {
//         cout << n << " is NON PRIME number" << endl;
//     }
//     return 0;
// }

// PRIME NUMBERS
// #include <iostream>
// using namespace std;
//
// int main() {
//
//     int n = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     // Edge Cases
//     if (n < 2) {
//         cout << n << " is NON - PRIME number" << endl;
//         return 0;
//     }

//     // Check if user input n is prime or not 
//     bool isNPrime = true;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             isNPrime = false;
//             break;
//         }
//     }

//     // Print the verdict for Goal 1
//     if (isNPrime) {
//         cout << "Your entered number " << n << " is a PRIME number." << endl;
//     } else {
//         cout << "Your entered number " << n << " is a NON-PRIME number." << endl;
//     }

//     // Goal 2: Sequence of all primes up to n
//     cout << "Prime numbers up to " << n << " are: ";

//     // Outer loop MUST be <= n so user's number gets included
//     for (int num = 2; num <= n; num++ ) {
//         bool isPrime = true;

//         // Inner loop checks divisors up to num - 1
//         for (int i = 2; i < num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         // If the flag is still up, print it!
//         if (isPrime) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }


// PRIME NUMBER USING DO WHILE LOOP
// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     bool isPrime = true;

//     for ( int i = 2; i*i <= n; i++ ) {
//         if(n % i == 0) {    //  Non Prime
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime == true) {
//         cout << "Prime no";
//     } else {
//         cout << "Non Prime no";
//     }

//     return  0;
// }

// NESTED LOOP: Loop Inside Loop
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i =1; i <= 5; i++) {
//         cout << "*****" << endl;
//     } return 0;
// }

// STAR pattern in increasing order
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     for(int i=0; i <= n; i++) {
//         cout << " * "; // * , **, ***, ..
//     }
//     return 0;
// }

// STAR PYRAMID: Star dense pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     for (int i = 1; i <= n; i++) {
//         int m = 9;
//         for (int j = 1; j <= m; j++) {
//             cout << "*";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

// PYRAMID STAR
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 0;
//     cout << "Enter the height of the pyramid (n) : ";
//     cin >> n;


//     // ROW MANAGER (OUTER LOOP)
//     for (int i = 1; i <= n; i++) {

//         // WORKER 1: SPACE Printer
//         // Logic : ( n-1 )
//         for (int spaces = 1; spaces <= (n - i); spaces++) {
//             cout << " " ; // Print a blank space
//         }

//         // WORKER 2: STAR Printer
//         // Formula: Odd numbers (2i - 1)
//         for (int stars = 1; stars <= (2 * i - 1); stars++) {
//             cout << "*";
//         }

//         // Row is finished! Drop down to the next line.
//         cout << endl;
//     }
//     return 0;
// }



// THE SPACED PYRAMID LOGIC : Star Space alternate Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cout << "Enter the height of the pyramid (n): ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
        
//         // WORKER 1: The Space Printer (n - i)
//         for (int spaces = 1; spaces <= (n - i); spaces++) {
//             cout << " "; 
//         }

//         // WORKER 2: The Star Printer (Just 'i' times!)
//         for (int stars = 1; stars <= i; stars++) {
//             // CRITICAL: Notice the blank space after the star inside the quotes!
//             cout << "* "; 
//         }

//         cout << endl;
//     }

//     return 0;
// }



// //PASCAL'S SERIES FOR ANY GIVEN NUMBER m, till given level n
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 0;
//     cout << "Enter a number of rows / level for Pascal's Triangle (n): ";
//     cin >> n;

//     int m = 0;
//     cout << "Enter beginning number of Pascal's Triangle (m): ";
//     cin >> m;

//     // ROW / LEVEL MANAGER: Starts at level / row 0 the 1, 2, 3, ..
//     for (int row = 0; row < n; row++) {  // Row Incrementing .. from 0 to (n - 1)
        
//         // WORKER 1: Space Printer (n - row)
//         for (int spaces = 1; spaces <= (n - row); spaces++) {
//             cout << " ";
//         }

//         int val = m;

//         int level = 0;
//         // EDGE CASES: LEVEL 1 of Pascal's Triangle
//         for ( int level = 0; level < n; level++){    // level one of pascal's triangle
//             cout << m << endl;
//         }

//         for ( int level = 1; ((level >= 1) && (level <= n)); level++ ) {
//             for ( int count = 0; ((count == 0) || (count == n)); count++) {     // first (0th zeroth index horizontally as per computer) and last number (nth index horizontally) in pascals triangle is same, since it is formed by adding itself with its adjacent nothing, i.e., 0, so (num + 0 = num)
//                 cout << m << endl;
//             }

//             // WORKER 2: INNER LOOP
//             for ( int val = 1; ((val == 0) || (val < n)); val++) {
//                 for ( int rowIndex = 0; rowIndex < n; rowIndex++) {
//                     for ( int columnIndex = 0; columnIndex < n; columnIndex++) {
//                         val = (val * (rowIndex - columnIndex)) / (columnIndex + 1) ;
//                     } cout << val << endl;
//                 } return 0;
//             }
//         }
//     }
//     }

// // PPASCAL TRIANGLE
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cout << "Enter a number of rows / level for Pascal's Triangle (n): ";
//     cin >> n;

//     int m = 0;
//     cout << "Enter beginning number of Pascal's Triangle (m): ";
//     cin >> m;

//     // THE ROW MANAGER (Starts at Box 0)
//     for (int row = 0; row < n; row++) { 
        
//         // WORKER 1: Space Printer (n - row)
//         for (int spaces = 1; spaces <= (n - row); spaces++) {
//             cout << " ";
//         }

//         // --- YOUR BRILLIANT ADDITION ---
//         // Instead of starting with 1, we start the row with your custom 'm'!
//         int val = m; 
        
//         // WORKER 2: The Math Printer (Starts at Box 0)
//         for (int col = 0; col <= row; col++) {
            
//             cout << val << " "; 
            
//             // The exact formula you successfully figured out
//             val = (val * (row - col)) / (col + 1);
//         }

//         cout << endl; // Drop to the next line
//     }

//     return 0;
// }



//     // Pascal's sequence: At level n, (n+1) nodes are present
//     // Center of Pascal's is node's center
//     // At each level total space taking is (n) + (n+1) eg if level number is 4, level will be 1 3 3 1, so total spaces are length(1_3_3_1) = 7 OR
//     // For each level of pyramid, center of pyramid is at highest level oposition of pyramid, example for 4th level , 7 spaces, center will be at 4th position
//     //     int level <= n;
//     // Edge Case: Setting first level 
//     for (level = 1; level <= n; level ++ ) {
//         while (level = 1) {
//             for (i = 1; i <= n; i++) {
//                 if ( i = n) {
//                 cout << m << endl;  // Set center of pyramid eg _ _ _ 2 _ _ _ for enter h = 4, m = 2
//         }
//     }
//     }
// }
//     // Level 2 onwards till given last n level height
//     int count = " "; 
//     for (level = 2; level <= n; level++) {
//         while ( count <= n) {
//             sum = sum + 
//         }
//     }
// }


// SQUARE PATTERN
// #include <iostream>
// using namespace std;

// int main() {

//     int m = 0; int n = 0;
//     cout << "Enter total number of rows: ";     //Outer Loop
//     cin >> n;
//     cout << "Enter number of elements in a row: ";  // Inter Loop
//     cin >> m;

//     // Outer Loop Iteration
//     for (int i = 1; i <= n; i++) {
//         // cout << i << endl;  // Print serial or index number of rows alongside each row

//         // i++;  
//         // Inner Loop Iteration
//         for (int j = 1; j <= m; j++){
//             cout << j<< " ";  // Print numbers in a row serially
//     } 
//     cout << endl;
// }
//     return 0;
// }


// SQUARE STAR PATTERN
//  #include <iostream>
// using namespace std;

// int main() {
//     int m = 0; int n = 0;
//     cout << "Enter total number of rows: ";     //Outer Loop
//     cin >> n;
//     cout << "Enter number of stars in a row: ";  // Inter Loop
//     cin >> m;

//     // OUTER LOOP
//     for (int i = 1; i <= n; i++) {
        
//         // INNER LOOP
//         for (int j = 1; j <= m; j++) {
//             cout << "* ";
//         } 
//         cout << endl;
//     } return 0;
// }


// SQUARE ALPHABET PATTERN
// #include <iostream>
// using namespace std;

// int main() {

//     int m = 0; int n = 0;
//     cout << "Enter total number of rows: ";     //Outer Loop
//     cin >> n;
//     cout << "Enter total number of Alphabets in a row: ";     //Outer Loop
//     cin >> m;
    
//     // OUTER LOOP
//     for (int i = 0; i < n; i++) {
//         char ch = 'A';
//         // Inner Loop
//         for (int j = 0; j < m; j++) {   // Inner Start => Line Start
//             cout << ch << " ";
//             ch = ch + 1;    //65 + 1 => 66 -> B
//         }
//         cout << endl ;
//     } return 0;
// }


// SQUARE CHARACTER PATTERN
// #include <iostream>
// using namespace std;

// int main() {
//     char startChar, endChar;

//     cout << "Enter the starting character (e.g., A): ";
//     cin >> startChar;
    
//     cout << "Enter the ending character (e.g., Z): ";
//     cin >> endChar;

//     int m = 0;
//     cout << "Enter how many characters to print per row (m): ";
//     cin >> m;

//     // Index tracker to track letter
//     char currentChar = startChar;

//     while (currentChar <= endChar) {

//         // Worker 1: Column Printer
//         // Prints exactly 'm' characters side-by-side
//         for (int j = 0; j < m; j++) {

//             // Caveat Checks
//             // Ensures we don't accidentally print past the endChar, if the row isn't fully filled yet!
//             if (currentChar <= endChar) {
//                 cout << currentChar << " ";
//                 currentChar ++ ;    // Math char! 65 + 1 = 66 ('B')
//             }
//         }
//         // Row is finished, drop the cursor down
//         cout << endl;
//     }   
//     return 0;
// }



// SQUARE NUMBER PATTERN
// #include <iostream>
// using namespace std;

// int main () {

//     int n = 0; int m = 0; int l = 0;

//     cout << "Enter starting number: ";
//     cin >> m;

//     cout << "Enter ending number: ";
//     cin >> n;

//     cout << "Enter number of counts per row : ";
//     cin >> l;

//     // Current Element / Number Index tracker 
//     int currentnum = m;
    
//     // Set overall loop condition
//     while (currentnum <= n) {

//         // Row wise condition
//         for (int i = 0; i < l; i++) {

//             if (currentnum <= n) {
//                 cout << currentnum << " ";
//                 currentnum++ ;
//             }
//         } cout << endl;
//     } return 0;
// }


// Square number from 1 to n
// #include <iostream>
// using namespace std;

// int main() {

//     int num = 1;
    
//     int n;
//     cout << "Enter the grid dimension (e.g., type 3 for a 3x3 square): ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << num << " ";
//             num ++;
//         }
//         cout << endl;
//     }
//     cout << "After pattern print next num: " << num << endl; 
//     return 0;
// }


// Square pattern for Characters
// #include <iostream>
// using namespace std;

// int main() {
//     char startChar =  'A';

//     int n = 0;
//     cout << "Enter grid dimension: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << startChar << " ";
//             startChar++;
//         } cout << endl;
//     } return 0;
// }


// RIGHT (LHS) ANGLE STAR PATTERN
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter triangle size (n) : ";
//     cin >> n; 
//     for (int i=0; i < n; i++) {
//         for (int j=0; j < i+1; j++) {
//             cout << "* ";
//         } cout << endl;
//     } return 0;
// }


// TRIANGLE PATTERN FOR NUMBERS
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     cout << "Enter number of rows: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j< (i+1); j++) {
//             cout << (i + 1) ;
//         } cout << endl;
//     } return 0;
// }


// TRIANGLE CHARACTER PATTERN
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of triangle: ";
//     cin >> n;

//     char startChar = 'A';
//     // Outer Loop
//     for (int i = 0; i < n; i++) {

//         //Inner Loop
//         for (int j = 0; j< (i + 1); j++) {

//             // Define what to print
//             cout <<startChar;
//         } 
//         // Define what to print in next row
//         startChar++; 

//         // Immediate before this row is ending, from this next row is beginning
//         cout << endl;
//     } return 0;
// }


// Triangle Pattern till numbers n
// #include <iostream>
// using namespace std;

// int main() {
//    int n = 0;
//    cout << "Enter a number: ";
//    cin >> n;

//    for (int i = 0; i < n; i++) {
//       for (int j = 1; j <= i+1; j++) {
//          cout << j;
//       }
//       cout << endl;
//    } return 0;
// }


// REVERSE TRIANGLE 
// #include <iostream>
// using namespace std;

// int main() {

//    int n = 0;
//    cout << "Enter a number: ";
//    cin >> n;

//    for (int i = n; i > 0; i--) {
//       for (int j = i + 1; j > 0; j--) {
//          cout << j;
//       }
//       cout << endl;
//    }
//    return 0;
// }
 

// FLOYD'S TRIANGLE PATTERN
// #include <iostream>
// using namespace std;

// int main() {
//    int num = 1;

//    for (int i =0; i < n; i++) {
//       for (int j = 0; j < i+1; j++) {
//          cout << num;
//          num ++;
//       } 
//    }
// }


// INVERTED TRIANGLE PATTERN
// #include <iostream>
// using namespace std;

// int main() {
//    for (int i=0; i<n; i++) {

//       for (int j=0; j<i; j++) {
//          cout << " "; 
//       }

//       for (int j=0; j < n-i; j++) {
//          cout << (i+1);    // cout << (i+1) << endl; for inverted pyramid pattern, remaining code is same 
//       }
//       cout << endl;
//    } 
//    return 0;
// }


// PYRAMID PATTERN
// #include <iostream>
// using namespace std;
// int main() {
//    int n = 4;
//    for (int i=0; i<n; i++) {

//       for ( int j = 0; j<(n-i-1); j++) {
//          cout << " "; 
//       }

//       for (int j = 1; j <= (i+1); j++) {
//          cout << j;
//       } 

//       for (int j = i ; j >= 1 ; j--) {
//          cout << j;

//       }
//       cout << endl;
//    } 
//    return 0;
// }



// HOLLOW DIAMOND PATTERN
// #include <iostream>
// using namespace std;
//
// int main() {
//    int n = 4;
//
//    //top part
//    for (int i=0; i < n; i++) {
//      
//       //Spaces
//       for (int j=0; j< (n-i-1); j++) {
//          cout << " " ;
//       }
//       cout << "*";
//
//       if (i !=0) {
//          //Spaces
//          for (int j=0; j< (2*i-1); j++) {
//             cout << " " ;
//          }
//          //star
//          cout << "*";
//       }
//       cout << endl;
//    } 
//   
//    //Bottom Part
//    for (int i = 0; i < (n-1); i++) {
//      
//       //Spaces
//       for (int j = 0; j < (i+1); j++) {
//          cout << " ";
//       }
//       cout << "*";
//
//       if ( i!= n-2) {
//
//          for (int j = 0; j < (2*(n-i) - 5); j++) {
//             cout << " ";
//          } 
//          cout << "*";
//       } 
//       cout << endl;
//    }
//    return 0;
// }



// BUTTERFLY PATTERN
// #include <iostream>
// using namespace std;

// int main() {
//    int n = 4;

//    // TOP PART
//    for (int i = 1; i <= (n); i++) {

//       // UPPER LEFT TRIANGLE CORNER
//       for (int j=1; j <= i; j++) {
//          cout << "*";
//       }

//       //Upper triangle adjacent spaces
//       for (int j = 1; j <= (2*(n-i)); j++) {
//          cout << " ";
//       } 

//       // UPPER RIGHT TRIANGLE STAR CORNER      
//       for (int j=1; j <= i; j++) {
//          cout << "*";
//       }
//       cout << endl;
//    } 

//    // BOTTOM TRIANGLE
//    for (int i = n; i >= 1; i--) {

//       // LOWER STAR PATTERN
//       for (int j = 1; j <= i; j++) {
//          cout << "*";
//       }

//       //LOWER TRIANGLE SPACES
//       for (int j = 1; j <= (2*(n-i)); j++) {
//          cout << " ";
//       }

//       // Lower left triangle adjacent stars
//       for (int j = 1; j <= i; j++) {
//          cout << "*";
//    } cout << endl;
// } return 0;
// }



// FUNCTIONS
// SUM OF TWO NUMBERS
// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//    int s = a + b;
//    return s;
// }

// int main() {
//    cout << sum(10, 5);

// }


// //FUNCTION for Minimum of two numbers
// #include <iostream>
// using namespace std;

// //Minimum of two numbers
// void findMin(int a, int b) {

//    if (a<b) {
//       cout << a << " is the minimum number." << endl;
//    } 
//    else if (b<a) {
//       cout << b << " is the minimum number." << endl;
//    } 
//    else {
//       cout << "Both numbers (" << a << " and " << b << ") are exactly equal !" << endl;
//    }
// } 

// int main() {
//    int firstNum;
//    cout << "Enter first number (a): ";
//    cin >> firstNum;

//    int secondNum;
//    cout << "Enter first number (b): ";
//    cin >> secondNum;

//    findMin(firstNum, secondNum);
//    return 0;
// }



// FUNCTION OF SUM OF NUMBERS
// #include <iostream>
// using namespace std;

// int sumN(int n) {
//    int sum = 0;

//    for (int i = 1; i <= n; i++) {
//       sum += i;
//    }
//    return sum;
// }

// int main() {
//    cout << sumN(5) << endl;
//    cout << sumN(10) << endl;
//    return 0;
// }



// FUNCTION OF N FACTORIAL
// #include <iostream>
// using namespace std;

// int factorialN(int n) {
//    int fact = 1;
   
//    for (int i = 1; i <= n; i++) {
//       fact = fact * i;
//    }
//    return fact;
// }
   

// int main() {

//    cout << factorialN(10) << endl;
//    return 0;

// }


// DIGITS SUM OF A NUMBER
// #include <iostream>
// using namespace std;

// int digitsSum(int num) {
//       int digitsum = 0;
//       while (num > 0) {
//          int lastDigit = (num % 10);    // n mod 10 gives unit digit
//          num = num / 10;
//          digitsum += lastDigit; 
//       }
//       return digitsum;
//    }

// int main() {
//    int n = 0;
//    cout << "Enter a number: ";
//    cin >> n;

//    cout << "sum of digits entered number = " << digitsSum (n) << endl ;

// }



// BINOMIAL COEFFICIENT nCr for n & r
// #include <iostream>
// using namespace std;

// long long int factorial(int a) {
//    long long int fact = 1;
//    for (int i = 1; i <= a; i++) {
//       fact = fact * i;
//    }
//    return fact;
// }

// long long int nCr(int n, int r) {
//    long long int factOfn = factorial(n);
//    long long int factOfr = factorial(r);
//    long long int factOfnmr = factorial(n-r);

//    return (((factOfn)) / ((factOfr) * (factOfnmr)));
// }

// int main () {

//    int n, r;
//    cout << "Enter a number (n): ";
//    cin >> n;

//    cout << "Enter a number (r): ";
//    cin >> r;

//    cout << "Binomial coeffienct nCr for given n " << n << " & " << "r " << r << " is : " << nCr ( n, r);
//
// }



// FIBONACCI SERIES SUM till number n    // 0, 1, 1, 2, 3, .. (sum of previous two numbers)
// #include <iostream>
// using namespace std;

// void fibofun(int n) {

//    // EDGE CASE: If input is 0 or (-ve)
//    if (n <= 0) {
//       cout << "Please enter a positive number: " << endl;
//       return;     // Condition for Emergency exit to stop the function
//    }

//    // Initialize the first two memory boxes
//    long long int fiboOne = 0;
//    long long int fiboTwo = 1;

//    // Create the running total box
//    // We start it  at 1, because 0 + 1 = 1 (sum of first two numbers)
//    long long int totalSum = 1;

//    // Fibonacci series
//    cout << endl << "Your Fibonacci series till number " << n << " is: " << endl;

//    // Print the first two numbers manually to get the sequence started
//    cout << fiboOne << " ";

//    if (n > 1) {
//       cout << fiboTwo << " ";
//    }

// // LOOP COUNTER for third onwards numbers 

//    for (int i = 3; i <= n; i++) {

//       // Define the series
//       long long int current = fiboOne + fiboTwo;

//       // Print it
//       cout << " " << current;

//       // Accumulator: Add the newly generated number to the total!
//       totalSum += current;

//       // SLIDE THE BOXES TO THE RIGHT!
//       // OLD fiboTwo become new fiboOne
//       fiboOne = fiboTwo;

//       // Current number becomes the new fiboTwo
//       fiboTwo = current;
//    }
//    cout << endl;
   
//    cout << endl << "The total sum of the series is: " << totalSum;
// }

// int main () {
//    int n;
//    cout << "Enter how many Fibonacci numbers you want to print (n): ";
//    cin >> n;

//    // Call the function directly to print/output the result. Do NOT use cout here!
//    fibofun(n);

//    return 0;

// }



// DECIMAL TO BINARY CONVERSION
// #include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//    int ans = 0, pow = 1;

//    while (decNum > 0) {
//       int rem = decNum % 2;
//       decNum /= 2;

//       ans += (rem * pow);
//       pow *= 10;
//    }
//    return ans; //binary form
// }
// int main () {
//    int decNum = 50;

//    for ( int i = 1; i <= 50; i++) {
//         cout << decToBinary(i) << endl;

//    }
// }



// BINARY TO DECIMAL
// #include <iostream> 
// using namespace std;

// int binaryToDec(int binaryNum) {
//    int pow = 1; 
//    int ans = 0;

//    while (binaryNum > 0) {

//       // OPERATION PERFORM
//       int rem = binaryNum % 10;
//       ans += (rem * pow);

//       // UPDATION
//       binaryNum = binaryNum / 10;
//       pow *= 2;
//    }
//    return ans;
// }

// int main () {

//    int binaryNum = 0;
//    cout << "Enter a Binary Number: " ;
//    cin >> binaryNum;

//    cout << "The Decimal value is: " << binaryToDec(binaryNum) << endl;
   
//    return 0;
// }




// BITWISE OPERATORS
// #include <iostream>
// using namespace std;

// int main() {
//    int a = 10;
//    int b = 3;

//    // BITWISE AND &
//    cout << ( a & b ) << endl;   // 1010 & 0011 = 0010 = 2

//    // BITWISE OR |
//    cout << ( a | b ) << endl;  // 1010 | 011 = 1011 = 11

//    // BITWISE EXCLUSIVE-OR XOR ^
//    cout << ( a ^ b ) << endl;  // 1010 ^ 011 = 1001 = 9

//    // BITWISE LEFTSHIFT OPERATOR <<
//    cout << ( a << b ) << endl;   // 1010 << 2 = 1010000 = 80

//    // BITWISE RIGHTSHIFT OPERATOR >> 
//    cout << ( a >> b ) << endl;  // 1010 >> 2 = 00000001 = 1 

//    return 0;
// } 



// FIND IF A NUMBER IS 2's power or not 
// METHOD 1: Using normal operations
// #include <iostream>
// using namespace std;

// bool findTwo(int n) {

//    // EDGE CASE: Negative input
//    if (n <= 0) {
//       return false;
//    }

//    while (n % 2 == 0) {

//       cout << n << endl;
//       n = n / 2;     // Shrink the number

//    }

//    // If it is a perfect power of 2, the final division will leave exactly 1.
//    // If it leaves any other odd number (like 3 or 7), it fails.
//    if (n == 1) {
//       return true;
//    }
//    else {
//       return false;
//    }
// }

// int main() {
//    int n;
//    cout << "Enter a number: " ;
//    cin >> n;

//    if (findTwo(n) == true) {
//       cout << n << " is a power of 2!" << endl;
//    } 
//    else {
//       cout << n << " is NOT a power of 2." << endl;
//    }

//    return 0;
// }



// FIND IF A NUMBER IS EXPONENT OF 2
// METHOD 2: BITWISE OPERATOR
// #include <iostream>
// using namespace std;

// bool isMultTwo(int n) {

//    if (n <= 0) {
//       return false;
//    }

//    // EDGE CASE: n = 1
//    if (n == 1) {
//       return true;
//    }
//    while(n % 2 == 0) {
//       if ((n ^ ((2*n) - 1)) == (n - 1 )) {     // eg 1000 (8) ^ 1111 (15) = 0111 (7) ; 
//          return true;                               
//       }

//       else{
//          return false;
//       }
//    }
//    return false;
// }

// int main () {

//    int n;
//    cout << "Enter a number: ";
//    cin >> n;

//    if (isMultTwo(n) == true) {
//       cout << "Your entered number " << n << " is an exponent of 2 ";
//    }
//    else {
//       cout << "Your entered number "<< n << " is not an exponent of 2";
//    }
//    return 0;
// }



// REVERSE NUMBER
// #include <iostream>
// using namespace std;

// int reversenum(int n) {
  
//    int unitdigit;
//    int newNum = 0;

//    while (n > 0) {
//       unitdigit = n % 10;

//       newNum = (newNum*10) + unitdigit;

//       n = n/10;

//    }
//    return newNum;
// }

// int main() {

//    int n;
//    cout << "Enter a number: ";
//    cin >> n;

//    cout << "Reverse of your entered number " << n << " is " << reversenum(n) << endl;
//    return 0;
  
// }




// DATA STRUCTURES & ALGORITHMS

// ARRAYS : Linear, same data type throughout, contiguous in memory
// Marks example
// #include <iostream>
// using namespace std;

// int main() {

//    // Array size can be greater than data element number size, if array size is predefined by us, before assigning the data value size
//    int marks[ 100 ] = {99, 55, 100, 36, 55};    // Initialiazation of Array Element

//    int size = 5;     // If we define array size

//    int sz = sizeof(marks);    // we can find the given array size

//    // int data type is 4byte in size, so 5 memory address is (4 * 5) = 20 byte 
//    cout << sizeof(marks) << endl;      // ((4*100) = 100) bytes output 

//    // (total array memory size) / (int size) = (Total Array blocks size), since each Index has int type size 
//    cout << sizeof(marks) / sizeof(int) << endl;    //Generally array size is given

//    // Changing data values by accessing individual data index
//    marks[1] = 101;

//    // Access array data values 
//    // cout << marks[0] << endl;
//    // cout << marks[1] << endl;

//    // LOOPS IN ARRAY: 0 to (size-1)
//    // OUTPUT LOOPING
//    for (int i = 0; i < size; i++) {
//       cout << marks[i] << endl;
//    }

//    // Index Range of Arrays = 0 to (size-1)
//    cout << marks[5] << endl;     // WARNING! INDEX PAST THE END OF THE ARRAY; But, here we mentioned array size 100, by default remaining unused memory address get assigned 0, so here it will print 0
//    cout << marks[-1] << endl;     // WARNING ! INDEX BEFORE THE BEGINNING INDEX OF ARRAY, but here it will print the last used garbage value of memory hardware

//    // Array size can be equal to the data element number size, by default, if we do not predefined array size
//    double price[3] = {99.99, 105.67, 30.00};     // Array size will be 3 here by default 

//    return 0;
// }


// INPUT LOOPING: Taking Input for array using array loops
// #include <iostream>
// using namespace std;

// int main() {
//    int size = 5;
//    int marks[size];

//    for (int i = 0; i < size; i++) {
//       cout << "Enter marks: ";
//       cin >> marks[i];
//    }

//    for (int i = 0; i < size; i++) {
//       cout << "Your marks arrays is: " << marks[i] << endl;
//    }
//    return 0;

// }


// LARGEST & SMALLEST NUMBER IN ARRAYS
// #include <iostream>
// #include <climits>
// using namespace std;


// int main() {
//    int smallest = INT_MAX;
//    int largest = INT_MIN;

//    int smallestIndex = -1;
//    int largestIndex = -1;

//    int size;
//    cout << "Enter array size: ";
//    cin >> size;

//    // Create the array size without the initializer = {}
//    int marks[size];

//    // Insertion Loop
//    cout << "\nEnter " << size << " grades:" << endl;

//    for (int i = 0; i < size; i++) {
//       cout << "Grade " << (i+1) << ": " ;
//       cin >> marks[i];
//    }

//    cout << "\n--- UPLOADING TO DATABASE --- \n";
   
//    for (int i = 0; i < size; i++) {

//       if (marks[i] < smallest) {
//          smallest = marks[i];
//          smallestIndex = i;
//       }
//       // smallest = min(marks[i], smallest);
 
//       if (marks[i] > largest) {
//          largest = marks[i];
//          largestIndex = i;
//       }
//       // largest = max(marks[i], largest);
//    }

//    // PRINTING THE LOOP
//    cout << "Here are the stored grades: " << endl;
//    for (int i = 0; i < size; i++) {
//       cout << marks[i] << " ";
//    }

//    cout << endl;

//    cout << "Smallest number from your array is: " << smallest << " (Found at Index: " << smallestIndex << ")" << endl;
//    cout << "Largest number from your array is: " << largest << " (Found at Index: " << largestIndex << ")" << endl;

//    return 0;
// }


// PASS BY REFERENCE (ARRAYS)
// #include <iostream>
// using namespace std;

// void changeArr(int arr[], int size) {
//    cout << "in function\n";

//    for(int i = 0; i < size; i++) {
//       arr[i] = 2* arr[i];
//    }

// }

// int main() {
//    int arr[] = {1, 2, 3};

//    changeArr(arr, 3);

//    cout << "in main\n";
//    for(int i = 0; i < 3; i++) {
//       cout << arr[i] << " ";
//    }
//    cout << endl;

//    return 0;
// }



// LINEAR SEARCH (Time Complexity = O(n))
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//    for (int i = 0; i < sz; i++) {
//       if (arr[i] == target) { // FOUND
//          return i;
//       }
//    }
//    return -1;

// }

// int main() {
//    int arr[] = {4, 2, 7, 8, 1, 2, 5};
//    int sz = 7;
//    int target = 2;   // Prints the first index for duplicate values

//    cout << linearSearch(arr, sz, target) << endl;
//    return 0;

// }



//2 - POINTER APPROACH  ( Time Complexity = O(n) )
// #include <iostream>
// using namespace std;

// void reverseArr(int arr[], int sz) {
//    int start = 0;
//    int end = sz - 1;

//    while (start < end) {
//       swap (arr[start], arr[end]);
//       start ++;
//       end--;
//    }

// }

// int main() {
//    int arr[] = {4, 2, 7, 8, 1, 2, 5};
//    int sz = 7;

//    reverseArr(arr, sz);

//    for (int i = 0; i < sz; i++) {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;

// }


// SUM & PRODUCT OF ALL THE ELEMENTS WITHIN AN ARRAY
// #include <iostream>
// using namespace std;

// int sumArra(int array[], int size) {
//    int sum = 0;

//    for (int i = 0; i < size; i++) {
//       sum += array[i];
//    }
//    return sum;
// }

// int multiArra(int array[], int size) {
//    int multi = 1;
//    for (int i = 0; i < size; i++) {
//       multi *= array[i];
//    }
//    return multi;
// }

// int main() {

//    int size;
//    cout << "Enter Array size: ";
//    cin >> size;

//    int array[size];

//    cout << "\n Enter " << size << " Array: " << endl;

//    for (int i = 0; i < size; i++) {
//       cout << "Array: " << (i) << ": ";
//       cin >> array[i];
//    }

//    cout << "Here is Array: " << endl;
//    for (int i = 0; i < size; i++) {
//       cout << array[i] << " ";
//    }

//    cout << endl;

//    cout << "Sum of elements of form array is: " << sumArra(array, size) << endl;
//    cout << "Product of elements of form array is: " << multiArra(array, size) << endl;

// }



// SWAP MINIMUM & MAXIMUM IN AN ARRAY
// #include <iostream>
// #include <climits>
// using namespace std;

// int getMinIndex(int array[], int size) {
//    int smallest = INT_MAX;
//    int minIndex = -1;      // Auxillary state to track the seat !

//    for (int i = 0; i < size; i++) {
//       if(array[i] < smallest) {
//          smallest = array[i];
//          minIndex = i;
//       }
//    }
//    return minIndex; 
// }

// int getMaxIndex(int array[], int size) {
//    int largest = INT_MIN;
//    int maxIndex = -1;

//    for (int i = 0; i < size; i++) {
//       if(array[i] > largest) {
//          largest = array[i];
//          maxIndex = i;
//       }
//    }
//    return maxIndex;
// }

// int main() {

//    int size;
//    cout << "Enter an array size: ";
//    cin >> size;

//    int array[size];

//    // INSERTION LOOP
//    cout << "Enter: " << size << " elements: " << endl;

//    for (int i = 0; i < size ; i++) {
//       cin >> array[i]; 
//    }

//       cout << "Here is your Array: " << endl;
//    for (int i = 0; i < size; i++) {
//       cout << array[i] << " ";
//    }

//    // Get the target indices
//    int minLoc = getMinIndex(array, size);
//    int maxLoc = getMaxIndex(array, size);

//    // SWAP
//    swap(array[minLoc], array[maxLoc]);

//    // New Array
//    cout << "\nArray after swapping minimum and maximum: " << endl;
//    for (int i = 0; i < size; i++) {
//       cout << array[i] << " ";
//    }

//    cout << endl;

//    return 0;
// }



// METHOD 1: PRINT ALL THE UNIQUES VALUES IN AN ARRAY (NESTED LOOP LOGIC) 
// #include <iostream>
// using namespace std;

// // TEMPLATE DECLARATION:
// // Printing Resultant Array 
// template <typename T>   // T as a placeholder for any data type

// void printArray(T array[], int size) {
//    for (int i = 0; i < size; i++) {
//       cout << array[i] << " ";
//    }
//    cout << endl;
// }

// // HELPER FUNCTION: UNIQUE ELEMENT EXTRACTOR
// template <typename T>
// void printUnique(T array[], int size) {

//    // Outer Loop
//    for (int i = 0; i < size; i++) {
//       int count = 0;

//       // Inner Loop
//       for (int j = 0; j < size; j++) {

//          if (array[i] == array[j]) {
//             count ++ ;
//          }
//       }
      
//       if (count == 1) {
//          cout << array[i] << " ";
//       }
//    }
//    cout << endl;
// }

// // DRIVER FUNCTION (main)
// int main() {

//    int intSize;
//    cout << "--- INTEGER DATABASE ---" << endl;
//    cout << "Enter Array size: ";
//    cin >> intSize;

//    int intArray[intSize];
   
//    cout << "Enter: " << intSize << " integers:" << endl;

//    for (int i = 0; i < intSize; i++) {
//       cin >> intArray[i];
//    }

//    cout << "\nResultant Integer Array: " << endl;
//    printArray(intArray, intSize);

//    cout << "Unique Integers: ";
//    printUnique(intArray, intSize);

//    // ==========================================
//    // SECTION 2: CHARACTER ARRAY (Dynamic Input)
//    // ==========================================

//    int charSize;
//    cout << "\n --- CHARACTER DATABASE ---" << endl;
//    cout << "Enter the size of your Character Array: ";
//    cin >> charSize;

//    char charArray[charSize];

//    cout << "Enter: " << charSize << " characters (letters/symbols): " << endl;
//    for (int i = 0; i < charSize; i++) {
//       cin >> charArray[i];
//    }

//    cout << "\nResultant Character Array: ";
//    printArray(charArray, charSize);

//    cout << "Unique Characters: ";
//    printUnique(charArray, charSize);

//    return 0;
// }



// METHOD 2: UNIQUE ELEMENTS (BITWISE OPERATOR - XOR)
// #include <iostream>
// using namespace std;

// // HELPER FUNCTION: O(n) Time Complexity, O(1) Space Complexity
// int findSingleUnique(int array[], int size) {
//    int uniqueNumber = 0;

//    for (int i = 0; i < size; i++) {
//       uniqueNumber ^= array[i];
//    }

//    return uniqueNumber;
// }

// // DRIVER FUNCTION
// int main() {
//    int size; 
//    cout << "Enter an odd Array size (eg., 3, 5, 7, 9, 11, ..) : ";
//    cin >> size;
   
//    cout << "Enter : " << size << " elements (pairs, with one unique): " << endl; 
//    for (int i = 0; i < size; i++) {
//       cin >> array[i];
//    }

//    // Pass the packages to the Helper Function
//    int result = findSingleUnique(array, size);

//    cout << "The Single unique element is: " << result << endl;

//    return 0;
// }



//METHOD 1: INTERSECTION ARRAY (ELEMENTS) OF TWO ARRAYS (NESTED LOOPS)
// #include <iostream>
// using namespace std;

// // // HELPER FUNCTION: COMMON ELEMENTS EXTRACTOR
// template <typename T>
// void printIntersection(T arr1[], T arr2[], int size) {

//    // Outer Loop
//    for (int i = 0; i < size; i++) {

//       // Inner Loop
//       for (int j = 0; j < size; j++) {

//          if ((arr1[i]) == (arr2[j])) {
//             cout << arr1[i] << " ";

//             break;
//          }
//       }
//    }
//    cout << endl;
// }

// // DRIVER FUNCTION (main)
// int main() {

//    int size;
//    cout << "Enter array size: ";
//    cin >> size;

//    int arrayOne[size];
//    int arrayTwo[size];

//    cout << "Enter: " << size << "elements for Array 1: " << endl;

//    for (int i = 0; i < size; i++) {
//       cin >> arrayOne[i];
//    }

//    cout << "Enter: " << size << " elements for Array 2: " << endl;
//    for (int i = 0; i < size; i++) {
//       cin >> arrayTwo[i];
//    } 

//    cout << "\nCommon elements array from both array is: " ;

//    printIntersection(arrayOne, arrayTwo, size);
//    return 0;
// }




// METHOD 2: Intersection function
// #include <iostream>
// using namespace std;

// int arrayOne(int array[], int size) {

// }
// int main() {

//    return 0;
// }

// // VECTOR
// #include <iostream>
// #include <vector>    //Vector's Header File

// // #include <bits/stdc++.h>

// using namespace std;

// int main() {

//    // Method 1: Define Vector
//    // vector<int> vec;     // size 0
//    // cout <<vec[0];       // Segmentation Fault: Trying to access the unaccessible or absent memory address / space

//    // Method 2: Define Vector
//    vector<int> vec = {1, 2, 3};    //3
//    cout << vec[0] << endl;    // print "1"
//    vec.push_back(6);

//    cout << vec.front() << endl;  // print 1

//    vec.erase(vec.begin()) ;

//    cout << vec.front() << endl;  // print 2
//    cout << vec.back() << endl;   // print 6

//    vec.emplace_back(9);

//    vec.erase(vec.begin() + 2);   // Erases at 2nd Index

//    cout <<  vec.back() << endl;
//    for (int val : vec) {
//       cout << val << " , ";      
//    }

//    cout << endl; 

//    vector<int>::iterator i;
//    for(i= vec.begin(); i != vec.end(); i++) {
//       cout << *(i) << " , ";
//    }

//    cout << "Using at() method, value at index 1 is " << vec.at(1) << endl;
//    cout << "Using [] index method, value at index 1 is " << vec[1] << endl;

//    // // Method 3: Define Vector 
//    // vector <int> vec (5, 1);
//    // cout << vec[0] << endl;    // print "1"
//    // cout << vec[1] << endl;    // print "1"
//    // cout << vec[2] << endl;    // print "1"
//    // cout << vec[3] << endl;    // print "1"
//    // cout << vec[4] << endl;    // print "1"

//    return 0;
// }



// LINEAR SEARCH IN VECTOR
// #include <iostream>
// #include <vector>
// using namespace std;

// int linearSearch(vector<int> &nums, int target) {

//    bool isFound = false;

//    int n;
//    int ans = n; 
   
//    for (int val : nums) {
//       if ( val == target) {
//          isFound = true;
//          break;
//       }
//    }

//    if (isFound == true) {
//       cout << "SUCCESS: The target " << target << " is present in the vector!" << endl;
//    }
//    else {
//       cout << "FAILED: The target " << target << "is NOT present in the vector!" << endl;
//    }
// }


// int main() {

//    int size:
//    cout << "Enter the size of your vector: ";
//    cin >> size;

//    vector<int> myVector;

//    cout << "Enter " << size << " elements : " << endl;

//    for (int i = 0; i < size; i++) {
//       int tempInput;
//       cin >> tempInput;
//       myVector.push_back(tempInput);
//    }

//    // GET THE TARGET NUMBER TO SEARCH FOR
//    int targetNumber;
//    cout << "\nEnter the number you want to search for: ";
//    cin >> targetNumber;

//    linearSearch(myVector, targetNumber);

//    return 0;
// }




// REVERSE FUNCTION
// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseArray(vector<int>& nums) {
//    vector<int> reVector;

//    for (int i = nums.size() - 1; i >= 0; i--) {     // Reverse Iteration from size of array from last element (index = size) to first element (index 0)
//       reVector.push_back(nums[i]);
//    }
//    cout << "Reversed Vector: ";
//    for (int val : reVector) {
//       cout << val << " ";
//    }
//    cout << endl;
//    }

// int main() {
//    int size;
//    cout << "Enter vector size: ";
//    cin >> size;

//    vector<int> inputVector;

//    cout << "Enter " << size << " elements: " << endl;

//    for (int i = 0; i < size; i++) {
//       int tempoInput;
//       cin >> tempoInput;
//       inputVector.push_back(tempoInput);
//    }

//    reverseArray(inputVector);

//    return 0;
// }




// METHOD 2: REVERSE VECTORS ( *IN-PLACE REVERSAL* 2-POINTER APPROACH SWAP FUNCTION)
// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseArrayM2(vector<int>& nums) {

//    int start = 0;
//    int end = nums.size() - 1;

//    while (start < end) {
//       swap(nums[start], nums[end]);

//       start++;
//       end--;
//    }

//    cout << "Reversed Vector (In-Place): ";
//    for (int val : nums){
//       cout << val << " ";
//    }
//    cout << endl;
// }

// int main() {
//    int size;
//    cout << "Enter Vector size: ";
//    cin >> size;

//    vector<int> inputVector;

//    cout << "Enter: " << size << " elements: " << endl;

//    for (int i = 0; i < size; i++) {
//       int tempInput;
//       cin >> tempInput;
//       inputVector.push_back(tempInput);
//    }

//    reverseArrayM2(inputVector);
//    return 0;
// }



// REMOVE DUPLICATES IN AN ARRAY  (2-POINTER APPROACH)
// #include <iostream>
// #include <vector>
// using namespace std;

// int removeDuplicates(vector<int>& nums) {
//    int start = 0;

//    for (int end = 1; end < nums.size(); end++) {

//       if (nums[end] = nums[start]) {
//          start ++;
//          nums[start] = nums[end];
//       }
//    }
//    return start + 1;
// }

// int main() {

//    int size;
//    cout << "Enter Size of the Sorted Vector: ";
//    cin >> size;

//    cout << "Enter: " << size << " elements: " << endl;

//    vector<int> nums;

//    for (int i = 0; i < size; i++) {
//       int tempInput;
//       cin >> tempInput; 
//       nums.push_back(tempInput);
//    }

//    int singleCount = removeDuplicates(nums);

//    cout << "\nThere are " << singleCount <<" Unique Elements" << endl;
//    cout << "Modified Array First " << singleCount << " are unique elements" << endl;

//    for (int i = 0; i < size; i++) {
//       cout << nums[i] << " ";
//    }

//    cout << endl;
//    return 0;
// }



// // SUM OF TWO NUMBERS IS EQUAL TO TARGET NUMBER (2 - POINTER APPROACH)
// #include <iostream>
// #include <vector>
// using namespace std;

// void vector<int> twoSum(vector<int>& nums, int target) {
//    int start = 0;
//    int end = 1;
//    while ((start < end) && (end < nums.size())) {
//       if (nums[start] + nums[end] == target) {
//          cout << "First Integer would be: " << i << "Second integer would be: " << j << endl;
//          end++;
//       }
//       else {
//          continue;
//       }
//    }
// }

// int main() {
//    int size ;
//    cout << "Enter size of the array: ";
//    cin >> size;

//    vector<int> nums;

//    cout << "Enter: " << size << " elements: " << endl;
//    for (int i = 0; i < size; i++) {
//       int tempInput;
//       nums.push_back(tempInput);
//    }

//    twoSum(nums);

//    return 0;
// }


// VECTOR FUNCTIONS
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
//    // Size() function
//       // cout << "size = " << vec.size() << endl;     // size = 5

//    // vector<int> vec;
//    //    cout << "size = " << vec.size() << endl;     // size = 0

//    // Push_back() function : Element get push to the last of vector
//       vector<int> vec;     // Initially 0 size memory allocation for vector creation
//       cout << "size = " << vec.size() << endl;     // size = 0 

//       vec.push_back(25);         // Dynamic Memory Allocation
//       vec.push_back(20);

//       cout << "after push back size = " << vec.size() << endl;     // after push back size = 4
      
//       // SIZE & CAPACITY (capacity gets doubled by producing replica memory capacity of previous memory blocks size)
//       cout << "Vector size is: " << vec.size() << endl; // print (5) size shows us number of occupied / assigned elements number
//       cout << "Vector capacity is: " << vec.capacity() << endl; // print (8) Capacity shows us actual number of memory blocks created for vector creation

//       // Before pop_back() function perfom:

//       // Introductory printer line (Before & Outside the loop)
//       cout << "push_back elements  = " ;

//       // Print push_back() element: Elements get print in the same order they are being stored in push_back() function
//       for (int val : vec) {   // for each loop
//          cout << val << " , ";
//       }

//       // Drop to the new line, once printing elements line is finished
//       cout << endl;

//       // POP_BACK() function: Deletes the endmost element
//       vec.pop_back();   // No need to mention the element, by default it will delete endmost element

//       // Post pop_back() function:
//        // Reprinting elements
//       cout << "push_back elements (post push_back()) : ";

//       // Print elements
//       for (int val : vec) {   // for each loop
//          cout << val << " , ";
//       }

//       cout << endl; 

//       // Front() function: Returns the starting / front value of the vector
//       cout << "Front value: " << vec.front() << endl;      // prints 25

//       // Back() function: Returns the last / back value of the vector
//       cout << "Last value: " << vec.back() << endl;

//       // At() : Access value at particular index
//       cout << "Value at this index is: " << vec.at(1) << endl;

//    return 0;
// }



// SUBARRAY METHOD 1(BRUTE FORCE)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    int n = 5;
//    int arr[5] = {1, 2, 3, 4, 5};

//    for (int start = 0; start < n; start++) {
//       for (int end = start; end < n; end++) {
//          for (int i = start; i <= end; i++) {
//             cout << arr[i];
//          }
//          cout << " ";
//       }
//       cout << endl;
//    }

// }



// MAXIMUM SUBARRAY SUM METHOD 1(BRUTE FORCE) (TIME COMPLEXITY O(n^3))
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//    int n;
//    cout << "Enter array size: ";
//    cin >> n;

//    int arr[n];
//    cout << "Enter: " << n << " elements: " << endl;
//    for (int i =  0 ; i < n; i++) {
//       int tempInput;
//       arr.push_back(tempInput);
//    }

//    int maxSum = INT_MIN;

//    for (int start = 0; start < n; start++) {

//       for (int end = start; end < n  - 1; end ++) {

//          int currentSum = 0;

//          for (int i = start; i < end; i++) {

//             cout << arr[i];
//             currentSum += arr[i];
//             cout << max(sum) << endl
//          }
         
//          maxSum = max(maxSum, currentSum);
//       }
//    }
//    cout << "The Maximum Subarray Sum is: " << maxSum << endl;

//    return 0;
// }




// MAXIMUM SUBARRAY SUM METHOD 2(BRUTE FORCE) (TIME COMPLEXITY O(n^2))
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    int n = 5;
//    int arr[5] = {1, 2, 3, 4, 5};

//    int maxSum = INT_MIN;

//    for (int start = 0; start < n; start++) {
//       int currSum = 0;
//       for (int end = start; end < n; end++) {
//          currSum += arr[end];
//          maxSum = max(currSum, maxSum);
//       }

//    }
//    cout << "MAX sub array value = " << maxSum << endl;
//    return 0;
// }




// // MAXIMUM SUBARRAY (KADANE'S ALGORITHM) (TIME COMPLEXITY O(n))
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//    int n = 5;
//    int num = {}


//    for (int i = 0; i < n; i++) {
//       currentSum += arr[i] ;
//       maxSum = max(cuurentSum, maxSum);

//       if (currentSum < 0) {
//          currentSum = 0;
//       }
//    }
//    return 0;
// }




// PAIR SUM (BRUTE FORCE) (TIME COMPLEXITY O(n^2))
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//    vector<int> ans;

//    int n = nums.size();

//    for (int i = 0; i < n; i++) {
//       for (int j = i + 1; j < n; j++) {
//          if (nums[i] + nums[j] == target) {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//          }
//       }
//    }
//    return ans;
// }

// int main() {

//    vector <int> nums = {2, 7, 11, 15};
//    int target = 9;

//    vector<int> ans = pairSum(nums, target);
//    cout << ans[0] << " , " << ans[1] << endl;

//    return 0;
// }



// METHOD 2: PAIR SUM (2 POINTER APPROACH)
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSumM2(vector<int> nums, int target) {
//    vector<int> ans;
//    int n = nums.size();

//    int i = 0;
//    int j = n-1;

//    while (i < j) {
//       int pairSum = nums[i] + nums[j];

//       if (pairSum > target) {
//          j--;
//       }

//       else if (pairSum < target) {
//          i++;
//       }

//       else {
//          ans.push_back(i);
//          ans.push_back(j);
//          return ans;
//       }
//    }
//    return ans;
// }

// int main() {
//    vector<int> nums = {2, 7, 11, 15};
//    int target = 26;


//    vector<int> ans = pairSumM2(nums, target);
//    cout << ans[0] << ", " << ans[1] << endl;

//    return 0;
// }




// // MAXIMUM VALID PAIR SUM
// #include <iostream>
// #include <climits>
// #include <vector>
// using namespace std;

// int maxValidPairSum(vector<int>& nums, int k) {

//    int maxSum = INT_MIN;

//    int maxLeft = INT_MIN;

//    // OUTER LOOP for beginning element of either pair (i, j)
//    for (int j = k; j < nums.size(); j++) {

//       maxLeft = max(maxLeft, nums[j-k]);

//       // INNER LOOP for pair element, since constraint given is (j-i)>= k
//       // for (int j = i + k; j < nums.size(); j++) {

//          int pairSum = maxLeft + nums[j];

//          maxSum = max(maxSum, pairSum);

//          // }
//       }
//       return maxSum;
//    }

// int main() {
//    vector<int> array = {1, 3, 5, 2, 8};
//    int k = 2;

//    cout << "Maximum Valid Pair Sum for possible pairs is: " << maxValidPairSum(array, k) << endl;
// }


// // 3622. Check Divisibility by Digit Sum and Product
// #include <iostream>
// using namespace std;

// bool checkDivisibility(int n) {
//    int sum = 0;
//    int product = 1;
//    int originalNumber = n;
//    int divisorTerm = 0;

//    while (n > 0) {
//       int singleDigit = n % 10;
//       sum += singleDigit;
//       product *= singleDigit;
//       n = (n / 10);
//    }
//       divisorTerm = sum + product;
//       if ((originalNumber % divisorTerm) == 0) {
//          return true;
//       }

//       else {
//          return false;
//       }
// }

// int main() {

//    int n = 99;

//    cout << checkDivisibility(n);

// }


// COUNT COMMAS IN RANGE
// #include <iostream>
// using namespace std;

// int countCommas(int n) {
//    long long totalCommas = 0;

//    if (n >= 1000) {
//       totalCommas += (n - 999);
//    }

//    if (n >= 1000000) {
//       totalCommas += (n - 999999);
//    }

//    if (n >= 1000000000) {
//       totalCommas += (n - 999999999);
//    }
//    // int rem = 0;
//    // if ((n / 10) >= 1000) {
//    //    n = n / 1000; 
//    //    rem = n % 1000;
//    // }
//    // for (int i = 1000; i <= n; i++) {
//    //    cout << n << ", ";
//    //    cout << rem ;
//    // }
//    return totalCommas;
// }

// int main() {
//    int n = 1002;
//    cout << countCommas(n);
//    return 0;
// }



// MAJORITY OF AN ELEMENT (frequency must be greater than floor of (n/2) |_(n/2)_|)
// METHOD 1: 
// #include <iostream>
// using namespace std;

//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for (int val : nums) {
//             int freq = 0;
//             for (int el : nums) {
//                 if (el == val) {
//                     freq ++;
//                 }
//             }
//             if (freq > n/2) {
//                 return val;
//             }
//         }
//         return -1;
//     }

// int main() {
//    majorityElement(n)
//    return 0;
// }



// MAJORITY OF AN ELEMENT (frequency must be greater than floor of (n/2) |_(n/2)_|)
// METHOD 2: 
// #include <iostream>
// using namespace std;
// 
// int main() {
// return 0;
// }


// POINTERS 
// #include <iostream>
// using namespace std;
// int main() {

//    // ADDRESS OF OPERATOR (&)
//    int a = 10;
//    cout << &a << endl;

//    // POINTER USE
//    int* ptr = &a;
//    cout << ptr << endl;
//    // POINTER'S ADDRESS
//    cout << &ptr << endl;
//    //PARENT POINTER
//    int** parntptr = &ptr;
//    // POINTER'S ADDRESS
//    cout << &parntptr << endl;
//    cout << parntptr << endl;

//    // Dereferencing operator
//    cout << *(&a) << endl;
//    cout << *(ptr) << endl;
//    cout << *(&parntptr) << endl;
//    cout << *(parntptr) << endl;

//    // NULL POINTER
//    int** ptr3 = NULL;
//    cout << ptr3 << endl;
//    cout << *(ptr3) << endl;     // SEGEMENTATION FAULT

//    return 0;
// }

// // PASS BY VALUE 
// #include <iostream>
// using namespace std;

// void changeA(int a) {
//    a = 20;
// }
// int main() {
//    int a = 10;

//    changeA(a);
//    cout << "Inside main function: " << a << endl;  //10 instead of 20
//    return 0;
// }

// PASS BY REFERENCE (POINTER'S APPROACH)
// #include <iostream>
// using namespace std;

// void changeA(int* ptr) {
//    *ptr = 20;
// }
// int main() {
//    int a = 10;

//    // Passing address of a
//    changeA(&a);
//    cout << "Inside main function: " << a << endl;  //20 instead of 10
//    return 0;
// }


// PASS BY REFERENCE (REFERENCE'S APPROACH)
// #include <iostream>
// using namespace std;

// void changeA(int &b) {   // & is symbol of alias here that is b is using here for a
//    b = 20;
// }
// int main() {
//    int a = 10;

//    // Passing address of a
//    changeA(a);
//    cout << "Inside main function: " << a << endl;  //20 instead of 10

//    return 0;
// }


// // ARRAY POINTERS  (CONSTANT POINTER)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << arr << endl;   // pointer
//     cout << *arr << endl;   // value of zeroth index (here 1)
//     int a = 10;
//     arr = &a;  // expression must be a modifiable lvalue , that is value in LHS in unmodifiable , since arr[] pointer is constant
//     return 0;
// }

// // POINTER'S ARITHMETIC 
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[] = {1, 2, 3, 4, 5};

//    cout << *arr << endl;  //1
//    cout << *(arr+1) << endl;  //2
//    cout << *(arr+2) << endl;  //3

//    int* pttr = arr;
//    cout << *(pttr+1) << endl;  //2
//    cout << *(pttr+2) << endl;  //3
//    pttr++;
//    cout << *(pttr) << endl;  //2

//    int a = 10;
//    int* ptr = &a;
//    cout << ptr << endl;
//    ptr++;  // +4
//    cout << ptr << endl;

//    cout << ptr << endl;
//    ptr--;  // -4
//    cout << ptr << endl;

//    cout << ptr << endl;
//    ptr+= 2;  // 2int => 8 bytes
//    cout << ptr << endl;

//    //POINTER'S ADDITION: This is not allowed in C++
//    //POINTER'S SUBTRACTION: No of blocks of the data type
//    int* ptr1;
//    int* ptr2 = ptr1 + 2; 
//    cout << ptr2 - ptr1 << endl; //2 (bytes)

//    // POINTER'S COMPARISION
//    cout << (ptr2 > ptr1) << endl;  //1 (True)

//    return 0;
// }



// BINARY SEARCH (DSA) (ITERATIVE APPROACH)
// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(vector<int> arr, int tar) {
//    int st = 0;
//    int end = arr.size() - 1;

//    while (st <= end) {
//       int mid = ((st + end) / 2);

//       if (tar > arr[mid]) {
//          st = mid + 1;
//       }

//       else if (tar < arr[mid]) {
//          end = mid - 1;
//       }

//       else {
//          return mid;
//       }
//    }

//    return -1;
// }

// int main() {
//    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};     // ODD SIZE
//    int tar1 = 12;

//    cout << binarySearch(arr1, tar1) << endl;

//    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};        // EVEN SIZE    
//    int tar2 = 0;

//    cout << binarySearch(arr2, tar2) << endl;

//    cout << "Hi, My name is Divya\nfrom Switzerland";
//    return 0;
// }



// BINARY SEARCH (DSA) (ITERATIVE APPROACH)
// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(vector<int> arr, int tar) {
//    int st = 0;
//    int end = arr.size() - 1;
//    }

// int main() {
   
//    return 0;
// }


// // BUBBLE SORT
// #include <iostream>
// #include <vector>
// using namespace std;

// void bubbleSort(int arr[], int n) {  // TC: O(n^2)
//    for (int i = 0; i < n-1; i++) {
//       bool isSwap = false;

//       for (int j = 0; j < n-i-1; j++) {
//          if (arr[j] > arr[j+1]) {
//             swap(arr[j], arr[j+1]);
//             isSwap = true;
//          }
//       }

//       if (!isSwap) {
//          return;
//       }

//    }
// }

// void printArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
// }

// int main() {
//    int n = 5;
//    int arr[] = {4, 1, 5, 2, 3};
//    bubbleSort(arr, n);
//    printArray(arr, n);
//    return 0;
// }



// SELECTION SORT
// #include <iostream>
// #include <vector>
// using namespace std;
// void selectionSort(int arr[], int n) {
//    for (int i = 0; i < n-1; i++) {
//       int smallestIdx = i;  // Unsorted part starting index
//       for (int j = i+1; j<n; j++) {
//          if (arr[j] < arr[smallestIdx]) {
//             smallestIdx = j;
//          }
//       }
//       swap(arr[i], arr[smallestIdx]);
//    }
// }

// void printArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
// }

// int main() {
//    int n = 5;
//    int arr[] = {4, 1, 5, 2, 3};
//    selectionSort(arr, n);
//    printArray(arr, n);
   
//    return 0;
// }


// // INSERTION SORT
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//    for (int i = 1; i < n; i++) {
//       int curr = arr[i];
//       int prev = i-1;

//       while(prev >= 0 && arr[prev] > curr) {
//          arr[prev+1] = arr[prev];
//          prev--;
//       }

//       arr[prev+1] = curr;
//    }
// }

// void printArray(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " " << endl; 
//    }
// }
// int main() {
//    int n = 5;
//    int arr[] = {7, 11, 9, 20, 12, 92};
//    insertionSort(arr, n);
//    printArray(arr, n);
//    cout << "Hi, My name is Divya\nfrom Switzerland";
//    return 0;
// }