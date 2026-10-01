// LOOPS
// Print numbers from 0 to n using while loop
#include <iostream>
using namespace std;

int main() {
    int count = 0;    // Initialisation 
    int n=0;
    cout << "Enter a number: " << endl;
    cin >> n;

    while (count<=n)   // Condition {
        cout << count << endl;
        count++;    //updation
    }

    return 0;
}



// FOR LOOP
// Print numbers from 0 to n using while loop
#include <iostream>
using namespace std;

int main () {

    int n = 0;
    cout << "Enter a number: " ;
    cin >> n;

    for (int count = 0 ; count <= n ; count++) {
        cout << count << " ";

    }
    return 0;

}




// Sum of numbers from 0 to n using FOR loop
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // GOAL 1: Print the Equation (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55)
    int sum1 = 0;
    for (int count = 0; count <= n; count++) {
        cout << count << " " ;

        if (count < n) {
            cout << " + " ;    // Print '+' if we are not at the last number
        } else {
            cout << " = " ;    // Print '=' if we are at the last number
        }
        sum1 += count ;
    }
    cout << "Cumulative sum Pattern is: " << sum1 << " " << endl;    // Prints the final answer at the end of the equation
    
    // GOAL 2: Print the Running Sequence of Sum (0 1 3 6 10 15 21 28 36 45 55)
    int sum2 = 0;
    for (int count =0; count <= n; count++) {
        sum2 += count;
        cout << "Cumulative Sum Series is: " << sum2 << " " ;    // Print the newly updated sum on every spin 
    }
    cout << endl;    // Drops the cursor to a new line after the sequence finishes

    // GOAL 3: The Final Statement
    // Sum2 already hold the final total from the loop above
    cout << "Sum of numbers from 0 to n is : " << sum2 << endl;    // Sum of numbers from 0 to n is : 55
    return 0;
}




// SUM OF NUMBERS 0 TO N USING WHILE LOOP
#include <iostream>
using namespace std;

int main() { 

    int n = 0;
    cout << "Enter a number: " ;
    cin >> n;

    int count = 0;
    int sum1 = 0;

    while ( count <= n) {
        cout << count;

        if (count < n) {
            cout << " + " ;
        } else {
            cout << " = " ;
        }
        sum1 += count;
        count ++ ;
    }
    cout << sum1 << endl;

    int count = 1;
    int sum2 = 0;

    while ( count <= n) {
        sum2 += count ;
        count ++ ;
    }
    cout << "Sum of numbers from 0 to n is: " << sum2 << endl ;

    return 0;
}

// SUM OF ALL ODD NUMBERS FROM M TO N using WHILE loop
#include <iostream>
using namespace std;

int main () {

    int m = 0;
    int n = 0;

    cout << "Enter starting number (m) : " ;
    cin >> m;
    cout << "Enter ending number (n) : " ;
    cin >> n;

    int i = m;
    int sum = 0;

    while ( i <= n) {
        
        if ((i % 2) != 0) {
            cout << i;

            if (i + 2 <= n) {
            cout << " + ";
        } else {
            cout << " = ";
        }

        sum += i;
    }
    i ++ ;                   
}
    cout << sum << endl;

    i = m;
    int sum2 = 0;
    while (i <= n) {
        if ((i % 2) != 0)  {
            sum2 += i;
        } 
        i++;
        }
        cout << "Sum of odd numbers from " << m << " to " << n << " is : " << sum2 << endl;
        return 0;
       
    }


// SUM OF ODD NUMBERS FROM m TO n using FOR LOOP
#include <iostream>
using namespace std;

int main() {
    int m = 0;
    int n = 0;

    cout << "Enter starting number (m): " ;
    cin >> m;
    cout << "Enter ending number (n) : " ;
    cin >> n;

    int sum = 0;

    for (int i = m; i <= n; i++ ) {
        if ( i % 2 != 0) {
            cout << i << " ";

            if ( i + 2 <= n) {
                cout << " + ";
            } else {
                cout << " = ";
            }
            sum += i;
        } 
    } 
    cout << sum << endl;

    int sum2 = 0;
    for (int i = m; i <= n; i++) {
        if ( i % 2 != 0) {
            sum2 += i;
        } 
    } 
    cout << "Sum of odd numbers from " << m << " to " << n << " is : " << sum2 << endl;
    return 0;
}




// DO WHILE LOOP
#include <iostream>
using namespace std;

