#include<iostream>
using namespace std;
double calcRetail(double, int);
int main()
{
	double wholesale, retail=0.0;
	int markup;
	cout << "Enter wholesale cost: ";
	cin >> wholesale;
	cout << "Enter markup percentage: ";
	cin >> markup;
	if (wholesale < 0 || markup < 0)
	{
		cout << "Error,use positive values" << endl;
		return 0;
	}
	retail = calcRetail(wholesale, markup);
	cout << "The retail price is " << retail << endl;
	system("pause");
	return 0;
}
double calcRetail(double a, int b)
{
	return (a + (a * (b / 100)));
}