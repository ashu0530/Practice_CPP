#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;

int main(){
    double x = 1.23, y = 1122456.453;
    cout<<std::fixed;
    cout<<x<<"\n"<<y<<"\n";

    cout<<std::setprecision(2);
    cout<<x<<"\n";


    double a = 1.23, b = 1122456.453;
    cout<<std::scientific;
    cout<<x<<"\n"<<y<<"\n";

    return 0;
}

