#include <iostream>

using namespace std;

int min(int a,int b) {
    if(a<b)
        cout<<"Minimum value : "<<a;
    else
        cout<<"Minimum value : "<<b;
}

int main() {
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    int m = min(a,b);
    return 0; 
}