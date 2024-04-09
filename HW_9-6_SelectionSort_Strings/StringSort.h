#pragma once
#include<string>
#include<iostream>
using namespace std;


class StringSort
{
private:
	string namesList[20] = { "Collins, Bill",  "Smith, Bart",  "Michalski, Joe",
							"Griffin, Jim","Sanchez, Manny",  "Rubin, Sarah",
							"Taylor, Tyrone", "Johnson, Jill","Allison, Jeff", 
							"Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean", 
							"Moretti, Bella", "Wu, Eric", "Patel, Renee", 
							"Harrison, Rose","Smith, Cathy",   "Conroy, Pat",  
							"Kelly, Sean",    "Holland, Beth" };

public:
	void outputBeforeSort();
	void selectionSort();
	void outputAfterSort();
};