/* 

++ , -- (suffix) Left to Right
!, ++, -- (prefix) Right to Left
*,/,%    L to R
+, -     L to R
< = >    L to R
<, >, <=, => L to R
==, !=   L to R
&&       L to R
||       L to R


+=, -=, *=, /=   R to L
%=, >>=, <<=, R to L

*/

#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 20;
    int z = x + x * y;
    cout<<z<<"\n";


    z = y/x*x;
    cout<<z<<"\n";

    z = y = x;
    cout<<y<<"\n";
    cout<<z<<"\n";
    
    return 0;
}