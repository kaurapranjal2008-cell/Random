#include <iostream>

using namespace std;

int main() {
    char star = '*';
    int rows = 5;
    //print rows
    for(int i=1;i<=rows;i++) {
        //print spaces
        for(int j=1;j<=rows-i;j++) {
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++) {
            cout<<star;
        }
        cout<<endl;
    }
    return 0;
}