// CPP Constant Objects - by Ray


#include <iostream>
#include <string>


using namespace std;
using std::cout;
using std::endl;


/*First example
In the previous module, you created a for loop to calculate a base raised to an exponent. In this peer review, you are going to put that code into a function and create two more functions. Paste your code in the response section below that satisfies these requirements:

Create a function called pow that accepts two integers that represent the base and the exponent. The exponent should not permit negative values.
Use the code you created in the previous module for some of this functionality but add additional code
The additional code should make use of an if statement to check the exponent value. If it is 0, then immediately return 1 otherwise calculate the power and return the result.
Show sample code that will call the function and get the result. */



// First function
int pow(int base, int exponent)
{
	int result = 1;
	// Now the if statement
	if (exponent < 0)
		{
		return -1;
		}

	else if (exponent == 0)
		{
		return result;
		}	
	// Rest of the options
	else
		{
		for (int i = 1; i <= exponent; i++)
		{
			result *= base;
		}
		return result;
		}
	
}


/*Second Example
Expanding Your Knowledge
For the second part of this assignment, you will create a function to perform the average of values in an array. To complete this portion, your code should match the following requirements:

Create a function called avg that will accept an integer array. You may not have seen this in a demo but passing an array to a function is no different than passing any other data type. Search the Internet for an example if you can't figure out how to pass the array.
Create an array of integers, at least 5 in size, and pass it to the avg function.
Inside the function, use a loop to iterate over the array elements and calculate the average.
Return the average back to the code that called it.*/


// How to get the Sinus?

double sine(double opposite, double hypotenuse)
{
	return opposite / hypotenuse;
}

double average(int values[], int length)
{
	double total = 0.0;
	for (int i = 0; i < length; i++)
	{
		total += values[i];
		// cout << "values["<< i << "]: " << values[i] << endl;
		// cout << endl;
	}
	return total / length;
}

int main() {

	int base = 2;
	int exponent = 8;
	int result = pow(base, exponent);
	cout << base << "^" << exponent << " = " << result << endl;
	cout << endl;

	double opposite = 4.2;
	double hypotenuse = 2.1;
	double sineValue = sine(opposite, hypotenuse);
	cout << "Sine of a triangle with opposite " << opposite << " and hypotenuse " << hypotenuse << " is: " << sineValue << endl;
	cout << endl;

	int values[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(values) / sizeof(values[0]);
	// debugging code
	// cout <<"length: " << length << endl;
	// cout << "sizeof(values): " << sizeof(values) <<endl;
	// cout << "sizeof(values[0]) " << sizeof(values[0]) <<endl;
	// cout << endl;
	double avg = average(values, length);
	cout << "The average of the values array is: " << avg << endl;
	cout << endl;

	

	cin.get();
}