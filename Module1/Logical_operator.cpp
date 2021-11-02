/* && and || or ! not */

/*
#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 20;
    bool res = (x>0 && x<100);   //bool value
    cout<<res<<"\n";   //1

    res = ( x>0 || x>y);  //1
    cout<<res<<"\n";

    res=!res;
    cout<<res<<"\n"; //0
    return 0;
}

*/


/**************************************************************short-circuit in Logical Operator*************************************************/

#include<iostream>
using namespace std;

int main(){
    int x = 5;
    bool res = (x>10) && (x++);
    cout<<res<<"\n";
    cout<<x;
    return 0;
}