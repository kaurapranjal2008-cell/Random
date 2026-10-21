#include <iostream>

using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);
    int ans = (fact_n)/(fact_r*fact_nmr);
    return ans;
}

int main() {
    int x,y;
    cout<<"Enter n and r : ";
    cin>>x>>y;
    if(x>y) {
        int c = nCr(x,y);
        cout<<"Answer : "<<c;
    }
    else {
        cout<<"n should be greater than r."<<endl;
        cout<<"Please try again.";
    }
    return 0;
}