#include <iostream>
#include <iomanip>
using namespace std;

double average(int[], const int);
int minimum(int [], const int);
int maximum(int [], const int );
int main()
{
	const int size = 5;
	int arr[size];

	for (int i = 0; i < 5; i++)
	{
		cout << "Insert a grade: ";
		cin >> arr[i];
	}

	cout << "Your average is: " << average(arr, size) << endl;


	cout << "The minumum is: " << minimum(arr,size) << endl;


	cout << "The maximun is: " << maximum(arr, size) << endl;


	return 0;
}
double average(int arr[], const int size)
{
	double average;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	average = sum / size;

	return average;
}
int minimum(int arr[], const int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;

}
int maximum(int arr[] , const int size)
{
	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
