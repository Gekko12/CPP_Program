/*
Type Inference refers to automatic deduction of the data type of an expression in a programming language. Before C++ 11,
 each data type needs to be explicitly declared at compile time, limiting the values of an expression at runtime but after the new
 version of C++, many keywords are included which allows a programmer to leave the type deduction to the compiler itself.
With type inference capabilities, we can spend less time having to write out things compiler already knows. As all the types are
 deduced in compiler phase only, the time for compilation increases slightly but it does not affect the run time of the program.

                                                         auto keyword

The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In
 case of functions, if their return type is auto then that will be evaluated by return type expression at runtime.

--> A good use of auto is to avoid long initializations when creating iterators for containers.
 */

// C++ program to demonstrate working of auto 
// and type inference 
#include <iostream> 
using namespace std; 

int main() 
{ 
	auto x = 4; 
	auto y = 3.37; 
	auto ptr = &x; 
	cout << typeid(x).name() << endl 
		<< typeid(y).name() << endl 
		<< typeid(ptr).name() << endl; 

	return 0; 
} 
  /* It will print
   O/P :-             i          //means Integer
                       d          //means Double
                      Pi          //means Pointer to Int
   */                   

