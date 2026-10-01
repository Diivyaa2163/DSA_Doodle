// === DSA 204 COUNT PRIME ===
// SIEVE OF ERATOSTHENES
// OPTIMIZED VERSION
// CACHE - ALIGNED, ODD-ONLY TRAVERSAL
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // vector<char> : 1 byte per element, cache-aligned
        vector<char> isPrime(n, 1);

        // 2 is prime, so start count at 1
        int count = 1;

        // Only Iterate through ODD numbers, starting at 3
        for (int i = 3; i < n; i = i + 2) {
            if (isPrime[i] == 1) {
                count++;

                if ((long long)i * i < n) {
                    // Start at i*i, jump by (2*i) to skip even numbers
                    for (long long j = (long long)i * i; j < n; j = j + (2*i)) {
                        isPrime[j] = 0;
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    // Instantiate the LeetCode Solution Class
    Solution leetcodeSolver;

    int n;
    cout << "Enter the limit(n): ";
    cin >> n;

    int totalPrimes = leetcodeSolver.countPrimes(n);

    //Output the final count
    cout << "Total prime numbers strictly less than " << n << " : " << totalPrimes << endl;

    return 0;

}
