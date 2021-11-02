#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int a = 20;   //Print 20
    int b = 0x1A;   
    int c = 016;
    int d = 0b11;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
    return 0;

}
*/


/* 0x - Hexadecimal  0 to 9 A to F means 0 to 9 and A to F which is 10 to 15 so 
   0 - octal  0 to 7
   0b - binary   0 and 1

   here 

   0x1A = A=10 1=16^1 which is 10*16^0 + 1*16^1 = 26 
   016 = 6*8^0 + 1*8^1 = 14
   0b11= 1*2^0 + 1*2^1 = 3  
*/

//************************************************Using suffix integer literals*****************************************************//
/*
int main(){
    int a = 124;
    unsigned int b = 124u; //suffix Unsigned here u unsigned it is case insensitive 
    long int c = 124L;  //Long
    long long int d = 124LL; //Long Long
    return 0;
}
//also we can use UL,ULL 
//used to avoid conversion that before it stored and treated as unsigned int

*/

//************************************************Floating Point Literals***********************************************************//

/*
int main() {
    float a = 10.5F;  //float
    double b = 10.515; //double
    float c = 2.1e15F;  //2.1X10^15
    double d = 200.1e-80;  //    200.1X10^-80 --->  2.001X10^-78
    double e = 0X1A.1p2;   // here 0X1A = 26 , .1 = 1/16 = 0.0625 which means 26.0625 and p2 means 2^2 so 26.0625X2^2 = 104.25
    double f = 1.1e2;  //110  1.1X10^2

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n";
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<typeid(e).name()<<endl;

    return 0;
}

*/


//************************************************Character and string Literals*****************************************************//
int main(){
    char c = 'g'; //single character can be written in single quote
    const char *s1 = "Ashutosh";  //string can be written in double quote
    string s2="Pandey";

    //cout<<c<<"\t"<<s1<<"\t"<<s2<<"\t";
    cout<<typeid(c).name()<<endl<<typeid(s1).name()<<typeid(s2).name();
    return 0;

}