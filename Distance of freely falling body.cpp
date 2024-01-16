#include<iostream>
using namespace std;
float DistanceFallen(float);
float t = 1, d = 1;
int main()
{
	cout << "Enter time for freely falling body : ";
	cin >> t;
	d = DistanceFallen(t);
	cout << "The distance covered in this interval is :" << d << endl;
	for (t = 1; t >= 1 && t <= 10; t++)
	{
		d = DistanceFallen(t);
		cout << t << ". " << d << endl;
	}
	return 0;
}
float DistanceFallen(float t)
{
	d = (0.5) * 9.8 * t * t;
	return d;
}