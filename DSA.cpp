   // ==========================================
   //       DATA STRUCTURES & ALGORITHMS
   // ==========================================

// ARRAYS : Linear, same data type throughout, contiguous in memory
// Marks example
#include <iostream>
using namespace std;

int main() {

   // Array size can be greater than data element number size, if array size is predefined by us, before assigning the data value size
   int marks[ 100 ] = {99, 55, 100, 36, 55};    // Initialiazation of Array Element

   int size = 5;     // If we define array size

   int sz = sizeof(marks);    // we can find the given array size

   // int data type is 4byte in size, so 5 memory address is (4 * 5) = 20 byte 
   cout << sizeof(marks) << endl;      // ((4*100) = 100) bytes output 

   // (total array memory size) / (int size) = (Total Array blocks size), since each Index has int type size 
   cout << sizeof(marks) / sizeof(int) << endl;    //Generally array size is given

   // Changing data values by accessing individual data index
   marks[1] = 101;

   // Access array data values 
   // cout << marks[0] << endl;
   // cout << marks[1] << endl;

   // LOOPS IN ARRAY: 0 to (size-1)
   // OUTPUT LOOPING
   for (int i = 0; i < size; i++) {
      cout << marks[i] << endl;
   }

   // Index Range of Arrays = 0 to (size-1)
   cout << marks[5] << endl;     // WARNING! INDEX PAST THE END OF THE ARRAY; But, here we mentioned array size 100, by default remaining unused memory address get assigned 0, so here it will print 0
   cout << marks[-1] << endl;     // WARNING ! INDEX BEFORE THE BEGINNING INDEX OF ARRAY, but here it will print the last used garbage value of memory hardware

   // Array size can be equal to the data element number size, by default, if we do not predefined array size
   double price[3] = {99.99, 105.67, 30.00};     // Array size will be 3 here by default 

   return 0;
}


// INPUT LOOPING: Taking Input for array using array loops
#include <iostream>
using namespace std;

int main() {
   int size = 5;
   int marks[size];

   for (int i = 0; i < size; i++) {
      cout << "Enter marks: ";
      cin >> marks[i];
   }

   for (int i = 0; i < size; i++) {
      cout << "Your marks arrays is: " << marks[i] << endl;
   }
   return 0;

}


// LARGEST & SMALLEST NUMBER IN ARRAYS
#include <iostream>
#include <climits>
using namespace std;


int main() {
   int smallest = INT_MAX;
   int largest = INT_MIN;

   int smallestIndex = -1;
   int largestIndex = -1;

   int size;
   cout << "Enter array size: ";
   cin >> size;

   // Create the array size without the initializer = {}
   int marks[size];

   // Insertion Loop
   cout << "\nEnter " << size << " grades:" << endl;

   for (int i = 0; i < size; i++) {
      cout << "Grade " << (i+1) << ": " ;
      cin >> marks[i];
   }

   cout << "\n--- UPLOADING TO DATABASE --- \n";
   
   for (int i = 0; i < size; i++) {

      if (marks[i] < smallest) {
         smallest = marks[i];
         smallestIndex = i;
      }
      // smallest = min(marks[i], smallest);
 
      if (marks[i] > largest) {
         largest = marks[i];
         largestIndex = i;
      }
      // largest = max(marks[i], largest);
   }

   // PRINTING THE LOOP
   cout << "Here are the stored grades: " << endl;
   for (int i = 0; i < size; i++) {
      cout << marks[i] << " ";
   }

   cout << endl;

   cout << "Smallest number from your array is: " << smallest << " (Found at Index: " << smallestIndex << ")" << endl;
   cout << "Largest number from your array is: " << largest << " (Found at Index: " << largestIndex << ")" << endl;

   return 0;
}


// PASS BY REFERENCE (ARRAYS)
#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
   cout << "in function\n";

   for(int i = 0; i < size; i++) {
      arr[i] = 2* arr[i];
   }

}

