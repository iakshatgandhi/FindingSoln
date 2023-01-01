// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {78, 44, 13, 6, 54, 3, 31};
	
	int n = sizeof(arr) / sizeof(arr[0]);

	// To print original array
	printArray(arr, n);
	
	// Function calling
	reverseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	// To print the Reversed array
	printArray(arr, n);
	
	return 0;
}
