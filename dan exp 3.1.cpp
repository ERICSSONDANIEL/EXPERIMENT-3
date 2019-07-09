#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	
	int x, t[15], small, large;
	cout << "Input Any Desired Number of Choice:"<<endl;
	
	for (x = 0; x < 15; x++)
	{
	cin >> t[x];
		
	}

	
	cout << "Computing..." << endl;
	cout << endl << endl;
	
	
	
	int a, b;
	large = t[0];
	for (a = 1; a < 15; a++)
	{
	b = t[a];
	
	if (b > large)
	{
	large = b;
	}
	}
	cout << "The largest integer is: " << large << endl;

	
	int c, d;
	small = t[0];
	for (c=1; c < 15; c++)
	{
	c = t[a];
	if (c < small)
	{
	small = c;
	}
	}
	cout << "The smallest integer is: " << small << endl;
	
	
	int sum=0, y;
	for (y=0; y < 15; y++)
	{
	sum += t[y];
	}
	cout << "total of integers: " << sum << endl;
	
	float ave;
	cout << setprecision(2) << fixed;
	ave=sum/15;
	cout << "averag of integers: " << ave << endl;
 	
	getch ();
	return 0;
}