int main() {
   int arr[] = {1, 2, 3};

   changeArr(arr, 3);

   cout << "in main\n";
   for(int i = 0; i < 3; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}



// LINEAR SEARCH (Time Complexity = O(n))
#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
   for (int i = 0; i < sz; i++) {
      if (arr[i] == target) { // FOUND
         return i;
      }
   }
   return -1;
}

int main() {
   int arr[] = {4, 2, 7, 8, 1, 2, 5};
   int sz = 7;
   int target = 2;   // Prints the first index for duplicate values

   cout << linearSearch(arr, sz, target) << endl;
   return 0;
}



// 2 - POINTER APPROACH  ( Time Complexity = O(n) )
#include <iostream>
using namespace std;

void reverseArr(int arr[], int sz) {
   int start = 0;
   int end = sz - 1;

   while (start < end) {
      swap (arr[start], arr[end]);
      start ++;
      end--;
   }
}

int main() {
   int arr[] = {4, 2, 7, 8, 1, 2, 5};
   int sz = 7;
   reverseArr(arr, sz);
   for (int i = 0; i < sz; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
   return 0;

}


// SUM & PRODUCT OF ALL THE ELEMENTS WITHIN AN ARRAY
#include <iostream>
using namespace std;

int sumArra(int array[], int size) {
   int sum = 0;

   for (int i = 0; i < size; i++) {
      sum += array[i];
   }
   return sum;
}

int multiArra(int array[], int size) {
   int multi = 1;
   for (int i = 0; i < size; i++) {
      multi *= array[i];
   }
   return multi;
}

int main() {

   int size;
   cout << "Enter Array size: ";
   cin >> size;

   int array[size];

   cout << "\n Enter " << size << " Array: " << endl;

   for (int i = 0; i < size; i++) {
      cout << "Array: " << (i) << ": ";
      cin >> array[i];
   }

   cout << "Here is Array: " << endl;
   for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
   }

   cout << endl;

   cout << "Sum of elements of form array is: " << sumArra(array, size) << endl;
   cout << "Product of elements of form array is: " << multiArra(array, size) << endl;

}



// SWAP MINIMUM & MAXIMUM IN AN ARRAY
#include <iostream>
#include <climits>
using namespace std;

int getMinIndex(int array[], int size) {
   int smallest = INT_MAX;
   int minIndex = -1;      // Auxillary state to track the seat !

   for (int i = 0; i < size; i++) {
      if(array[i] < smallest) {
         smallest = array[i];
         minIndex = i;
      }
   }
   return minIndex; 
}

int getMaxIndex(int array[], int size) {
   int largest = INT_MIN;
   int maxIndex = -1;

   for (int i = 0; i < size; i++) {
      if(array[i] > largest) {
         largest = array[i];
         maxIndex = i;
      }
   }
   return maxIndex;
}

int main() {

   int size;
   cout << "Enter an array size: ";
   cin >> size;

   int array[size];

   // INSERTION LOOP
   cout << "Enter: " << size << " elements: " << endl;

   for (int i = 0; i < size ; i++) {
      cin >> array[i]; 
   }

      cout << "Here is your Array: " << endl;
   for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
   }

   // Get the target indices
   int minLoc = getMinIndex(array, size);
   int maxLoc = getMaxIndex(array, size);

   // SWAP
   swap(array[minLoc], array[maxLoc]);

   // New Array
   cout << "\nArray after swapping minimum and maximum: " << endl;
   for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
   }

   cout << endl;

   return 0;
}



// METHOD 1: PRINT ALL THE UNIQUES VALUES IN AN ARRAY (NESTED LOOP LOGIC) 
#include <iostream>
using namespace std;

// TEMPLATE DECLARATION:
// Printing Resultant Array 
template <typename T>   // T as a placeholder for any data type

void printArray(T array[], int size) {
   for (int i = 0; i < size; i++) {
      cout << array[i] << " ";
   }
   cout << endl;
}




