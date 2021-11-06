#include<iostream>
using namespace std;

/*
void fun() {
    cout<<"fun() called\n";
}
int main(){
    cout<<"Before calling fun()\n";
    fun();
    cout<<"After calling fun()\n";
    return 0;
}
*/
int getMax(int x, int y)      //getMax is function name whereas int x and int y is the function parameter which return type integer
{
    if ( x>y) {
        return x;
    }
    else {
        return y; 
    }    
}

int main(){
    int a = 10, b = 20;
    cout<<getMax(a,b);
    return 0;
}