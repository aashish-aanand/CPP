#include<iostream>
using namespace std;
int main(){
    cout<<"What is your name ";
    string name;
    getline(cin,name);
    cout<<"Welcome Mr/Miss "<<name;
    return 0;
}