// HELPER FUNCTION: UNIQUE ELEMENT EXTRACTOR
template <typename T>
void printUnique(T array[], int size) {

   // Outer Loop
   for (int i = 0; i < size; i++) {
      int count = 0;

      // Inner Loop
      for (int j = 0; j < size; j++) {

         if (array[i] == array[j]) {
            count ++ ;
         }
      }
      
      if (count == 1) {
         cout << array[i] << " ";
      }
   }
   cout << endl;
}



// DRIVER FUNCTION (main)
int main() {

   int intSize;
   cout << "--- INTEGER DATABASE ---" << endl;
   cout << "Enter Array size: ";
   cin >> intSize;

   int intArray[intSize];
   
   cout << "Enter: " << intSize << " integers:" << endl;

   for (int i = 0; i < intSize; i++) {
      cin >> intArray[i];
   }

   cout << "\nResultant Integer Array: " << endl;
   printArray(intArray, intSize);

   cout << "Unique Integers: ";
   printUnique(intArray, intSize);

   // ==========================================
   // SECTION 2: CHARACTER ARRAY (Dynamic Input)
   // ==========================================

   int charSize;
   cout << "\n --- CHARACTER DATABASE ---" << endl;
   cout << "Enter the size of your Character Array: ";
   cin >> charSize;

   char charArray[charSize];

   cout << "Enter: " << charSize << " characters (letters/symbols): " << endl;
   for (int i = 0; i < charSize; i++) {
      cin >> charArray[i];
   }

   cout << "\nResultant Character Array: ";
   printArray(charArray, charSize);

   cout << "Unique Characters: ";
   printUnique(charArray, charSize);

   return 0;
}



// METHOD 2: UNIQUE ELEMENTS (BITWISE OPERATOR - XOR)
#include <iostream>
using namespace std;

// HELPER FUNCTION: O(n) Time Complexity, O(1) Space Complexity
int findSingleUnique(int array[], int size) {
   int uniqueNumber = 0;

   for (int i = 0; i < size; i++) {
      uniqueNumber ^= array[i];
   }

   return uniqueNumber;
}



// DRIVER FUNCTION
int main() {
   int size; 
   cout << "Enter an odd Array size (eg., 3, 5, 7, 9, 11, ..) : ";
   cin >> size;
   
   cout << "Enter : " << size << " elements (pairs, with one unique): " << endl; 
   for (int i = 0; i < size; i++) {
      cin >> array[i];
   }

   // Pass the packages to the Helper Function
   int result = findSingleUnique(array, size);

   cout << "The Single unique element is: " << result << endl;

   return 0;
}



// METHOD 1: INTERSECTION ARRAY (ELEMENTS) OF TWO ARRAYS (NESTED LOOPS)
#include <iostream>
using namespace std;

// // HELPER FUNCTION: COMMON ELEMENTS EXTRACTOR
template <typename T>
void printIntersection(T arr1[], T arr2[], int size) {

   // Outer Loop
   for (int i = 0; i < size; i++) {

      // Inner Loop
      for (int j = 0; j < size; j++) {

         if ((arr1[i]) == (arr2[j])) {
            cout << arr1[i] << " ";

            break;
         }
      }
   }
   cout << endl;
}

// DRIVER FUNCTION (main)
int main() {

   int size;
   cout << "Enter array size: ";
   cin >> size;

   int arrayOne[size];
   int arrayTwo[size];

   cout << "Enter: " << size << "elements for Array 1: " << endl;

   for (int i = 0; i < size; i++) {
      cin >> arrayOne[i];
   }

   cout << "Enter: " << size << " elements for Array 2: " << endl;
   for (int i = 0; i < size; i++) {
      cin >> arrayTwo[i];
   } 

   cout << "\nCommon elements array from both array is: " ;

   printIntersection(arrayOne, arrayTwo, size);
   return 0;
}




// METHOD 2: INTERSECTION FUNCTION
#include <iostream>
using namespace std;

int arrayOne(int array[], int size) {

}
int main() {

   return 0;
}




// VECTOR
#include <iostream>
#include <vector>    //Vector's Header File

// #include <bits/stdc++.h>

using namespace std;

