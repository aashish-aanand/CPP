#include<iostream>
using namespace std;
int main(){
    float bs, pa, pd, ns;
    cout<<"Enter Basic Salary"<<endl;
    cin>>bs;
    cout<<"Enter percentage of allowance"<<endl;
    cin>>pa;
    cout<<"Enter percentage of deduction"<<endl;
    cin>>pd;
    
    ns = bs + (bs*(pa/100)) - (bs*(pd/100));
    cout<<"Net Salary "<<ns<<endl;
    return 0;
    

}