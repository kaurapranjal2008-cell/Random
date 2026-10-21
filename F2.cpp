#include <iostream>

using namespace std;

int sum(int n) {
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int s = sum(n);
    cout<<"Sum is : "<<s;
    return 0;
}