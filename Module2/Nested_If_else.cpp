/* 

Number sign and Even Odd Program 
I/P : 10
O/P : Positive Even

I/P : -12
O/P : Negative Even

I/P : 0
O/P : Zero

Positive Even ( 2, 4, 6)
Negative Even ( -2, -4 )

Positive Odd ( 1, 3)
Negative Odd ( -1, -3)

Zero ( 0 )

*/

/* 

if (condition) {
    //Code to be Execution when condition is True
    if (condition2){
        //Code to be Executed when both condition is True 
    }
    else {
        //Condition to be Executed when condition1 is true and condition2 is False 
    }
}
else
{
    //Code to be Executed when Conditional 1 is True
} 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter a number: "<<endl;
    cin>>n;

    if (n>0)
    { 
        cout<<"Positive";
        if (n % 2 == 0)
            cout<<"Even";
        else 
            cout<<"Odd";    
    }
    else if ( n < 0) 
    {
        cout<<"Negative";
        if ( n % 2 == 0)
            cout<<"Even";
        else 
            cout<<"Odd";    
    }
    else {
        cout<<"Zero";
    }  
    return 0;
}