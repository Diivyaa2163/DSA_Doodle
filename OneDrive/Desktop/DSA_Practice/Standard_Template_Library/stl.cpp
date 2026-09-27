// PAIR
#include<iostream>
#include<list>
#include<deque>
#include <vector>
using namespace std;

int main() {
   // pair<string, string> p = {"Divya", "Switzerland"};
   // pair<string, int> p = {"Divya", 1};

   pair<string, pair<string, string>> p = {"Divya", {"Geneva", "Switzerland"}};
   
   vector<pair<int, int>> vec = {{1, 2}, {2,3}, {3,4}};
   for (auto val: vec) {
      cout << val.first << " " << val.second << endl;
   }
   cout << p.first << endl;
   cout << p.second.first << endl;
   cout << p.second.second << endl;
   return 0;
}




// STACK
#include <iostream>
#include <stack>
using namespace std;

int main() {
   stack <int> s ;
   s.push(1);
   s.push(2);
   s.push(3);

   cout << "Original s top = " << s.top() << endl;  // 3

   // while(!s.empty()) {     // till stack is not empty
   //    cout << s.top() << " ";     // 3 2 1
   //    s.pop();
   // }

   cout << "s size: " << s.size() << endl;

   stack<int> s2;
   s2.swap(s);

   cout << "s size: " << s.size() << endl;
   cout << "s2 size: " << s2.size() << endl;

   cout << endl;
   return 0;
}



// QUEUE
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
   queue <int> q ;
   q.push(1);
   q.push(2);
   q.push(3);

   cout << "Original q front = " << q.front() << endl;  // 1
   cout << "Original q back = " << q.back() << endl;  // 3

   while(!q.empty()) {     // till stack is not empty
      cout << q.front() << " ";     // 1 2 3
      q.pop();
   }

   cout << "q size: " << q.size() << endl;

   stack<int> q2;
   q2.swap(q2);

   cout << "q size: " << q.size() << endl;
   cout << "q2 size: " << q2.size() << endl;

   cout << endl;
   return 0;
}



// CUSTOM COMPARATORS
// SORTING ALGORITHM
#include<iostream>
#include<list>
#include<deque>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
   if (p1.second < p2.second) {
      return true;
   }

   if (p1.second > p2.second) {
      return false;
   }

   if (p1.first < p2.first) {
      return true;
   }

   else {
      return false;
   }
}

int main() {
   vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

   sort(vec.begin(), vec.end(), comparator);

   for (auto p : vec) {
      cout << p.first << " " << p.second << endl;
   }

   return 0;
}



// REVERSE ALGORITHM
#include<iostream>
#include<list>
#include<deque>
#include <vector>
#include <algorithm>
using namespace std;
int main () {

   vector<int> vec = {1, 2, 3, 4, 5, 6};

   reverse(vec.begin(), vec.end());

   for (auto val : vec) {
      cout << val << " ";
   }

   cout << endl;
   
   // reverse for specific values
   reverse(vec.begin() + 1, vec.begin() + 3);

   for (auto val : vec) {
      cout << val << " ";
   }
   return 0;
}




PRIORITY QUEUE (stack type)
(MAXHEAP, MINHEAP: COMPLETE BINARY TREE)
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
   // priority_queue <int> q ;
   // q.push(5);
   // q.push(3);
   // q.push(10);
   // q.push(4);

   // cout << "Original q front = " << q.top() << endl;  // 10

   // while(!q.empty()) {     // till stack is not empty
   //    cout << q.top() << " ";     // 1 2 3
   // }

   // REVERSE ORDER PRORITY QUEUE
   priority_queue<int, vector<int>, greater <int>> q;
   // <greater int> is a "Functor": Function Object assign to do something (kind of comparator) 
   q.push(5);
   q.push(3);
   q.push(10);
   q.push(4);
   while (!q.empty()) {
      cout << q.top() << " "; 
      q.pop();   // 3 4 5 10
   }

   return 0;
}



