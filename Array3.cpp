#include <iostream>

using namespace std;

int main() {
    int a[10],n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }  

    for(int i=0;i<n;i++) {
        bool Unique = true;
        for(int j=0;j<n;j++) {
            if(i!=j && a[i]==a[j]) {
                Unique = false;
            }
        }
        if(Unique)
            cout<<a[i]<<" ";
    }
    return 0;
}