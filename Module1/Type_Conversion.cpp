//most of the premitive types are allowed to convert each other without any explict type casting
//some of the conversion cause loss of information.

#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    float x = 10.5;
    int y = x;  //10  loss of info
    bool z = y; // true = 1

    cout<<x<<"\t"<<y<<"\t"<<z<<"\t";
    return 0;
}
*/

/*****************************************************Implict Conversion***********************************************************/
//If we have an expression of multiple types,  below rules are followed :-

// bool---->char---->short int---->int---->unsigned int---->long---->long long---->float---->double---->long double
//example

/*
int main(){
    int x = 10;
    int y = 'A';

    cout<<(x+y)<<"\n";    //75 here ASCII value of A is 65
    float z = 5.5;
    cout<<(x+z); //
    return 0;
}
*/



/*****************************************************Explict Coversion************************************************************/
/*
int main(){
    int x = 15;
    int y = 2;
    double z = x/y;  //we expect 7.5 but it give us 7 because of operator precedence so division operator act first result give integer because it operands are integers only
    cout<<z<<endl;   
    return 0;
}
*/



//C-style conversion

/*
int main(){
    int x = 15;
    int y = 2;
    double z = double(x)/y;  //Explict Conversion
    cout<<z<<endl;
    return 0;
}
*/

//Static-cast Conversion C++ style Explict conversion
int main(){
    int x = 15;
    int y = 2;
    double z = static_cast<double>(x)/y;  //Explict Conversion
    cout<<z<<endl;
    return 0;
}

//It is better than c-style because it does validity check before doing conversion while in c-style you can convert any arbitrary into anything