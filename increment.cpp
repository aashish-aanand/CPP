#include<iostream>
using namespace std;
int main(){
    int i=5, j;
    //j=i++;
    //assignment is done first then increment is done in i
    //j=++i;
    //first increment is done in i and assigned in j
    j = 2 * ++i + 2 * i++;
    cout<<i<<" "<<j;

}