/*
#include<iostream>
using namespace std;

int main(){
    int x = 20, y = 10;
    cout <<(x+y)<<"\n";
    cout <<(x-y)<<"\n";
    cout <<(x*y)<<"\n";
    cout <<(x/y)<<"\n";
    cout <<(x%y)<<"\n";
    cout<<(10%-3)<<"\n";  //1
    cout<<(-10%3)<<"\n";  //-1


    return 0;
}
*/
/***********************************************************unary Operator**************************************************************/

#include<iostream>
using namespace std;

int main(){
    int x = 10;    //10  become x++ = 11 but not reflect in y variable and ++x become 12 so x = 12, y = 10, z = 12 
    int y = x++;
    int z = ++x;

    cout<<x<<"\n"<<y<<"\n"<<z;
    return 0;
}