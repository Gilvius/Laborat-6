// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;

double const pi = 3.14;

int func_1(int, double);
double func_2(double, double);
int func_3(int, double);

int func_1(int A, double z)
{
	int b;
	if (sqrt(2 * z) >= 0)
	{
		a = cos(2 * ((A - 90)*pi / 180)) + pow(cos((3 * z) / 4), 2) - sqrt(2 * z);
		return a;
	}
	else return 310001;
}
		double func_2(double x, double y)
		{
			double b;
			if (pow(x, 1. / 5) >= 0 && y-x != 0)
			{
			b = pow(y*y*y - x, 2) / pow(y - x, 3) + pow(abs(y - x), 3) / pow(x, 1. / 5);
			return b;
			}
			else return 310001;
		}

			int func_3(int a, double b)
			{
				int rez;
				if (a == 310001 || b == 310001)
				{
					return 2;
				}
				else
				{
					rez = a > b;
					return rez;
				}
	
			}

				int main()
				{
					int A, a;
					double z, x, y, b;
						cout << "Input A: ";
						cin >> A;
						cout << "Input z: ";
						cin >> z;
						cout << "Input x: ";
						cin >> x;
						cout << "Input y: ";
						cin >> y;

							a = func_1(A, z);
							b = func_2(x, y);
							int rez;
							rez = func_3(a, b);
							cout << a << " " << b << endl;
								if (rez == 1)
								{
									cout << "Your answer is true" << endl;
		
								}
									else if (rez == 0)
									{
										cout << "Your answer is false" << endl;
									}
										else
										{
											cout << "Error!" << endl;
					}
	system("pause");
    return 0;
}

