#include<bits/stdc++.h>
using namespace std;

/* int main(){
    int x = 10;             
    cout<<x;                  //local variable
    return 0;   //10    
}
*/

/*

int x;
char s;
bool a;
float b;
int main()
{
    cout<<x<<"\n"<<s<<"\n"<<a<<"\n"<<b<<"\n";

    return 0;     //output 0    //global variable 
}
*/


/*
int main(){
    extern int x;
    cout<<x;
    return 0;     //access the global variable which is defined below by using extern keyword
}
int x = 0;    //global variable
*/


/*
int x = 20;
int main(){

    int x = 10;
    cout<<x;
    return 0;         //local variable accessed first scope inside function act first output is 10
}
*/

int x = 20;
int main()
{

    int x = 10;
    {
        int x = 30;
        cout<<x<<"\n";       //This is Scope of int x = 30;  so first run this
    }
//    cout<<x<<"\n"; //This is scope of main int x = 10;  then run this
  
return 0;    
}