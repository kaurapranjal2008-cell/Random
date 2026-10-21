#include <iostream>

using namespace std;

int main() {
    //length of side
    int rows,i,j;
    cout<<"Enter number of rows : ";
    cin>>rows;
    //printing of hollow square
    cout<<"Hollow Square Star Pattern"<<endl;
    for(i=0;i<rows;i++) {
        if(i==0 || i==(rows-1)) {
            for(j=1;j<=rows;j++) {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            cout<<"*";
            for(j=2;j<=rows-1;j++) {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }
    return 0;
}