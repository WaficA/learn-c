/*store related data under single link
	A struct is a collection of variables under a single name

struct xyz{
	double x;
	int y;
};
									*/

#include <stdio.h>

	struct maleEmployee {
	double salary;
	int age;
} malcom;

//Using an alias
typedef struct femaleEmployee  {
	double salary;
	int age;
} femaleEmployee;

//Sum of complex numbers
typedef struct complex{
	double real;
	double imagine;
} complex;

int main (void){

	malcom.age = 25;
	malcom.salary = 4300.35;
	printf(" Age of malcom is: %d\n", malcom.age);
	printf(" Salary of malcom is %.4lf\n", malcom.salary);

	struct maleEmployee moses = {.salary = 3200.20, .age = 30}; //Better way
	printf(" Age of moses is: %d\n", moses.age);
	printf(" Salary of moses is %.2lf\n", moses.salary);

//Used alias
	femaleEmployee nova = {.salary = 2400.60, .age = 27};
	printf(" Age of nova is: %d\n", nova.age);
	printf(" Salary of nova is %.3lf\n", nova.salary);

	complex calc1 = {.real = 21.87, .imagine = 20};
	complex calc2 = {.real = 24.76, .imagine = 30};

	complex sum;
	sum.real = calc1.real + calc2.real;
	sum.imagine = calc1.imagine + calc2.imagine;

	printf(" Results is %.2lf + %.2lfi\n", sum.real ,sum.imagine);


	return 0;
}
