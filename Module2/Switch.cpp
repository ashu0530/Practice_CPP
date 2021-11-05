/* The control variable must evaluate to integral type
The expression used in case should be constant */

#include<iostream>
using namespace std;

int main(){
    int x = 0, y = 0;
    cout<<"Enter a choice\n";
    char move;
    cin>>move;


    switch(move)
    {
        case 'L': x--;  //if ( move == 'L')
                break;       //x--;
        case 'R': x++;  //else if (move == 'R')
                break;       //x++;
        case 'U': y++;  //else if (move == 'U')
                break;       //y++;
        case 'D': y--;  //else if (move == 'D')
                break;       //y--;         
    
        default: cout<<"Invalid code\n";
    }
    cout<<x<<" "<<y;
    return 0;

}