int main() {

   // Method 1: Define Vector
   // vector<int> vec;     // size 0
   // cout <<vec[0];       // Segmentation Fault: Trying to access the unaccessible or absent memory address / space

   // Method 2: Define Vector
   vector<int> vec = {1, 2, 3};    //3
   cout << vec[0] << endl;    // print "1"
   vec.push_back(6);

   cout << vec.front() << endl;  // print 1

   vec.erase(vec.begin()) ;

   cout << vec.front() << endl;  // print 2
   cout << vec.back() << endl;   // print 6

   vec.emplace_back(9);

   vec.erase(vec.begin() + 2);   // Erases at 2nd Index

   cout <<  vec.back() << endl;
   for (int val : vec) {
      cout << val << " , ";      
   }

   cout << endl; 

   vector<int>::iterator i;
   for(i= vec.begin(); i != vec.end(); i++) {
      cout << *(i) << " , ";
   }

   cout << "Using at() method, value at index 1 is " << vec.at(1) << endl;
   cout << "Using [] index method, value at index 1 is " << vec[1] << endl;

   // // Method 3: Define Vector 
   // vector <int> vec (5, 1);
   // cout << vec[0] << endl;    // print "1"
   // cout << vec[1] << endl;    // print "1"
   // cout << vec[2] << endl;    // print "1"
   // cout << vec[3] << endl;    // print "1"
   // cout << vec[4] << endl;    // print "1"

   return 0;
}



// LINEAR SEARCH IN VECTOR
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &nums, int target) {

   bool isFound = false;

   int n;
   int ans = n; 
   
   for (int val : nums) {
      if ( val == target) {
         isFound = true;
         break;
      }
   }

   if (isFound == true) {
      cout << "SUCCESS: The target " << target << " is present in the vector!" << endl;
   }
   else {
      cout << "FAILED: The target " << target << "is NOT present in the vector!" << endl;
   }
}


int main() {

   int size:
   cout << "Enter the size of your vector: ";
   cin >> size;

   vector<int> myVector;

   cout << "Enter " << size << " elements : " << endl;

   for (int i = 0; i < size; i++) {
      int tempInput;
      cin >> tempInput;
      myVector.push_back(tempInput);
   }

   // GET THE TARGET NUMBER TO SEARCH FOR
   int targetNumber;
   cout << "\nEnter the number you want to search for: ";
   cin >> targetNumber;

   linearSearch(myVector, targetNumber);

   return 0;
}




// REVERSE FUNCTION
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& nums) {
   vector<int> reVector;

   for (int i = nums.size() - 1; i >= 0; i--) {     // Reverse Iteration from size of array from last element (index = size) to first element (index 0)
      reVector.push_back(nums[i]);
   }
   cout << "Reversed Vector: ";
   for (int val : reVector) {
      cout << val << " ";
   }
   cout << endl;
   }

int main() {
   int size;
   cout << "Enter vector size: ";
   cin >> size;

   vector<int> inputVector;

   cout << "Enter " << size << " elements: " << endl;

   for (int i = 0; i < size; i++) {
      int tempoInput;
      cin >> tempoInput;
      inputVector.push_back(tempoInput);
   }

   reverseArray(inputVector);

   return 0;
}




// METHOD 2: REVERSE VECTORS ( *IN-PLACE REVERSAL* 2-POINTER APPROACH SWAP FUNCTION)
#include <iostream>
#include <vector>
using namespace std;

void reverseArrayM2(vector<int>& nums) {

   int start = 0;
   int end = nums.size() - 1;

   while (start < end) {
      swap(nums[start], nums[end]);

      start++;
      end--;
   }

   cout << "Reversed Vector (In-Place): ";
   for (int val : nums){
      cout << val << " ";
   }
   cout << endl;
}

int main() {
   int size;
   cout << "Enter Vector size: ";
   cin >> size;

   vector<int> inputVector;

   cout << "Enter: " << size << " elements: " << endl;

   for (int i = 0; i < size; i++) {
      int tempInput;
      cin >> tempInput;
      inputVector.push_back(tempInput);
   }

   reverseArrayM2(inputVector);
   return 0;
}



