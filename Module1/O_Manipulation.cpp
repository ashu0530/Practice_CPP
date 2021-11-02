//Modify the default behaviour of printing the boolean, Integer, Floating
/*
#include<iostream>
using namespace std;

int main(){
    bool a = true;
    cout<<a<<"\n";   //1

    cout<<std::boolalpha;
    cout<<a<<"\n";    //change 1 to true

    cout<<std::noboolalpha;
    cout<<a;   //change true to 1

    return 0;
}

*/

/************************************************************Integer Value Manipulation*************************************************/

/*
#include<iostream>
using namespace std;

int main(){
    int a = 26, b = 20;
    cout<<a<<" "<<b<<"\n";

    cout<<std::hex;
    cout<<a<<" "<<b<<"\n";  //1a= 26  0X14     0tof 

    cout<<std::oct;
    cout<<a<<" "<<b<<"\n";    

    cout<<std::dec;
    cout<<a<<" "<<b<<"\n";


    return 0;
}
*/


/*************************************************************Integer Value*********************************************************************/
/*
#include<iostream>
using namespace std;

int main(){
    int a = 26;
    cout<<std::showbase;
    cout<<std::oct;
    cout<<a<<"\n";     //032 

   // cout<<std::noshowbase;
    //cout<<std::oct;
    //cout<<a<<"\n";  //32

    cout<<std::hex;
    cout<<a<<"\n";  //0X1A

    cout<<std::showpos;
    cout<<a<<"\n";

    cout<<std::noshowpos;
    cout<<a<<"\n";

    cout<<std::uppercase;
    cout<<a<<"\n";

    cout<<std::nouppercase;
    cout<<a<<"\n";

    return 0;
}

*/


/**********************************************************Formatting Manipulation of Output************************************************/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 12;
    cout<<std::setw(7);
    cout<<std::setfill('*');
    cout<<a<<"\n";   // ***12 for 5  *****12

    return 0;
}