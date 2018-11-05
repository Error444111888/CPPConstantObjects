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

int n = 2;
int	const p = 8;
int	e = 1;
int	i = 1;

int pow ();
	{
		for (i = 1; i <= p; i++)
		{
			e = i * n;
			if (e == 0)
			{
				return 1;
			}
			else
			{
				if (e = > 1)
				{
					cout << e << endl;
				}
			}
		}
	}


/*Function for how to find Sin? 
Sin = Opposite / Hypetenuse*/

/*For the second function you will compute the sine of an angle. Your function should accept the opposite and hypotenuse lengths and return the sine value. The formula for sine is: 
sin = opposite / hypotenuse
where / is used to denote division
Ensure that you paste the code for the function as well as the code that calls the function and assigns the value to a variable.*/

	int opposite = 5;
	int hypotenuse = 2;

	
	int Triangle()
	{
		int sin = (opposite / hypotenuse);

			cout << sin << endl;
	}
