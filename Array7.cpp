#include <iostream>
using namespace std;

int main() {
    //first array operations
    int size1,i,j;
    cout<<"Enter size of first array : ";
    cin>>size1;
    int a[size1];
    cout<<"Enter elements of first array : ";
    for(i=0;i<size1;i++) {
        cin>>a[i];
    }
    cout<<"Before Sorting : ";
    for(i=0;i<size1;i++) {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    int temp;
    for(i=0;i<size1-1;i++) {
        for(j=0;j<size1-i-1;j++) {
            if(a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"After Sorting : ";
    for(i=0;i<size1;i++) {
        cout<<a[i]<<"\t";
    } cout<<endl;
    //second array operations
    int size2;
    cout<<"Enter size of second array : ";
    cin>>size2; cout<<"Enter elements of second array : ";
    int b[size2];
    for(i=0;i<size2;i++) {
        cin>>b[i];
    }
    cout<<"Before sorting : ";
    for(i=0;i<size2;i++) {
        cout<<b[i]<<"\t";
    } cout<<endl;
    int temp1;
    for(i=0;i<size2-1;i++) {
        for(j=0;j<size2-i-1;j++) {
            if(b[j]>b[j+1]) {
                temp1 = b[j];
                b[j] = b[j+1];
                b[j+1] = temp1;
            }
        }
    } cout<<endl; cout<<"After Sorting : ";
    for(i=0;i<size2;i++) {
        cout<<b[i]<<"\t";
    } cout<<endl;
    //printing of intersected array
    int n=0;
    int c[n];
    for(i=0;i<size1;i++) {
        for(j=0;j<size2;j++) {
            if(a[i]==b[j]) {
                c[n++] = a[i];
                break;
            }
        }
    }
    cout<<"Intersected array : ";
    for(i=0;i<n;i++) {
        cout<<c[i]<<"\t";
    }

    return 0;
}