int main() {

    int n = 10 ;
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <= n);

    cout << endl;
    return 0;
}




// PRIME OR NOT using DO-WHILE LOOP
#include <iostream>
using namespace std;

int main() {

    // Edge Case: 0 & 1 are never prime numbers
    if (n < 2) {
        cout << n << " is NOT a prime number." << endl;
        return 0;
        }

    int n = 0;
    cout << "Enter a number : " ;
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";

    // OUTER LOOP: Picks the current number to test ( from 2 up to n-1 )
    for (int num = 2; num < n; num++) {
        bool isPrime = true;    // Raise the flag for every new 'num'

        // INNER LOOP: Tests if 'num' is prime by dividing it
        for (int i = 2; i < num; i++) {
            
            if (num % i == 0) {
                isPrime = false;    // Divides perfectly! Drop the flag.
                break;  //Stop testing further number immediately
            }
        }

// After the loop finishes (or breaks) , we check the status of our flag
    if (isPrime == true) {
        cout << n << "is a PRIME number" << endl;
    } else {
        cout << n << " is NON PRIME number" << endl;
    }

        // After the inner loop finishes testing, check the flag!
        if (isPrime) {
            cout << num << " ";    // Print the prime number
        }
    }

    cout << endl;
    return 0;
}
   Edge Case: 0 & 1 are never prime numbers
    if (n < 2) {
        cout << n << " is NOT a prime number." << endl;
        return 0;
    }

    int i = 2;  // Prime math ALWAYS starts at 2
    bool isPrime = true;    // Flag: Assume it is prime until proven otherwise

    // Caveat: If n is 2, skip the do-while loop entirely
    // otherwise 2 % 2 will accidentally flag it as non-prime!
 //   if (n > 2) {
        do {
            if (n % i == 0) {
                isPrime = false;    // We found a perfect divisor! Drop the flag.
                break;  // Jump out of the loop instantly
            }
            i++ ;
        } while ((i < n) && (n >2));
 //   }

    // After the loop finishes (or breaks) , we check the status of our flag
    if (isPrime == true) {
        cout << n << "is a PRIME number" << endl;
    } else {
        cout << n << " is NON PRIME number" << endl;
    }
    return 0;
}




// PRIME NUMBERS
#include <iostream>
using namespace std;

int main() {

    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    // Edge Cases
    if (n < 2) {
        cout << n << " is NON - PRIME number" << endl;
        return 0;
    }

    // Check if user input n is prime or not 
    bool isNPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isNPrime = false;
            break;
        }
    }

    // Print the verdict for Goal 1
    if (isNPrime) {
        cout << "Your entered number " << n << " is a PRIME number." << endl;
    } else {
        cout << "Your entered number " << n << " is a NON-PRIME number." << endl;
    }

    // Goal 2: Sequence of all primes up to n
    cout << "Prime numbers up to " << n << " are: ";

    // Outer loop MUST be <= n so user's number gets included
    for (int num = 2; num <= n; num++ ) {
        bool isPrime = true;

        // Inner loop checks divisors up to num - 1
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // If the flag is still up, print it!
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}




// PRIME NUMBER USING DO WHILE LOOP
#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool isPrime = true;

    for ( int i = 2; i*i <= n; i++ ) {
        if(n % i == 0) {    //  Non Prime
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << "Prime no";
    } else {
        cout << "Non Prime no";
    }

    return  0;
}



// NESTED LOOP: Loop Inside Loop
#include <iostream>
using namespace std;

int main() {
    for (int i =1; i <= 5; i++) {
        cout << "*****" << endl;
    } return 0;
}

STAR pattern in increasing order
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i=0; i <= n; i++) {
        cout << " * "; // * , **, ***, ..
    }
    return 0;
}



// STAR PYRAMID: Star dense pattern
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {
        int m = 9;
        for (int j = 1; j <= m; j++) {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}



// PYRAMID STAR
#include <iostream>
using namespace std;

int main() {

    int n = 0;
    cout << "Enter the height of the pyramid (n) : ";
    cin >> n;


    // ROW MANAGER (OUTER LOOP)
    for (int i = 1; i <= n; i++) {

        // WORKER 1: SPACE Printer
        // Logic : ( n-1 )
        for (int spaces = 1; spaces <= (n - i); spaces++) {
            cout << " " ; // Print a blank space
        }

        // WORKER 2: STAR Printer
        // Formula: Odd numbers (2i - 1)
        for (int stars = 1; stars <= (2 * i - 1); stars++) {
            cout << "*";
        }

        // Row is finished! Drop down to the next line.
        cout << endl;
    }
    return 0;
}



// THE SPACED PYRAMID LOGIC : Star Space alternate Pattern
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Enter the height of the pyramid (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        // WORKER 1: The Space Printer (n - i)
        for (int spaces = 1; spaces <= (n - i); spaces++) {
            cout << " "; 
        }

        // WORKER 2: The Star Printer (Just 'i' times!)
        for (int stars = 1; stars <= i; stars++) {
            // CRITICAL: Notice the blank space after the star inside the quotes!
            cout << "* "; 
        }

        cout << endl;
    }

    return 0;
}



