#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double s(const double x);
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "---------------------\n";
	cout << "|" << setw(5) << "k" << setw(5) << "|" << setw(8) << "result" << setw(3) << " |\n";
	cout << "---------------------\n";

	double dg = (tk - tp) / n;
	double t = tp;
	

	while (t <= tk)
	{
		z = s(t * t + 1) + 2 * pow(s(1 - t), 2) + s(1);
		cout << "|" << setw(2) << t << setw(2) << "|" << setw(2) <<z << setw(2) << " |\n";
		t += dg;
	}
	return 0;
}
    
double s(const double x)
{
	if (abs(x) > 1)
		return (cos(x) * cos(x) + 1) / (exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = x * x / ((2 * k + 1) * (2 * k));
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}