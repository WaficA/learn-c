#include <stdio.h>


int squareNumber(int number){
	int square = number * number;
	return square;
}


/* A function that takes in a pointer variable as an argument */
	void findValue(int* num){
	*num = 39;
}

int findSquare(int* number){
	int square = *number * *number;
	*number = square;
	return square;
}

int* findSquarePoint(int* number){
        int square = *number * *number;
        *number = square;
        return number;
}

int* addNumber(int* num1, int* num2, int* sum){
	*sum = *num1 + *num2;
	return sum;
}

int main(void){

	int number = 25;
	int result = squareNumber(number);

	printf(" Squrae root of %d number is %d \n", number ,result);

	findValue(&number);
	printf(" Number :%d | Address:%p\n",number ,(void*)&number);

	int oldNumber = number;

	int result2 = findSquare(&number);
	printf(" Square root of %d is : %d\n",oldNumber ,result2);

	int oldNumber2 = number;

	int* result3 = findSquarePoint(&number);
	printf(" Square root of %d is : %d\n",oldNumber2 ,*result3);

	int number1 = 32;
	int number2 = 18;
	int sum;

	int* result4 = addNumber(&number1, &number2, &sum);
	printf(" Addition of %d'+'%d = %d\n",number1, number2, *result4);
	return 0;
}
