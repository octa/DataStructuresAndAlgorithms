#include <iostream>

using std::cout;

int recursion_fibonacci(int n);
void better_fibonacci();

int main_fibonacci() {

cout << recursion_fibonacci(20);
better_fibonacci();

}

int recursion_fibonacci(int n) { //Worst

    if(n==0) return 0;
    if(n==1) return 1;
    return recursion_fibonacci(n-1) + recursion_fibonacci(n-2);

}

void better_fibonacci() { //Better

    unsigned long int n = 20;
    long int arr[n+1];
    arr[0]=0, arr[1]=1;

    if(n==0) cout << 0;
    if(n==1) cout << 1;

    for(int i=2; i<=n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    std::cout << arr[n];

}