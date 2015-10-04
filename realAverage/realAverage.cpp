// realAverage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void lowestGrade(float[], int); // function prototype.

const int arr_size = 6;
float min;
float grades[arr_size];


int main()
{

	for (int i = 0; i < 6; i++)
	{
		cout << "\n Enter test grade number " << (i+1) << " you made this semester: "; // to enter in test grades
		cin >> grades[i];
	}

	lowestGrade(grades, arr_size);

	float beforeAverage = 0;
	for (int b = 0; b < 6; b++)
	{


		beforeAverage += grades[b];  //adds all the grades so that we can take out the lowest.

		
	}


	float afterAverage = (beforeAverage - min) / 5;    // just some qwerky stuff I threw in to make it more friendly.

	cout << "\nThe lowest grade you made this semester is: " << min << endl;

	cout << "\nAnd your average after that grade was dropped is: " << afterAverage << endl;
	system("PAUSE");
    return 0;
}


void lowestGrade(float low[], int size)
{
	min = grades[0];
	for (int i = 1; i < 6; i++) 
	{
		if (min > grades[i])
		{
			min = grades[i];  //Sorts the lowest grade in the array
		}
	}
}

