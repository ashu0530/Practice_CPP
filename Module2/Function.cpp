/* A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times. */

/* 
#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();  // call the function
  return 0;
}

// Outputs "I just got executed!"
*/

/************************************************************************************************************************************/

/*  A function can be called multiple times:


#include<iostream>
using namespace std;
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed! 

*/

/*  A C++ function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)

void myFunction() { // declaration
  // the body of the function (definition)
}

*/

// Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:
/*
//Example
#include<iostream>
using namespace std;
int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

// Error
*/

// Function declaration
#include<iostream>
using namespace std;
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}