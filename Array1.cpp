#include <iostream>

using namespace std;

int main() {
    int a[5] = {15,8,27,4,19};
    int max = a[0],max1,max2;

    for(int i=1,j=4;i<2,j>=3;i++,j--) {
        if(a[i]>max)
            max1 = a[i];
        if(a[j]>max)
            max2 = a[j];
    }
    if(max1>max2)
        max = max1;
    else
        max = max2;
    cout<<"The maximum element in the array is:"<<max;
    return 0;
}