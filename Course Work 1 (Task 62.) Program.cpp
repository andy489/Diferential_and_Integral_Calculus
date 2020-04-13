# github.com/andy489

#include <iostream>
#include <sstream>
#include <windows.h>
#include <iomanip>
#include <limits>
#include <regex>
using namespace std;
string lambda; double lam;

void info()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "Our recurent sequence is:\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "           -2.a(n)-9\na(n+1)= _______________,a(1)=lambda\n        a(n)^2+7a(n)+13\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "E - explore\nI = info\nX - end\n\n";
}

double calc(int n)
{
	double res(lam);
	while (n > 1)
	{
		res = (-2 * res - 9) / (res * res + 7 * res + 13);
		n--;
	}
	return res;
}

bool isNumber(string x)
{
	regex e("^[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)$");
	if (regex_match(x, e)) return true;
	else return false;
}

void explore()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "Enter first element of the sequence ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "(lambda): ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
START:string lambda;
	getline(cin, lambda);
	if (!isNumber(lambda))
	{
		cout << "Please enter a correct lambda value: ";
		goto START;
	}
	else
	{
		lam = stod(lambda);
	}

	if (lam < -3 || (lam > -3 && lam < -1))
	{
		if (lam == -4)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "Sequence becomes constant -3 ";
		}
		else if (lam == 10 / 3.0 || lam == 3.3333 || lam == 3.33333 || lam == 3.333333 || lam == 3.3333333)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "Sequence becomes constant -3 ";
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "Sequence is monotonically increasing ";
		}
	}
	else if (lam > -1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "Sequence is monotonically decreasing ";
	}
	else if (lam == -3)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "Sequence is constant -3 ";
	}
	else if (lam == -1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "Sequence is constant -1 ";
	}
	if (lam<-10 / 3.0 || lam>-3)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "limit is -1\n";
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "limit is -3\n";
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "Enter several indeces of the elements you want (with space delimeter):\n";
	string input;
	getline(cin, input);
	istringstream istr(input);
	int n;
	while (istr >> n)
	{
		if (n <= 0)
		{
			cout << n << "is invalid index\n";
		}
		else
		{
			if (lam == -1)
			{
				cout << n << "-th element is: " << -1 << '\n';
			}
			else if (lam == -3)
			{
				cout << n << "-th element is: " << -3 << '\n';
			}
			else if (lam == -4 && n != 1)
			{
				cout << n << "-th element is: " << -1 << '\n';
			}
			else if (lam == 10 / 3.0 || lam == 3.3333 || lam == 3.33333 || lam == 3.333333 || lam == 3.3333333)
			{
				if (n != 1)
				{
					cout << n << "-th element is: " << -3 << '\n';
				}
				else cout << n << "-th element is: " << "-10/3" << '\n';

			}
			else cout << n << "-th element is: " << setprecision(9) << calc(n) << '\n';
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	return;
}

int main()
{
	info();

	string command;
S:	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "Enter command: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	getline(cin, command);
	while (command != "x" && command != "X")
	{
		if (command == "x" || command == "X")
		{
			break;
		}
		else if (command == "E" || command == "e")
		{
			explore();
		}
		else if (command == "I" || command == "i")
		{
			info();
		}
		else
		{
			goto S;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		cout << "Enter command: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cin >> command;
		cin.ignore();
	}
	return 0;
}
