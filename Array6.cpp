#include <iostream>

using namespace std;

int main() {
    int size,i,j,k;
    cout<<"Enter size of array : ";
    cin>>size;
    int a[size];
    cout<<"Enter elements in array : ";
    for(i=0;i<size;i++) {
        cin>>a[i];
    }

    for(j=0;j<size;j++) {
        bool Unique = 1;
        for(k=0;k<size;k++) {
            if(j!=k && a[j]==a[k]) {
                Unique = 0;
                break;
            }
        }
        if(Unique)
            cout<<a[j]<<"\t";
    }
    return 0;
}