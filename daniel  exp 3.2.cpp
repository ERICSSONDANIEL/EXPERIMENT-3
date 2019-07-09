#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "TEMPERATURE" << endl;
	cout << endl << endl;
	
	cout << "Enter the Temperature of Provinces A, B, and C for a week." << endl;
	cout << endl;
	
	char i[3] = {'A', 'B', 'C'};
	int j, k[7];
	for (j = 0; j < 3; j++)
	{
		int n;
		for (n=0; n < 7; n++)
		{
			cout << "Province " << i[j] << ", Day " << n+1 << ": "; cin >> k[n];
		}
	}
	cout << endl << endl;
	
	cout << "PROCESSING..." << endl;
	cout << endl << endl;
	
	cout << "Displaying Values:" << endl;
	cout << endl;


		int m;
	for (m = 0; m < 3; m++)
	{
		int o;
		for (o = 0; o < 7; o++)
		{
			cout << "Province " << i[m] << ", Day " << o+1 << ": " << k[o] << endl;
		}
	}
	

	getch ();
	return 0;	
}
