#include "StringSort.h"
#include<string>
#include<iostream>
using namespace std;

void StringSort::outputBeforeSort()
{
	cout << "Before sort: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << namesList[i] << " "<< endl;
	}
	cout << endl;
	selectionSort();
}

void StringSort::selectionSort()
{
	int minIndex;
	string temp;
	for (int i = 0; i < 19; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < 20; j++)
		{
			if (namesList[j] < namesList[minIndex])
			{
				minIndex = j;
			}
		}
		temp = namesList[minIndex];
		namesList[minIndex] = namesList[i];
		namesList[i] = temp;
	}
	outputAfterSort();
}

void StringSort::outputAfterSort()
{
	cout << "After sort: " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << namesList[i] << " " << endl;
	}
	cout << endl;
}


