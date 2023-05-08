#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    int x1, x2;
    cout<<"Enter a, b, c ";
    cin>>a>>b>>c;
    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"Roots are "<<x1<<" "<<x2;
    return 0;
}