#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "* SORTING *" << endl;
	cout << endl << endl;
char x[15];
	int y;
	cout << "Please Input Desired Array Size: "; cin >> y;
	cout << endl;
	cout << "Please Input any Desired Character: ";
	
	int z;
	for (z=0; z < y; z++)
	{
		cin >> x[z];
	}
	
	cout << endl << endl;
	cout << "Sorting ..." << endl;
	cout << endl << endl;
	
	int w, i, temp;
	for (w = 0; w < y; w++)
	{
		for (i = 0; i < y-w-1; i++)
		{
			if (x[i] < x[i+1])
			{
				temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			}
		
		}
	}
	
	int a;
	cout << "Output : ";
	for (a=0; a < z; a++)
	{
		cout << x[a];
	}
	
	cout << endl;
	
	cout << "The Array Size is " << y << "." << endl;
	
	
	
	
	getch();
	return 0;
}
