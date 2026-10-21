//WAF&P to calculate sum and product of numbers in an array.
#include <iostream>

using namespace std;

int Add(int arr[], int n) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    return sum;
}

int Prod(int arr[],int n) {
    int prod=1;
    for(int j=0;j<n;j++) {
        prod*=arr[j];
    }
    return prod;
}

int main() {
    int a[5];
    for(int i=0;i<5;i++) {
        cin>>a[i];
    }
    int add = Add(a,5);
    int prod = Prod(a,5); 
    cout<<"Sum : "<<add<<endl;
    cout<<"Product : "<<prod;
    return 0;
}