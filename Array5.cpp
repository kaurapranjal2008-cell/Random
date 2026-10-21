#include <iostream>

using namespace std;

int main() {
    int a[5];
    cout<<"Enter elements of array : ";
    for(int i=0;i<5;i++) {
        cin>>a[i];
    }
    int max = 0,min = 0;
    for(int i=1;i<5;i++) {
        if(a[i]>a[max])
            max = i;
        if(a[i]<a[min])
            min = i;
    }
    int temp = a[max];
    a[max] = a[min];
    a[min] = temp;
    for(int j=0;j<5;j++) {
        cout<<a[j]<<"\t";
    }
    return 0;
}