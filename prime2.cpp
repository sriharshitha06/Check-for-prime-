#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Check if n is a prime number
bool checkPrime(int n) {
    int cnt = 0; // Counter for divisors

    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // If i is a divisor
            cnt++; // Increment count
        }
    }

    return (cnt == 2); // True if exactly 2 divisors (1 and n)
}

int main() {
    int n; // Input number
    cin >> n; // Read input

    bool isPrime = checkPrime(n); // Check if n is prime
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl; 
    }

    return 0; 
}
