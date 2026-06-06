/*Create a program to find the largest element of an array using pointers.
int arr[] = {35, 13, 22, 50, 46};
- Assign the first element of the array to a largest variable using pointer int largest = *arr
- Run a for loop to access each elemnt of the array
- Compare largest with each array element using pointer largest < *(arr + i)
- If the largest variable is smaller that a element, assing the array value to largest = *(arr+i)

*/


#include <stdio.h>



int main (void){

	int arr[5] = {35, 13, 50, 46, 20};
	int largest = *arr;

	printf("%d\n", largest);

	for(int i=0; i<5; ++i){
//	printf(" Element index:%d of arr = %d\n", i, arr[i]);
	printf(" Element index:%d of arr = %d\n", i, *(arr+i));
	if(largest < *(arr + i)){
	largest = *(arr + i);
	}

	}
	printf(" This is highest value of arr elements:%d\n", largest);

	return 0;
}
