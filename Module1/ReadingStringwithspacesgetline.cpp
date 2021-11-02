#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: \n";
    getline (cin,name);
    cout<<"Welcome"<<" "<<name;
    return 0;
}

//We print Two string together with space via getline function