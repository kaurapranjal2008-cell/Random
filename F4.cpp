#include <iostream>

using namespace std;

int SOD(int n) {
    int sum=0;
    while(n!=0) {
        int rem = n%10;
        n = n/10;
        sum+=rem;
    }
    return sum;
}

int main() {
    int x;
    cout<<"Enter number : ";
    cin>>x;

    int S = SOD(x);
    cout<<"Sum of digits : "<<S;
    return 0;
}