// REMOVE DUPLICATES IN AN ARRAY  (2-POINTER APPROACH)
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
   int start = 0;

   for (int end = 1; end < nums.size(); end++) {

      if (nums[end] = nums[start]) {
         start ++;
         nums[start] = nums[end];
      }
   }
   return start + 1;
}

int main() {

   int size;
   cout << "Enter Size of the Sorted Vector: ";
   cin >> size;

   cout << "Enter: " << size << " elements: " << endl;

   vector<int> nums;

   for (int i = 0; i < size; i++) {
      int tempInput;
      cin >> tempInput; 
      nums.push_back(tempInput);
   }

   int singleCount = removeDuplicates(nums);

   cout << "\nThere are " << singleCount <<" Unique Elements" << endl;
   cout << "Modified Array First " << singleCount << " are unique elements" << endl;

   for (int i = 0; i < size; i++) {
      cout << nums[i] << " ";
   }

   cout << endl;
   return 0;
}



// SUM OF TWO NUMBERS IS EQUAL TO TARGET NUMBER (2 - POINTER APPROACH)
#include <iostream>
#include <vector>
using namespace std;

void vector<int> twoSum(vector<int>& nums, int target) {
   int start = 0;
   int end = 1;
   while ((start < end) && (end < nums.size())) {
      if (nums[start] + nums[end] == target) {
         cout << "First Integer would be: " << i << "Second integer would be: " << j << endl;
         end++;
      }
      else {
         continue;
      }
   }
}

int main() {
   int size ;
   cout << "Enter size of the array: ";
   cin >> size;

   vector<int> nums;

   cout << "Enter: " << size << " elements: " << endl;
   for (int i = 0; i < size; i++) {
      int tempInput;
      nums.push_back(tempInput);
   }

   twoSum(nums);

   return 0;
}


// VECTOR FUNCTIONS
#include <iostream>
#include <vector>
using namespace std;

int main() {

   // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
   // Size() function
      // cout << "size = " << vec.size() << endl;     // size = 5

   // vector<int> vec;
   //    cout << "size = " << vec.size() << endl;     // size = 0

   // Push_back() function : Element get push to the last of vector
      vector<int> vec;     // Initially 0 size memory allocation for vector creation
      cout << "size = " << vec.size() << endl;     // size = 0 

      vec.push_back(25);         // Dynamic Memory Allocation
      vec.push_back(20);

      cout << "after push back size = " << vec.size() << endl;     // after push back size = 4
      
      // SIZE & CAPACITY (capacity gets doubled by producing replica memory capacity of previous memory blocks size)
      cout << "Vector size is: " << vec.size() << endl; // print (5) size shows us number of occupied / assigned elements number
      cout << "Vector capacity is: " << vec.capacity() << endl; // print (8) Capacity shows us actual number of memory blocks created for vector creation

      // Before pop_back() function perfom:

      // Introductory printer line (Before & Outside the loop)
      cout << "push_back elements  = " ;

      // Print push_back() element: Elements get print in the same order they are being stored in push_back() function
      for (int val : vec) {   // for each loop
         cout << val << " , ";
      }

      // Drop to the new line, once printing elements line is finished
      cout << endl;

      // POP_BACK() function: Deletes the endmost element
      vec.pop_back();   // No need to mention the element, by default it will delete endmost element

      // Post pop_back() function:
       // Reprinting elements
      cout << "push_back elements (post push_back()) : ";

      // Print elements
      for (int val : vec) {   // for each loop
         cout << val << " , ";
      }

      cout << endl; 

      // Front() function: Returns the starting / front value of the vector
      cout << "Front value: " << vec.front() << endl;      // prints 25

      // Back() function: Returns the last / back value of the vector
      cout << "Last value: " << vec.back() << endl;

      // At() : Access value at particular index
      cout << "Value at this index is: " << vec.at(1) << endl;

   return 0;
}



