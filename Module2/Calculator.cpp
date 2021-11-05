/* Input 1 2 3  where as 1 = Addition 2 = subtraction 3 = Multiplication */

#include<iostream>
using namespace std;

int main(){
    int option, x, y;
    cout<<"Choose Arthematic Option 1 for add, 2 for subtract, 3 for multiplication\n";
    cin>>option>>x>>y;
    if ( option == 1){
        cout<<x+y;
    }
    else if ( option == 2){
        cout<<x-y;
    }
    else if ( option == 3){
        cout<<x*y;
    }
    else {
        cout<<"Invalid Input";
    }

    return 0;
}