//PASCAL'S SERIES FOR ANY GIVEN NUMBER m, till given level n
#include <iostream>
using namespace std;

int main() {

    int n = 0;
    cout << "Enter a number of rows / level for Pascal's Triangle (n): ";
    cin >> n;

    int m = 0;
    cout << "Enter beginning number of Pascal's Triangle (m): ";
    cin >> m;

    // ROW / LEVEL MANAGER: Starts at level / row 0 the 1, 2, 3, ..
    for (int row = 0; row < n; row++) {  // Row Incrementing .. from 0 to (n - 1)
        
        // WORKER 1: Space Printer (n - row)
        for (int spaces = 1; spaces <= (n - row); spaces++) {
            cout << " ";
        }

        int val = m;

        int level = 0;
        // EDGE CASES: LEVEL 1 of Pascal's Triangle
        for ( int level = 0; level < n; level++){    // level one of pascal's triangle
            cout << m << endl;
        }

        for ( int level = 1; ((level >= 1) && (level <= n)); level++ ) {
            for ( int count = 0; ((count == 0) || (count == n)); count++) {     // first (0th zeroth index horizontally as per computer) and last number (nth index horizontally) in pascals triangle is same, since it is formed by adding itself with its adjacent nothing, i.e., 0, so (num + 0 = num)
                cout << m << endl;
            }

            // WORKER 2: INNER LOOP
            for ( int val = 1; ((val == 0) || (val < n)); val++) {
                for ( int rowIndex = 0; rowIndex < n; rowIndex++) {
                    for ( int columnIndex = 0; columnIndex < n; columnIndex++) {
                        val = (val * (rowIndex - columnIndex)) / (columnIndex + 1) ;
                    } cout << val << endl;
                } return 0;
            }
        }
    }
    }

// PPASCAL TRIANGLE
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Enter a number of rows / level for Pascal's Triangle (n): ";
    cin >> n;

    int m = 0;
    cout << "Enter beginning number of Pascal's Triangle (m): ";
    cin >> m;

    // THE ROW MANAGER (Starts at Box 0)
    for (int row = 0; row < n; row++) { 
        
        // WORKER 1: Space Printer (n - row)
        for (int spaces = 1; spaces <= (n - row); spaces++) {
            cout << " ";
        }

        // --- YOUR BRILLIANT ADDITION ---
        // Instead of starting with 1, we start the row with your custom 'm'!
        int val = m; 
        
        // WORKER 2: The Math Printer (Starts at Box 0)
        for (int col = 0; col <= row; col++) {
            
            cout << val << " "; 
            
            // The exact formula you successfully figured out
            val = (val * (row - col)) / (col + 1);
        }

        cout << endl; // Drop to the next line
    }

    return 0;
}



    // Pascal's sequence: At level n, (n+1) nodes are present
    // Center of Pascal's is node's center
    // At each level total space taking is (n) + (n+1) eg if level number is 4, level will be 1 3 3 1, so total spaces are length(1_3_3_1) = 7 OR
    // For each level of pyramid, center of pyramid is at highest level oposition of pyramid, example for 4th level , 7 spaces, center will be at 4th position
    //     int level <= n;
    // Edge Case: Setting first level 
    for (level = 1; level <= n; level ++ ) {
        while (level = 1) {
            for (i = 1; i <= n; i++) {
                if ( i = n) {
                cout << m << endl;  // Set center of pyramid eg _ _ _ 2 _ _ _ for enter h = 4, m = 2
        }
    }
    }
}
    // Level 2 onwards till given last n level height
    int count = " "; 
    for (level = 2; level <= n; level++) {
        while ( count <= n) {
            sum = sum + 
        }
    }
}


// SQUARE PATTERN
#include <iostream>
using namespace std;

