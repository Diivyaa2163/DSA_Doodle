// TYPE CASTING: Converting data from one type to another
// TWO TYPES OF TYPE CASTING: Implicit and Explicit
// 1. Implicit Type Casting: Done by the compiler automatically
#include <iostream>
using namespace std;
int main () {
    char grade = 'A'; // ASCII value of 'A' is 65
    int value = grade;
    cout << value << endl;
    return 0;
}

// 2. Explicit Type Casting: Done by the programmer using type casting operators
#include <iostream>
using namespace std;
int main () {
    double price = 100.99;
    int newPrice = (int)price;
    cout<<newPrice<<endl;
    return 0;
}