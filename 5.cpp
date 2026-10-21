#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(n%2 != 0) {
        cout<<"Number is odd!";
    }

    else {
        cout<<"Number is even!";
    }

    return 0;
}