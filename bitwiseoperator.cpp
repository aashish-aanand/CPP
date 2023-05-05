#include<iostream>
using namespace std;
int main(){
    int x=11, y=5, c;
    c=x&y;
    cout<<c<<endl;
    int z=7, d, e, f;
    d=x&z;
    cout<<d<<endl;
    e=x|z;
    cout<<e<<endl;
    f=x^z;
    cout<<f<<endl;
    char g=5, h;
    h=g<<1;
    cout<<(int)h<<endl;
    int i;
    i=g>>1;
    cout<<i<<endl;
    char j=5, k;
    k=~j;
    cout<<(int)k<<endl;
    return 0;
}