/*

#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    cout<<sizeof(arr);   //size of Integer = 4  and 5 elements = 4X5=20
    return 0;
}

*/

//To count no of elements in array
/*
#include<iostream>
using namespace std;

int main(){
    int arr []= {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);    //20/4 =5
    cout<<n;
    return 0;
}

*/

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,20};
    cout<<sizeof(arr)/sizeof(arr[0]);   
    return 0;
}