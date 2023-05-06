#include<iostream>
using namespace std;
enum day {mon=10, tue, wed=21, thu, fri, sat};
enum dept {cs, ece, it, civil};
int main(){
    day d;
    d=mon;
    d=tue;
    cout<<d<<endl;
    cout<<fri<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;

    //dept dep;
    cout<<cs<<endl;
    cout<<ece<<endl;
    //return 0;

}