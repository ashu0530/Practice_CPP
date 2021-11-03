/* Find last digit of the number 

INPUT n = 123
output = 3

n= -352
output = 2 */

#include<iostream>
using namespace std;

int main(){
    int x, ans;
    cout<<"Enter a number\n";
    cin>>x;

    ans=abs(x)%10;
    cout<<ans<<endl;

    return 0;
}