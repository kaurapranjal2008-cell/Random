#include <iostream>

using namespace std;

int main() {
    int a[10],n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Original array :";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int j=0;j<n/2;j++) {
        int temp = a[j];
        a[j] = a[n-j-1];
        a[n-j-1] = temp;
    }
    cout<<"Reversed array :";
    for(int k=0;k<n;k++) {
        cout<<a[k]<<"\t";
    }
    return 0;

}