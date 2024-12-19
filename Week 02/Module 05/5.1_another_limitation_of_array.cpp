#include<bits/stdc++.h>
using namespace std;
int main(){
    //int a[5]={1,2,3,4,5};
    vector<int>a={1,2,3,4,5}; // Array Allocate memory sequentially
    cout<< (int)&a[2]<<" "<<(int)&a[3];
    return 0;
}