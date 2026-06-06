
// int numbers[5]={2,6,4,7,5};
// access fifth element using array index number[4];

#include <stdio.h>


int main (void){

	int randomNumbers[5] = {5,3,8,6,9};

	for (int i=0; i<5; ++i){
	printf("%d = %p\n", randomNumbers[i], (void*)&randomNumbers[i]);
	}
	printf("--------------------------------------------------------------\n");
	printf(" Array address : %p\n", (void*)randomNumbers);// not using & is acceptable
						// array names by default is converted to a pointer

/* EXAMPLE OF RUNNING THE PROGRAM OUTPUT
 │5 = 0x7ffca0bafed0
 │3 = 0x7ffca0bafed4
 │8 = 0x7ffca0bafed8   //the diffrence between two memory address is 4
 │6 = 0x7ffca0bafedc	// because the array is of integer type and size of int is 4 bytes
 │9 = 0x7ffca0bafee0
 │ Array address : 0x7ffca0bafed0  // First array element and the arrays itself has same address
					address of array always point to first element of the array
*/

		//(void*)(randomNumber + 1) ()()needed for cant do pointer arethmetics on void
	printf("      Print array address of second element : %p\n", (void*)(randomNumbers + 1));
	printf("           Print array address of element 5 : %p\n", (void*)(randomNumbers + 4));
	printf("--------------------------------------------------------------\n");
	for (int j=0; j<5; ++j){
	printf("%d = %p\n", randomNumbers[j], (void*)(randomNumbers+j));
	}
	printf("--------------------------------------------------------------\n");
	//Access array elemets using pointer
	for (int j=0; j<5; ++j){
	printf("%d = %p\n", *(randomNumbers + j), (void*)(randomNumbers+j));
	}

	printf("--------------------------------------------------------------\n");

	for (int j=0; j<5; ++j){
	printf("%d = %p\n", *(randomNumbers + j), (void*)(randomNumbers+j));
	}

	printf("--------------------------------------------------------------\n");

	//Change array element using pointers
	*randomNumbers = 55;
	*(randomNumbers + 1) = 30;
	*(randomNumbers + 4) = 70;
	for (int i=0; i<5; ++i){
        printf(" elemet[%d] : %d \n", i ,randomNumbers[i]);
        }
	printf("--------------------------------------------------------------\n");
	printf(" Fist element changed to : %d\n", *(randomNumbers));
	printf(" Fifth element changed to : %d\n", *(randomNumbers + 4));

	return 0;
}
