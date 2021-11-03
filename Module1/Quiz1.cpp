/* sum of N Natural number 

In this Question we are given number n, so we need to find sum of all the N Natural numbers 

example- n = 5

1+2+3+4+5  output = 15
*/

#include<iostream>
using namespace std;

int main(){
    //int n = 6;
    int n;
    cin>>n;
    int ans = n*(n+1)/2;
    cout<<ans;
    return 0;
}