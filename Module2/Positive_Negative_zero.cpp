/* 

I/P : 10
O/P : positive

I/P : -5
O/P : Negative

I/P : 0
O/P : Zero

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no: ",
    cin>>n;

    if(n>0){
        cout<<"Positive\n";
    }
    else if (n<0){
        cout<<"Negative\n";
    }
    else {
        cout<<"Zero";
    }
    return 0;
}