#pragma once 
#include <iostream>
using namespace std;

class InsertionSort
{
    
	int index, j, arrsize, key;
	int arr[30];

	void getarray();
	void disp();

// wrapping up the functions	
public:
	void takearr() {
		getarray();
	}

	void display() {
		disp();
	}
	
};

// function body for getting the unsorted array
void InsertionSort :: getarray()
	{

	cout << "Enter the number of elements: "<<endl;
	cin >> arrsize;
	cout << "\nEnter the elements\n"<<endl;

	for (index = 0; index < arrsize; index++)
	{
		cin >> arr[index];
	}

	for (index = 1; index <= arrsize - 1; index++)
	{
		key = arr[index];
		j = index - 1;

		while ((key < arr[j]) && (j >= 0))
		{
			arr[j + 1] = arr[j];    //this will moves "j" forward in the array
			j = j - 1;
		}

		arr[j + 1] = key;    //it will insert key element in proper place
	}
}


//function body for displaying the sorted array

void InsertionSort::disp()
{
		cout << "\nSorted array is: ";
			for (index = 0; index < arrsize; index++)
			{
				cout << arr[index] << " ";
			}

}

// the main function is in the "source.cpp" file 
