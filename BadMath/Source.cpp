#include <iostream>
#include <iomanip>
using namespace std;
float average(int, int, int);

int main()
{
	int n1, n2, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n2;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}

float average(int s1, int s2, int s3)
{
	return (s1 + s2 + s3) / 3.0f;
}