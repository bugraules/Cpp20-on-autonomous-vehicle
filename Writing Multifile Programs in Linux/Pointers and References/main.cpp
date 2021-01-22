#include <iostream>
using std::cout;

int main() 
{

    int a {5};
    //A proper reference & operator usage on left side of equation
    int &b = a;

    /* The symbols & and * have a different meaning, 
    depending on which side of an equation they appear. 

    This is extremely important to remember. For the & symbol, 
    if it appears on the left side of an equation (e.g. when declaring a variable),
    it means that the variable is declared as a reference. If the & appears on 
    the right side of an equation, or before a previously defined variable, 
    it is used to return a memory address */

    int i = 5;
    // A proper pointer * operator usage on left side of equation
    // An overloaded & operator usage on right side of equation means address value
    int* pointer_to_i = &i;

}