// SUBARRAY METHOD 1(BRUTE FORCE)
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n = 5;
   int arr[5] = {1, 2, 3, 4, 5};

   for (int start = 0; start < n; start++) {
      for (int end = start; end < n; end++) {
         for (int i = start; i <= end; i++) {
            cout << arr[i];
         }
         cout << " ";
      }
      cout << endl;
   }

}



// MAXIMUM SUBARRAY SUM METHOD 1(BRUTE FORCE) (TIME COMPLEXITY O(n^3))
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
   int n;
   cout << "Enter array size: ";
   cin >> n;

   int arr[n];
   cout << "Enter: " << n << " elements: " << endl;
   for (int i =  0 ; i < n; i++) {
      int tempInput;
      arr.push_back(tempInput);
   }

   int maxSum = INT_MIN;

   for (int start = 0; start < n; start++) {

      for (int end = start; end < n  - 1; end ++) {

         int currentSum = 0;

         for (int i = start; i < end; i++) {

            cout << arr[i];
            currentSum += arr[i];
            cout << max(sum) << endl
         }
         
         maxSum = max(maxSum, currentSum);
      }
   }
   cout << "The Maximum Subarray Sum is: " << maxSum << endl;

   return 0;
}




// MAXIMUM SUBARRAY SUM METHOD 2(BRUTE FORCE) (TIME COMPLEXITY O(n^2))
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n = 5;
   int arr[5] = {1, 2, 3, 4, 5};

   int maxSum = INT_MIN;

   for (int start = 0; start < n; start++) {
      int currSum = 0;
      for (int end = start; end < n; end++) {
         currSum += arr[end];
         maxSum = max(currSum, maxSum);
      }

   }
   cout << "MAX sub array value = " << maxSum << endl;
   return 0;
}




// MAXIMUM SUBARRAY (KADANE'S ALGORITHM) (TIME COMPLEXITY O(n))
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n = 5;
   int num = {}


   for (int i = 0; i < n; i++) {
      currentSum += arr[i] ;
      maxSum = max(cuurentSum, maxSum);

      if (currentSum < 0) {
         currentSum = 0;
      }
   }
   return 0;
}




// PAIR SUM (BRUTE FORCE) (TIME COMPLEXITY O(n^2))
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
   vector<int> ans;

   int n = nums.size();

   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if (nums[i] + nums[j] == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
         }
      }
   }
   return ans;
}

int main() {

   vector <int> nums = {2, 7, 11, 15};
   int target = 9;

   vector<int> ans = pairSum(nums, target);
   cout << ans[0] << " , " << ans[1] << endl;

   return 0;
}



// METHOD 2: PAIR SUM (2 POINTER APPROACH)
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSumM2(vector<int> nums, int target) {
   vector<int> ans;
   int n = nums.size();

   int i = 0;
   int j = n-1;

   while (i < j) {
      int pairSum = nums[i] + nums[j];

      if (pairSum > target) {
         j--;
      }

      else if (pairSum < target) {
         i++;
      }

      else {
         ans.push_back(i);
         ans.push_back(j);
         return ans;
      }
   }
   return ans;
}

int main() {
   vector<int> nums = {2, 7, 11, 15};
   int target = 26;


   vector<int> ans = pairSumM2(nums, target);
   cout << ans[0] << ", " << ans[1] << endl;

   return 0;
}




// MAXIMUM VALID PAIR SUM
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxValidPairSum(vector<int>& nums, int k) {

   int maxSum = INT_MIN;

   int maxLeft = INT_MIN;

   // OUTER LOOP for beginning element of either pair (i, j)
   for (int j = k; j < nums.size(); j++) {

      maxLeft = max(maxLeft, nums[j-k]);

      // INNER LOOP for pair element, since constraint given is (j-i)>= k
      // for (int j = i + k; j < nums.size(); j++) {

         int pairSum = maxLeft + nums[j];

         maxSum = max(maxSum, pairSum);

         // }
      }
      return maxSum;
   }

int main() {
   vector<int> array = {1, 3, 5, 2, 8};
   int k = 2;

   cout << "Maximum Valid Pair Sum for possible pairs is: " << maxValidPairSum(array, k) << endl;
}


