#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace chrono;

int gcd(int x, int y);

int main()
{
	int num1, num2, result;
	char again;
	bool isPositive = false;

	do
	{
		do
		{
			cout << "Enter two positive numbers to find the GCD using the Euclidean Algorithm: ";
			cin >> num1 >> num2;
			if (num1 < 0 || num2 < 0)
			{
				cout << "Numbers can't be negative. Try again." << endl;
				system("pause");
				system("cls");
			}
			else
				isPositive = true;
		} while (!isPositive);


		if (num1 > 0 && num2 > 0)
		{
			auto start = high_resolution_clock::now();
			result = gcd(num1, num2);
			auto stop = high_resolution_clock::now();

			auto duration = duration_cast<nanoseconds>(stop - start).count() * .000000001;

			cout << "The GCD of " << num1 << " and " << num2 << " is " << result << "." << endl;
			cout << "It took " << fixed << setprecision(9) << duration << " seconds." << endl;
		}
		else
			cout << "Invalid Input." << endl;

		cout << "Do you want to run the program again?(Y or N) ";
		cin >> again;
		system("cls");
	} while (toupper(again) == 'Y');

	return 0;
}

int gcd(int x, int y)
{
	int r = x % y;

	if (r == 0)
		return y;
	else
		return gcd(y, r);
}
