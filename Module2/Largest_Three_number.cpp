/* a = 10 b = 20 c = 30    output = 30
   a = 25 b = 35 c = 20    output = 35 
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three number\n";
    cin>>a>>b>>c;

    if ( a>=b and a>=c){
        cout<<"The number Greater is "<<a<<endl;
    }
    else if (b>=a and b>=c){
        cout<<"The number Greater is "<<b<<endl;
    }
    else {
        cout<<"The number Greater is "<<c;
    }
    return 0;
}