// 3622. Check Divisibility by Digit Sum and Product
#include <iostream>
using namespace std;

bool checkDivisibility(int n) {
   int sum = 0;
   int product = 1;
   int originalNumber = n;
   int divisorTerm = 0;

   while (n > 0) {
      int singleDigit = n % 10;
      sum += singleDigit;
      product *= singleDigit;
      n = (n / 10);
   }
      divisorTerm = sum + product;
      if ((originalNumber % divisorTerm) == 0) {
         return true;
      }

      else {
         return false;
      }
}

int main() {

   int n = 99;

   cout << checkDivisibility(n);

}


// COUNT COMMAS IN RANGE
#include <iostream>
using namespace std;

int countCommas(int n) {
   long long totalCommas = 0;

   if (n >= 1000) {
      totalCommas += (n - 999);
   }

   if (n >= 1000000) {
      totalCommas += (n - 999999);
   }

   if (n >= 1000000000) {
      totalCommas += (n - 999999999);
   }
   // int rem = 0;
   // if ((n / 10) >= 1000) {
   //    n = n / 1000; 
   //    rem = n % 1000;
   // }
   // for (int i = 1000; i <= n; i++) {
   //    cout << n << ", ";
   //    cout << rem ;
   // }
   return totalCommas;
}

int main() {
   int n = 1002;
   cout << countCommas(n);
   return 0;
}



// MAJORITY OF AN ELEMENT (frequency must be greater than floor of (n/2) |_(n/2)_|)
// METHOD 1: 
#include <iostream>
using namespace std;

    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int el : nums) {
                if (el == val) {
                    freq ++;
                }
            }
            if (freq > n/2) {
                return val;
            }
        }
        return -1;
    }

int main() {
   majorityElement(n)
   return 0;
}



// MAJORITY OF AN ELEMENT (frequency must be greater than floor of (n/2) |_(n/2)_|)
// METHOD 2: 
#include <iostream>
using namespace std;

int main() {
return 0;
}


// ** POINTERS ** 
#include <iostream>
using namespace std;
int main() {

   // ADDRESS OF OPERATOR (&)
   int a = 10;
   cout << &a << endl;

   // POINTER USE
   int* ptr = &a;
   cout << ptr << endl;
   // POINTER'S ADDRESS
   cout << &ptr << endl;
   //PARENT POINTER
   int** parntptr = &ptr;
   // POINTER'S ADDRESS
   cout << &parntptr << endl;
   cout << parntptr << endl;

   // Dereferencing operator
   cout << *(&a) << endl;
   cout << *(ptr) << endl;
   cout << *(&parntptr) << endl;
   cout << *(parntptr) << endl;

   // NULL POINTER
   int** ptr3 = NULL;
   cout << ptr3 << endl;
   cout << *(ptr3) << endl;     // SEGEMENTATION FAULT

   return 0;
}



// PASS BY VALUE 
#include <iostream>
using namespace std;

void changeA(int a) {
   a = 20;
}
int main() {
   int a = 10;

   changeA(a);
   cout << "Inside main function: " << a << endl;  //10 instead of 20
   return 0;
}



// PASS BY REFERENCE **(POINTER'S APPROACH)**
#include <iostream>
using namespace std;

void changeA(int* ptr) {
   *ptr = 20;
}
int main() {
   int a = 10;

   // Passing address of a
   changeA(&a);
   cout << "Inside main function: " << a << endl;  //20 instead of 10
   return 0;
}





// PASS BY REFERENCE *(REFERENCE'S APPROACH)*
#include <iostream>
using namespace std;

void changeA(int &b) {   // & is symbol of alias here that is b is using here for a
   b = 20;
}
int main() {
   int a = 10;

   // Passing address of a
   changeA(a);
   cout << "Inside main function: " << a << endl;  //20 instead of 10

   return 0;
}




// ARRAY POINTERS  (CONSTANT POINTER)
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;   // pointer
    cout << *arr << endl;   // value of zeroth index (here 1)
    int a = 10;
    arr = &a;  // expression must be a modifiable lvalue , that is value in LHS in unmodifiable , since arr[] pointer is constant
    return 0;
}



