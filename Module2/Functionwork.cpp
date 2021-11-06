#include<iostream>
using namespace std;

void fun2() 
{
    cout<<"Inside fun2()\n";  //Execute 3
}
void fun1()                       
{
    cout<<"Before fun2()\n";   //Execute 2
    fun2();  //fun2() called 
    cout<<"After fun2()\n";    //Execute 4
}

int main(){
    cout<<"Before fun1()\n";   //Execute 1 
    fun1();               //fun1() Called
    cout<<"After fun1()\n";   //Execute 5
    return 0;
}

/* Above whole process is called function call stack so it maintain stack ( Last function goes in stack execute first, Last in first out structure LIFO )