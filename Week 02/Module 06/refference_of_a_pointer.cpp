#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    int y=200;
    p = &y;
    // *p =100;
    // cout <<"In fun: "<< *p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    // cout <<"Out fun: "<< *p << endl;
    cout<<"in main: "<< *p;
    return 0;
}