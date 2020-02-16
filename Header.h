#pragma once 
#include <iostream>
using namespace std;

class InsertionSort
{
    // initializing the 
    
	int index, j, arrsize, key;
	int arr[30];
	
	

	void getarray();
	void disp();

public:
	void takearr() {
		getarray();
	}

	void display() {
		disp();
	}
	
};

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
			arr[j + 1] = arr[j];    //moves element forward
			j = j - 1;
		}

		arr[j + 1] = key;    //insert element in proper place
	}
}

void InsertionSort::disp()
{
		cout << "\nSorted array is: ";
			for (index = 0; index < arrsize; index++)
			{
				cout << arr[index] << " ";
			}

}
