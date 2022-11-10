#include<iostream>
#include<cmath>

using namespace std;

double t(const double x);

int main()
{
	double fp;
	double fk;
	double c;
	int n;

	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;

	double fkl = (fk - fp) / n;
	double f = fp;

	while (f <= fk)
	{
		c = t(pow(f, 2)) + 2 * t(2 * f + 1) + sqrt(t(1));
		cout << f << " " << c << endl;
		f += fkl;


	}
	return 0;
}
double t(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (exp(x) + sin(x) * sin(x));
	else
	{
		double S = 0;
		double j = 0;
		double a = x;
		S = a;

		do {
			j++;
			double R = -(1 / (4 * j + 2));
			a *= R;
			S += a;


		} while (j <= 5);
		return S;

	}
}
