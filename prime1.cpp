#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Check if n is a prime number
bool checkPrime(int n) {
    int cnt = 0; // Counter for divisors

    // Loop through possible divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // If i is a divisor
            cnt++; // Increment count
            if (n / i != i) { // Check for distinct divisor
                cnt++; // Increment count for the paired divisor
            }
        }
    }

    return (cnt == 2); // Return true if prime (exactly 2 divisors)
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
