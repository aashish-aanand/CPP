#include<iostream>
using namespace std;
int main(){
    char x = 127;
    int y;
    x++;
    y=INT_FAST32_MAX;
    cout<<(int)x<<endl<<y;
    return 0;
}