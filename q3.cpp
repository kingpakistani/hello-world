/*	***************
	Talha Shahid
	Bsef20m024
	Morning
	***************
*/


#include <iostream>

using namespace std;
int main()
{

	//identifying variables
	int  i, j, integer, temp = 0, intg2;

	//Prompting User For Input

	cout << "Enter an odd integer and I will give a diamond shape : ";
	cin >> integer;
	
	//Validating Input

	while (integer < 3 || integer % 2 == 0)
	{
		cout << "Wrong input...integer should be odd and  atleast 3..." << endl;
		cout << "Enter integer : ";
		cin >> integer;

	}
	temp = integer;
	intg2 = integer;
	//Using Loops for conditions

	for (i = 1; i <= ((temp / 2) + 1); i++)
	{
		for (j = 0; j < (integer / 2); j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		for (int k = 1; k < i; k++)
		{
			cout << "*";
		}
		for (int l = 0; l < (integer / 2); l++)
		{
			cout << " ";
		}
		integer -= 2;
		cout << endl;
	}
	for (int m = 1; m <= temp / 2; m++)
	{
		for (int n = 0; n < m; n++)
		{
			cout << " ";
		}
		for (int o = 0; o < (intg2 / 2); o++)
		{
			cout << "*";
		}
		for (int o = 1; o < (intg2 / 2); o++)
		{
			cout << "*";
		}
		for (int p = 0; p < m; p++)
		{
			cout << " ";
		}
		intg2 -= 2;
		cout << endl;
	}


	return 0;
}

