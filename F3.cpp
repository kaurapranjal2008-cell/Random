#include <iostream>

using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int f = fact(n);
    cout<<"Factorial is : "<<f;
    return 0;
}