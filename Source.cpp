#include <iostream>
#include <cmath>
#include <fstream>
#include<vector>
#include <map>
using namespace std;



float population(int a, int b, int c, int d, float sol)
{
	float com;
	a = a - sol;
	a *= a;         // *=
	b = b - sol;
	b *= b;
	c = c - sol;
	c *= c;
	d = d - sol;
	d *= d;

	com =a+b+c+d;
	com /= 3;
	com = sqrt(com);

	return com;

}



int main()
{
	ifstream inFile;
	inFile.open("InMeanStd.dat");
	ofstream outFile;
	outFile;
	
	// this is how we got the mean 
	int a, b, c, d;
	float sol;
	cout << "enter 1st number:";
	cin >> a;
	cout << "enter 2nd number:";
	cin >> b;
	cout << "enter 3rd number:";
	cin >> c; 
	cout << "enter 4th/last number:";
	cin >> d;
	
	sol= ((a + b + c + d) / 4);

	cout << "this is your mean number...  " << sol << "...but it gets more fun from here, ";
	sol=population(a, b, c, d, sol);
	cout << "  this however is our Population standard deviation  " << sol;
	

	return 0;
}