// POINTER'S ARITHMETIC 
#include <iostream>
using namespace std;
int main() {
   int arr[] = {1, 2, 3, 4, 5};

   cout << *arr << endl;  //1
   cout << *(arr+1) << endl;  //2
   cout << *(arr+2) << endl;  //3

   int* pttr = arr;
   cout << *(pttr+1) << endl;  //2
   cout << *(pttr+2) << endl;  //3
   pttr++;
   cout << *(pttr) << endl;  //2

   int a = 10;
   int* ptr = &a;
   cout << ptr << endl;
   ptr++;  // +4
   cout << ptr << endl;

   cout << ptr << endl;
   ptr--;  // -4
   cout << ptr << endl;

   cout << ptr << endl;
   ptr+= 2;  // 2int => 8 bytes
   cout << ptr << endl;

   //POINTER'S ADDITION: This is not allowed in C++
   //POINTER'S SUBTRACTION: No of blocks of the data type
   int* ptr1;
   int* ptr2 = ptr1 + 2; 
   cout << ptr2 - ptr1 << endl; //2 (bytes)

   // POINTER'S COMPARISION
   cout << (ptr2 > ptr1) << endl;  //1 (True)

   return 0;
}




// BINARY SEARCH (DSA) (ITERATIVE APPROACH)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
   int st = 0;
   int end = arr.size() - 1;

   while (st <= end) {
      int mid = ((st + end) / 2);

      if (tar > arr[mid]) {
         st = mid + 1;
      }

      else if (tar < arr[mid]) {
         end = mid - 1;
      }

      else {
         return mid;
      }
   }

   return -1;
}

int main() {
   vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};     // ODD SIZE
   int tar1 = 12;

   cout << binarySearch(arr1, tar1) << endl;

   vector<int> arr2 = {-1, 0, 3, 5, 9, 12};        // EVEN SIZE    
   int tar2 = 0;

   cout << binarySearch(arr2, tar2) << endl;

   cout << "Hi, My name is Divya\nfrom Switzerland";
   return 0;
}



// BINARY SEARCH (DSA) (ITERATIVE APPROACH)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
   int st = 0;
   int end = arr.size() - 1;
   }

int main() {
   
   return 0;
}




// BUBBLE SORT
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n) {  // TC: O(n^2)
   for (int i = 0; i < n-1; i++) {
      bool isSwap = false;

      for (int j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            isSwap = true;
         }
      }

      if (!isSwap) {
         return;
      }

   }
}

void printArray(int arr[], int n) {
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main() {
   int n = 5;
   int arr[] = {4, 1, 5, 2, 3};
   bubbleSort(arr, n);
   printArray(arr, n);
   return 0;
}



// SELECTION SORT
#include <iostream>
#include <vector>
using namespace std;
void selectionSort(int arr[], int n) {
   for (int i = 0; i < n-1; i++) {
      int smallestIdx = i;  // Unsorted part starting index
      for (int j = i+1; j<n; j++) {
         if (arr[j] < arr[smallestIdx]) {
            smallestIdx = j;
         }
      }
      swap(arr[i], arr[smallestIdx]);
   }
}

void printArray(int arr[], int n) {
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main() {
   int n = 5;
   int arr[] = {4, 1, 5, 2, 3};
   selectionSort(arr, n);
   printArray(arr, n);
   
   return 0;
}



// INSERTION SORT
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
   for (int i = 1; i < n; i++) {
      int curr = arr[i];
      int prev = i-1;

      while(prev >= 0 && arr[prev] > curr) {
         arr[prev+1] = arr[prev];
         prev--;
      }

      arr[prev+1] = curr;
   }
}

void printArray(int arr[], int n) {
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " " << endl; 
   }
}
int main() {
   int n = 5;
   int arr[] = {7, 11, 9, 20, 12, 92};
   insertionSort(arr, n);
   printArray(arr, n);
   cout << "Hi, My name is Divya\nfrom Switzerland";
   return 0;
}