int main() {

    int m = 0; int n = 0;
    cout << "Enter total number of rows: ";     //Outer Loop
    cin >> n;
    cout << "Enter number of elements in a row: ";  // Inter Loop
    cin >> m;

    // Outer Loop Iteration
    for (int i = 1; i <= n; i++) {
        // cout << i << endl;  // Print serial or index number of rows alongside each row

        // i++;  
        // Inner Loop Iteration
        for (int j = 1; j <= m; j++){
            cout << j<< " ";  // Print numbers in a row serially
    } 
    cout << endl;
}
    return 0;
}



// SQUARE STAR PATTERN
 #include <iostream>
using namespace std;

int main() {
    int m = 0; int n = 0;
    cout << "Enter total number of rows: ";     //Outer Loop
    cin >> n;
    cout << "Enter number of stars in a row: ";  // Inter Loop
    cin >> m;

    // OUTER LOOP
    for (int i = 1; i <= n; i++) {
        
        // INNER LOOP
        for (int j = 1; j <= m; j++) {
            cout << "* ";
        } 
        cout << endl;
    } return 0;
}



// SQUARE ALPHABET PATTERN
#include <iostream>
using namespace std;

int main() {

    int m = 0; int n = 0;
    cout << "Enter total number of rows: ";     //Outer Loop
    cin >> n;
    cout << "Enter total number of Alphabets in a row: ";     //Outer Loop
    cin >> m;
    
    // OUTER LOOP
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        // Inner Loop
        for (int j = 0; j < m; j++) {   // Inner Start => Line Start
            cout << ch << " ";
            ch = ch + 1;    //65 + 1 => 66 -> B
        }
        cout << endl ;
    } return 0;
}



// SQUARE CHARACTER PATTERN
#include <iostream>
using namespace std;

int main() {
    char startChar, endChar;

    cout << "Enter the starting character (e.g., A): ";
    cin >> startChar;
    
    cout << "Enter the ending character (e.g., Z): ";
    cin >> endChar;

    int m = 0;
    cout << "Enter how many characters to print per row (m): ";
    cin >> m;

    // Index tracker to track letter
    char currentChar = startChar;

    while (currentChar <= endChar) {

        // Worker 1: Column Printer
        // Prints exactly 'm' characters side-by-side
        for (int j = 0; j < m; j++) {

            // Caveat Checks
            // Ensures we don't accidentally print past the endChar, if the row isn't fully filled yet!
            if (currentChar <= endChar) {
                cout << currentChar << " ";
                currentChar ++ ;    // Math char! 65 + 1 = 66 ('B')
            }
        }
        // Row is finished, drop the cursor down
        cout << endl;
    }   
    return 0;
}



// SQUARE NUMBER PATTERN
#include <iostream>
using namespace std;

int main () {

    int n = 0; int m = 0; int l = 0;

    cout << "Enter starting number: ";
    cin >> m;

    cout << "Enter ending number: ";
    cin >> n;

    cout << "Enter number of counts per row : ";
    cin >> l;

    // Current Element / Number Index tracker 
    int currentnum = m;
    
    // Set overall loop condition
    while (currentnum <= n) {

        // Row wise condition
        for (int i = 0; i < l; i++) {

            if (currentnum <= n) {
                cout << currentnum << " ";
                currentnum++ ;
            }
        } cout << endl;
    } return 0;
}


// SQUARE NUMBER FROM 1 TO N
#include <iostream>
using namespace std;

int main() {

    int num = 1;
    
    int n;
    cout << "Enter the grid dimension (e.g., type 3 for a 3x3 square): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num ++;
        }
        cout << endl;
    }
    cout << "After pattern print next num: " << num << endl; 
    return 0;
}


// SQUARE PATTERN FOR CHARACTERS
#include <iostream>
using namespace std;

int main() {
    char startChar =  'A';

    int n = 0;
    cout << "Enter grid dimension: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << startChar << " ";
            startChar++;
        } cout << endl;
    } return 0;
}


// RIGHT (LHS) ANGLE STAR PATTERN
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter triangle size (n) : ";
    cin >> n; 
    for (int i=0; i < n; i++) {
        for (int j=0; j < i+1; j++) {
            cout << "* ";
        } cout << endl;
    } return 0;
}



// TRIANGLE PATTERN FOR NUMBERS
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< (i+1); j++) {
            cout << (i + 1) ;
        } cout << endl;
    } return 0;
}



