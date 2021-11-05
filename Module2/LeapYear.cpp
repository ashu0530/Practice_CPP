/* Leap year is a year in which there are 29 days in month of feb 

Division by 4 and not by 100
ex- 1952, 1956,1960

Division by 400 ex - 2000, 2400,2800

Input: 2100 = Not a Leap year
Input: 2096 = Leap Year 
*/
#include<iostream>
using namespace std;

int main(){
    int leapYear;
    cout<<"Enter a Year: \n";
    cin>>leapYear;

    if (leapYear%4==0 and leapYear%100 !=0){
        cout<<"Leap Year\n";
    }
    else if( leapYear%400 == 0){
        cout<<"Leap Year\n";
    }
    else {
        cout<<"Not a Leap Year";
    }
    return 0;
}