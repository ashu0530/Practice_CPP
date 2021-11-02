/* = , += , -= , *= , /= , %= ,  &= , := , <<= ,  >>= , ^=   */

#include<iostream>
using namespace std;

int main(){
    int x = 10, y;
    y = x;
    cout<<y<<"\n";

    x +=10; //x=x+10
    cout<<x<<"\n";

    x -=10; //x=x-10
    cout<<x<<"\n";

    x *=2; // x=x*2 = 20
    cout<<x<<"\n";    

    x /=2; //        //20/2=10
    cout<<x<<"\n";

    x %=2;          //10%2=0
    cout<<x<<"\n";

    cout<<x<<"\n";  // 0

    



    return 0;
}