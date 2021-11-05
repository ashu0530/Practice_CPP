/* 

if (condition) 
{
    //statement to execute when condition is true
}
else //optional
{
    //statement to execute when condition is not true

}

I/P: 5
O/P: Odd

I/P: 10
O/P: Even  

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    if (n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}