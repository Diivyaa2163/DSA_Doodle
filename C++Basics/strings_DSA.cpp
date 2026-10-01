// === STRINGS ===
// Generally, anything included inside the quotes " ", ' ', '" "'
// \n 1Byte size, single character


// CHARACTER ARRAY
// also called character strings "CSTRINGS"
// C++ has specifial characteristics, C++ Char arrays can be used to store "strings"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main () {
    // Random array containing characters
    // Array names in C++ are pointers
    // generally, unless we append \0, string will treat it as integer array, then it will print memory address
    int array1 [] = {'a', 'b', 'c', 'd', 'e'};      
    cout << array1 << endl;  // memory address

    char array2 [] = {'a', 'b', 'c', 'd', 'e'};      
    cout << array2 << endl;  // memory address followed by a random garbage value 

    // To convert char array to strings array, we append it with '\0' (Backslash Zero)
    // \0 is NULL CHARACTER, with ASCII Value 0, 1Byte size
    char string1 [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'};  //abcde
    cout << string1 << endl;

    // LENGTH OF THE STRING strlen()
    cout << std::strlen(string1) << endl;

    // Individual element access str[i]
    cout << string1[2] << endl;  // c
    cout << string1[9] << endl;  // PRINTS NOTHING 
 
    // DIRECT STRING ASSIGNMENT
    char string2 [] = "Hello!";  // STRING LITERALS (Literals: Invariable over-time)
    cout << string2 << endl;
    cout << string2[0] << endl;  // H

    return 0;
}




// INPUT & OUTPUT IN CHAR ARRAYS
// cin.getline(str, len, delim?)
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char str1[100];
    cout << "Enter char array: ";

    // Taking Input as Cin
    // Cin ignore the characters after first space occurence, and print nothing after space
    // so, for Cin we can enter only 1 continuous characters array
    cin >> str1;
    // Output
    cout << "Output : " << str1 << endl;

    cin.ignore(1100, '\n');  // Compiler ignores the leftover buffer upto 1100 char or once hit a newline (\n), whichever comes first, statement from cin >> str (remaining input, after the space)

    cout << "Enter char array: " << endl;
    // INPUT AS cin.getline(str, leng, delimiter) function
    // cin.getline("name of char array", "no of char", "limits the input after a specific condition"
    cin.getline(str1, 100, '$');

    // Output
    cout << "Output : " << str1 << endl;

    // PRINTING EACH CHARACTER of the char array (strings)
    for ( char ch : str1) {
        cout << ch << " ";
    }

    char str2[] = "Hello World";
    int len = 0;
    // PRINTING EACH CHARACTER OF THE GIVEN INPUT STRING
    for (int i = 0; str2[i] != '\0'; i++) {
        len++;
    }
    cout << "length of string: " << len << endl;
    cout << endl;
    return 0;
}



// === STRINGS IN C++ ===
// String is In-Built Class in C++
// DYNAMIC => Runtime Resize
// Continuous & Contiguous manner of data storage
// Supports many normal operators
// OBJECTS IN PROGRAMMING COMES WITH THEIR IN-BUILT METHOD CALLED "FUNCTIONS"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    string str1 = "Coding C++ ";
    cout << str1 << endl;    // Coding C++ as output

    string str2 = "Learning DSA";
    cout << str2 << endl;

    // PRINTING EACH CHARACTER OF THE STRINGS
    // FOR EACH LOOP
    for ( char ch : str1) {
        cout << str1 << " ";
    }

    cout << endl; 

    // PRINTING EACH CHARACTER OF THE GIVEN INPUT STRING
    for (int i = 0; i < str2.length(); i++) {
        cout << str2[i] << " ";
    }

    cout << endl;

    // CONCATENATION
    string str3 = str1 + str2;
    cout << str3 << endl;   // Coding C++ Learning DSA

    // VALUE COMPARISION
    cout << (str1 == str2) << endl;     //0 since str1 is not equal to str2 sentences

    // LEXICOGRAPHICAL STRING COMPARISION
    cout << (str1 < str2) << endl;      // 1, as C (Coding) comes before L (Learning)
    
    // Length of the strings str.length()
    cout << str1.length() << endl;      // 11
    cout << str2.length() << endl;      // 12

    // INPUT IN STRING
    string strInpt;
    // cin >> strInpt;
    getline(cin, strInpt);

    cout << "Output string is: " << strInpt << endl;

    return 0;
}



// (DSA 344) REVERSE A STRING 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Reverse String DSA Challenge";

    reverse(str.begin(), str.end());      // Iterators
    cout << str << endl;
    return 0;
}