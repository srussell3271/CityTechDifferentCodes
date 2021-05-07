#include <iostream>
#include <iomanip>
using namespace std;

/* 
Implement the following integerfunctions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius
	temperature.
c) Use these functions to write a program that prints charts showing the
	Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and
	the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.
	Print the outputs in a neat tabular format that minimizes the number of lines
	of output while remaining readable.
*/


//Part 1
double fahrenheit (double celsius)
{
    return celsius * 9 / 5 + 32;
}
//Part 2
double celsius (double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
//Part 3
int main()
{
    cout << "Fahrenheit equivalents of all Celsius temperatures from 0 to 100: " << endl;
    for (int c = 1; c <= 100; c++)
    {
        cout <<setprecision(3)<< setw(8) << fahrenheit(c);
    }
    cout << endl;
    cout << "Celsius equivalents of all Fahrenheit temperatures from 32 to 212: " << endl;
    for (int f = 32; f <= 212; f++)
    {
        cout << setprecision(3) <<setw(8) << celsius(f);
    }
    cout << endl;
}