// MAP (KEY-VALUE PAIRs)
// INTERNALLY SELF BALANCING TREE
// Time Complexity: O(logn) for insert(), erase(), count()
// LESS USED followed by unordered_map
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main () {
   map<string, int> m;
   m["Key"] = 1;
   m["TV"] = 100;
   m["LAPTOP"] = 11;
   m["MAC"] = 10;
   m["ROLLSROYCE"] = 11;
   m["FERRARI"] = 11;

   m.insert({"CAMERA", 2});   // manually object mentioning


   m.emplace("PORSCHE", 20);  // in-place object creation, no need to manually metion

   // SORTED ASCENDING LEXICOGRAPHICALLY
   for (auto val : m) {
      cout << "ASSESTS OF DIVYA SURESH KUKADE : " << endl;
      cout << val.first<< " " << val.second << endl;
   }

   // Returns number of instances of key
   cout << "count = " << m.count("LAPTOP") << endl;

   // Value of a key
   cout << "value = " << m["PORSCHE"] << endl;

   // find(): if found, returns the iterator of that key or value
   // if not found, returns map.end(), i.e., next iterator of the last value 
   if(m.find("CAMERA") != m.end()) {
      cout << "FOUND!\n";
   }

   else {
      cout << "NOT found!\n";
   }
   
   return 0;
}




// // MULTIMAP (KEY-VALUE PAIRs) :
// // LEAST USED followed by map, unordered_map 
// // Multiple Key, allows duplicate key
// // Cannot use [], instead use emplace(), insert({,})
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main () {
   multimap<string, int> m;

   m.emplace("MAC", 66);
   m.emplace("PRIVATE JET", 20);
   m.emplace("PRIVATE YACHT", 20);
   m.emplace("FERRARI", 60);
   m.emplace("ROLLSROYCE", 20);
   m.insert({"CAMERA", 2});
   m.emplace("PORSCHE", 20);  // MULTIPLE KEYS
   m.insert({"CAMERA", 2});   // DUPLICATE
   m.emplace("PORSCHE", 20);

   // PARTICULAR DUPLICATE VALUES DELETE THROUGH ITERATOR
   // Deletes "Iterator: actual memory location value", retains remaining duplicates
   m.erase(m.find("CAMERA"));

   cout << "ASSETS OF DIVYA SURESH KUKADE : " << endl;
   // SORTED ASCENDING LEXIGRAPHICALLY
   for (auto val : m) {
      cout << val.first<< " " << val.second << endl;
   }
   
   return 0;
}



// UNORDERED (KEY-VALUE PAIRs) :
// INTERNALLY SELF BALANCING TREE
// Time Complexity: O(1) for insert(), erase(), count() due to special mechanism
// For collision cases Time Complexity can increases max to O(n) for "COLLISION CASES"
// MOST USED 
// NO Multiple Key, do not allows duplicate key
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main () {
   unordered_map<string, int> m;

   m.emplace("MAC", 66);
   m.emplace("PRIVATE JET", 20);
   m.emplace("PRIVATE YACHT", 20);
   m.emplace("FERRARI", 60);
   m.emplace("ROLLSROYCE", 20);
   m.insert({"CAMERA", 2});
   m.emplace("PORSCHE", 20); 


   // SORTED ASCENDING LEXIGRAPHICALLY
   for (auto val : m) {
      cout << "ASSESTS OF DIVYA SURESH KUKADE : " << endl;
      cout << val.first<< " " << val.second << endl;
   }
   
   return 0;
}

LOOPS IN VECTOR: FOR EACH LOOP
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

   // for each loop
   for (char i : vec) {    // i is iterator, usually we call it 'val' (value)
      cout << i << " " ;
   }
}


SET
Unique values
Ordered
// INTERNALLY SELF BALANCING TREE
// Time Complexity: O(logn) for insert(), erase(), count()
#include <iostream>
#include <vector>
#include<set>
using namespace std;

int main() {
   set <int> s;

   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.insert(6);

   for (auto val : s) {
      cout << val << " ";
   }

   cout << "lower bound = " << *(s.lower_bound(3)) << endl;
   cout << "lower bound = " << *(s.lower_bound(2)) << endl;  // s.end()  0
   cout << "lower bound = " << *(s.upper_bound(2)) << endl;
   return 0;
}