// TRIANGLE CHARACTER PATTERN
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of triangle: ";
    cin >> n;

    char startChar = 'A';
    // Outer Loop
    for (int i = 0; i < n; i++) {

        //Inner Loop
        for (int j = 0; j< (i + 1); j++) {

            // Define what to print
            cout <<startChar;
        } 
        // Define what to print in next row
        startChar++; 

        // Immediate before this row is ending, from this next row is beginning
        cout << endl;
    } return 0;
}



// TRIANGLE PATTERN TILL NUMBERS N
#include <iostream>
using namespace std;

int main() {
   int n = 0;
   cout << "Enter a number: ";
   cin >> n;

   for (int i = 0; i < n; i++) {
      for (int j = 1; j <= i+1; j++) {
         cout << j;
      }
      cout << endl;
   } return 0;
}



// REVERSE TRIANGLE 
#include <iostream>
using namespace std;

int main() {
   int n = 0;
   cout << "Enter a number: ";
   cin >> n;

   for (int i = n; i > 0; i--) {
      for (int j = i + 1; j > 0; j--) {
         cout << j;
      }
      cout << endl;
   }
   return 0;
}
 


// FLOYD'S TRIANGLE PATTERN
#include <iostream>
using namespace std;

int main() {
   int num = 1;

   for (int i =0; i < n; i++) {
      for (int j = 0; j < i+1; j++) {
         cout << num;
         num ++;
      } 
   }
}



// INVERTED TRIANGLE PATTERN
#include <iostream>
using namespace std;

int main() {
   for (int i=0; i<n; i++) {

      for (int j=0; j<i; j++) {
         cout << " "; 
      }

      for (int j=0; j < n-i; j++) {
         cout << (i+1);    // cout << (i+1) << endl; for inverted pyramid pattern, remaining code is same 
      }
      cout << endl;
   } 
   return 0;
}



// PYRAMID PATTERN
#include <iostream>
using namespace std;
int main() {
   int n = 4;
   for (int i=0; i<n; i++) {

      for ( int j = 0; j<(n-i-1); j++) {
         cout << " "; 
      }

      for (int j = 1; j <= (i+1); j++) {
         cout << j;
      } 

      for (int j = i ; j >= 1 ; j--) {
         cout << j;

      }
      cout << endl;
   } 
   return 0;
}




// HOLLOW DIAMOND PATTERN
#include <iostream>
using namespace std;

int main() {
   int n = 4;

   //top part
   for (int i=0; i < n; i++) {
     
      //Spaces
      for (int j=0; j< (n-i-1); j++) {
         cout << " " ;
      }
      cout << "*";

      if (i !=0) {
         //Spaces
         for (int j=0; j< (2*i-1); j++) {
            cout << " " ;
         }
         //star
         cout << "*";
      }
      cout << endl;
   } 
  
   //Bottom Part
   for (int i = 0; i < (n-1); i++) {
     
      //Spaces
      for (int j = 0; j < (i+1); j++) {
         cout << " ";
      }
      cout << "*";

      if ( i!= n-2) {

         for (int j = 0; j < (2*(n-i) - 5); j++) {
            cout << " ";
         } 
         cout << "*";
      } 
      cout << endl;
   }
   return 0;
}



// BUTTERFLY PATTERN
#include <iostream>
using namespace std;

int main() {
   int n = 4;

   // TOP PART
   for (int i = 1; i <= (n); i++) {

      // UPPER LEFT TRIANGLE CORNER
      for (int j=1; j <= i; j++) {
         cout << "*";
      }

      //Upper triangle adjacent spaces
      for (int j = 1; j <= (2*(n-i)); j++) {
         cout << " ";
      } 

      // UPPER RIGHT TRIANGLE STAR CORNER      
      for (int j=1; j <= i; j++) {
         cout << "*";
      }
      cout << endl;
   } 

   // BOTTOM TRIANGLE
   for (int i = n; i >= 1; i--) {

      // LOWER STAR PATTERN
      for (int j = 1; j <= i; j++) {
         cout << "*";
      }

      //LOWER TRIANGLE SPACES
      for (int j = 1; j <= (2*(n-i)); j++) {
         cout << " ";
      }

      // Lower left triangle adjacent stars
      for (int j = 1; j <= i; j++) {
         cout << "*";
   } cout << endl;
} return 0;
}



// FUNCTIONS
// SUM OF TWO NUMBERS
#include <iostream>
using namespace std;

int sum(int a, int b) {
   int s = a + b;
   return s;
}

