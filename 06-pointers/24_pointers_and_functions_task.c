/*	Create a program to find the multiplication of two numbers using
	a funcyion and pointers.
	- Create a function that accepts three pointers.
	- Inside the function multiply values of two pointers
		and assign the result to the address of the third pointer.
	- Inside the main function, create three variables,
		two variables with values 13 and 9 and the third variable to store their product.
	- Call the function with addresses of the 3 variables as arguments.
	- Store the returned value inside a pointer and print the value pointed by the returned address.
*/
#include <stdio.h>

int* threePointerFunction (int* pointer1, int* pointer2, int* pointer3){
	*pointer3 = *pointer1 * *pointer2;
	return pointer3;

}


int main (void){

	int variable1=13;
	int variable2=9;
	int variable3;

	int* savedValue = threePointerFunction(&variable1, &variable2, &variable3);

	printf(" The result of %d '*' %d is = %d\n",variable1, variable2, *savedValue);

	return 0;
}
