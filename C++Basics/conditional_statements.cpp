// CONDITONAL STATEMENTS IN C++: if, else if, else
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (n>=0){
        cout << "The number is positive or zero" <<endl;
    } else {
        cout << "The number is negative" << endl;
    }
    return 0;
}

// FINDING GRADES USING CONDITIONAL STATEMENTS IN C++:
#include <iostream>
using namespace std;
int main () {
    float n;
    cout << "Enter your marks: " << endl;
    cin >> n;
    if (n>90){
        cout << "Your grade is A+" <<endl;
    } else if (n<90 && n>=80){
        cout << "Your grade is A" << endl;
        } else if (n<80 && n>=70){
        cout << "Your grade is B+" << endl;
    } else {
        cout << "Your grade is B" << endl;
    }
    return 0;
}

// FIND UPPERCASE OR LOWERCASE CHARACTER USING CONDITIONAL STATEMENTS IN C++:
#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "Enter a character: " << endl;
    cin >> input;
    int value = input;
    if (value >= 65 && value <= 90 ) {
        cout << " Uppercase Character";
    } else if (value >= 97 && value <= 122) {
        cout << "Lowercase Character";
    } else {
        cout << "Not an Alphabet Character";
    }
    return 0;
}

// METHOD 2
#include <iostream>
using namespace std;
int main() {
    char input;
    cout << "Enter a character: " << endl;
    cin >> input;
    int value = input;
    if ( value >= 'A' && value <= 'Z'){
        cout << "Uppercase Character";
    } else if (value >= 'a' && value <= 'z') {
        cout << "Lowercase Character";
    } else {
        cout << "Not an Alphabet Character";
    }
    return 0;
}

// TERNARY (3) STATEMENT:- Condition ? stt1 : stt2;
// Ternary statement is a shorthand for if-else statement
#include <iostream>
using namespace std;
int main() {
    int n = 45;
    cout << (n >= 0 ? "positive" : "negative") << endl;
    return 0;
}