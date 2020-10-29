#include <iostream>

using std::cout;

int euclidGCD(int a, int b);

int main() {
    
    cout << euclidGCD(1035, 759);

}

int euclidGCD(int a, int b) {

    if(b==0) return a;

    return euclidGCD(b, a%b);

}

// Proof that d indeed is the GCD and not just a common factor.
// Lemma: If d divides both a and b, and d = ax + by for some integers x and y, then necessarily d = gcd(a, b).