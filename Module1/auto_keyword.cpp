#include<bits/stdc++.h>  //Also you can include <typeinfo> header file if you don't use bits/stdc++.h.
using namespace std;
int main(){
    auto a = 10;   //here 10 is literals and it is normal integer
    auto b = 15.5;  //double
    cout<<a<<"\n"<<b<<"\n";
    cout<<typeid(a).name()<<"\n"<<typeid(b).name();   //Here typeid().name tell us what datatype of variable is like a is i means integer and d means double.

    return 0;
}

/*
auto keyword is used for variable declaration
float x=3.4; //double literal converted into float
auto y=3.4; //type of y is double. */