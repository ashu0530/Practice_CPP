/* Even Odd */

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if (a%2==0){
        cout<<"Opponent win\n";
    }
    else {
        cout<<"You win\n";
    }
    return 0;
}