int main() {
   cout << sum(10, 5);

}


//FUNCTION FOR MINIMUM OF TWO NUMBERS
#include <iostream>
using namespace std;

//Minimum of two numbers
void findMin(int a, int b) {

   if (a<b) {
      cout << a << " is the minimum number." << endl;
   } 
   else if (b<a) {
      cout << b << " is the minimum number." << endl;
   } 
   else {
      cout << "Both numbers (" << a << " and " << b << ") are exactly equal !" << endl;
   }
} 

int main() {
   int firstNum;
   cout << "Enter first number (a): ";
   cin >> firstNum;

   int secondNum;
   cout << "Enter first number (b): ";
   cin >> secondNum;

   findMin(firstNum, secondNum);
   return 0;
}



// FUNCTION OF SUM OF NUMBERS
#include <iostream>
using namespace std;

int sumN(int n) {
   int sum = 0;

   for (int i = 1; i <= n; i++) {
      sum += i;
   }
   return sum;
}

int main() {
   cout << sumN(5) << endl;
   cout << sumN(10) << endl;
   return 0;
}



// FUNCTION OF N FACTORIAL
#include <iostream>
using namespace std;

int factorialN(int n) {
   int fact = 1;
   
   for (int i = 1; i <= n; i++) {
      fact = fact * i;
   }
   return fact;
}
   

int main() {

   cout << factorialN(10) << endl;
   return 0;

}


// DIGITS SUM OF A NUMBER
#include <iostream>
using namespace std;

int digitsSum(int num) {
      int digitsum = 0;
      while (num > 0) {
         int lastDigit = (num % 10);    // n mod 10 gives unit digit
         num = num / 10;
         digitsum += lastDigit; 
      }
      return digitsum;
   }

int main() {
   int n = 0;
   cout << "Enter a number: ";
   cin >> n;

   cout << "sum of digits entered number = " << digitsSum (n) << endl ;

}



// BINOMIAL COEFFICIENT nCr FOR n & r
#include <iostream>
using namespace std;

long long int factorial(int a) {
   long long int fact = 1;
   for (int i = 1; i <= a; i++) {
      fact = fact * i;
   }
   return fact;
}

long long int nCr(int n, int r) {
   long long int factOfn = factorial(n);
   long long int factOfr = factorial(r);
   long long int factOfnmr = factorial(n-r);

   return (((factOfn)) / ((factOfr) * (factOfnmr)));
}

int main () {

   int n, r;
   cout << "Enter a number (n): ";
   cin >> n;

   cout << "Enter a number (r): ";
   cin >> r;

   cout << "Binomial coeffienct nCr for given n " << n << " & " << "r " << r << " is : " << nCr ( n, r);

}



// FIBONACCI SERIES SUM till number n    // 0, 1, 1, 2, 3, .. (sum of previous two numbers)
#include <iostream>
using namespace std;

void fibofun(int n) {

   // EDGE CASE: If input is 0 or (-ve)
   if (n <= 0) {
      cout << "Please enter a positive number: " << endl;
      return;     // Condition for Emergency exit to stop the function
   }

   // Initialize the first two memory boxes
   long long int fiboOne = 0;
   long long int fiboTwo = 1;

   // Create the running total box
   // We start it  at 1, because 0 + 1 = 1 (sum of first two numbers)
   long long int totalSum = 1;

   // Fibonacci series
   cout << endl << "Your Fibonacci series till number " << n << " is: " << endl;

   // Print the first two numbers manually to get the sequence started
   cout << fiboOne << " ";

   if (n > 1) {
      cout << fiboTwo << " ";
   }

// LOOP COUNTER for third onwards numbers 

   for (int i = 3; i <= n; i++) {

      // Define the series
      long long int current = fiboOne + fiboTwo;

      // Print it
      cout << " " << current;

      // Accumulator: Add the newly generated number to the total!
      totalSum += current;

      // SLIDE THE BOXES TO THE RIGHT!
      // OLD fiboTwo become new fiboOne
      fiboOne = fiboTwo;

      // Current number becomes the new fiboTwo
      fiboTwo = current;
   }
   cout << endl;
   
   cout << endl << "The total sum of the series is: " << totalSum;
}

int main () {
   int n;
   cout << "Enter how many Fibonacci numbers you want to print (n): ";
   cin >> n;

   // Call the function directly to print/output the result. Do NOT use cout here!
   fibofun(n);

   return 0;

}
