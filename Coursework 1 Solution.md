## Курсова задача 1
Дадена е рекурентната редица <img src="https://latex.codecogs.com/svg.latex?\{a_n\}_{n=1}^{\infty}">, където за всяко <img src="https://latex.codecogs.com/svg.latex?n\in{N},{\;}a_{n+1}=F(a_n)"> и <img src="https://latex.codecogs.com/svg.latex?а_1=\lambda">.
- <img src="https://latex.codecogs.com/svg.latex?a)"> Изследваите за сходимост редицата <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> в зависимост от <img src="https://latex.codecogs.com/svg.latex?\lambda">;
- <img src="https://latex.codecogs.com/svg.latex?b)"> Напишете програма, която по зададен първи член връща отговор колко е границата и по зададени пет достатъчно големи индекса извежда съответните членове на редицата с добра точност;

<img src="https://latex.codecogs.com/svg.latex?\boxed{62.}{\;}F(x)=\frac{-2x-9}{x^2+7x+13},{\;}\lambda\in{\mathbb{R}}">.

## Решение

<img src="https://latex.codecogs.com/svg.latex?a)"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}=\frac{-2a_n-9}{a_n^2+7a_n+13},{\;}a_1=\lambda\in{\mathbb{R}}">

Ако допуснем, че редицата <img src="https://latex.codecogs.com/svg.latex?\{a_n\}_{n=1}^{\infty}"> има граница <img src="https://latex.codecogs.com/svg.latex?\lim_{n\rightarrow\infty}a_n=l">, то от граничния преход: <img src="https://latex.codecogs.com/svg.latex?l=\frac{-2l-9}{l^2+7l+13}\Leftrightarrow">

<img src="https://latex.codecogs.com/svg.latex?l^3+7l^2+13l=-2l-9\Leftrightarrow{l^3+7l^2+15l+9=0}\Leftrightarrow{l^3+l^2+6l^2+6l+9l+9=0}">

<img src="https://latex.codecogs.com/svg.latex?\Leftrightarrow{l^2(l+1)+6l(l+1)+9(l+1)=0}\Leftrightarrow{(l^2+6l+9)(l+1)=0}\Leftrightarrow{(l+3)^2(l+1)=0}">
<br>
<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=\frac{-(a_n+1)(a_n+3)^2}{a_n^2+7a_n+13}">
<br>
<img src="https://latex.codecogs.com/svg.latex?sign(a_{n+1}-a_n)">

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/DIC%2001.png)

<img src="https://latex.codecogs.com/svg.latex?1.){\;}\boxed{\lambda\in(-1;\infty)}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-(-1)=\frac{-2a_a-9}{a_n^2+7a_n+13}+1=\frac{-2a_n-9+a_n^2+7a_n+13}{a_n^2+7a_n+13}=">

<img src="https://latex.codecogs.com/svg.latex?=\frac{a_n^2+5a_n+4}{a_n^2+7_n+13}=\frac{(a_n+4)(a_n+1)}{denom.>0}\Rightarrow{a_{n+1>-1}}"> и намалява, т.е. (*ограничена отдолу и намаляваща*) <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow\infty}a_n=-1}">.

<img src="https://latex.codecogs.com/svg.latex?2.){\;}\boxed{\lambda{=-1}}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=0\Rightarrow{a_{n+1}}=a_n=\cdots{=}a_1=-1\Rightarrow\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?3.){\;}\boxed{\lambda\in(-3;-1)}"> 

В този интервал редицата е растяща и съответно ще искаме да проверим дали ако сме взели първи член <img src="https://latex.codecogs.com/svg.latex?a_1=\lambda"> от този интервал, то за някое достатъчно голямо <img src="https://latex.codecogs.com/svg.latex?n:a_n"> ще „прескочи“ кандидата за граница отдясно <img src="https://latex.codecogs.com/svg.latex?n:-1">. Ако това не се случи, то тя ще е растяща и ограничена отгоре от <img src="https://latex.codecogs.com/svg.latex?n:-1">, а ако това се случи, тя ще е намаляваща и ограничена отдолу, т.е. при всички възможни сценарии ще има граница <img src="https://latex.codecogs.com/svg.latex?\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?4.){\;}\boxed{\lambda{=-3}}"> 

<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-a_n=0\Rightarrow{a_{n+1}}=a_n=\cdots{=a_1}=\lambda=-3\Rightarrow\lim_{n\rightarrow\infty}a_n=-3">.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/DIC%2002.png)

<img src="https://latex.codecogs.com/svg.latex?5.){\;}\boxed{\lambda\in(-4;-3)}"> 

В този интервал редицата е растяща и<br>
<img src="https://latex.codecogs.com/svg.latex?a_{n+1}-(-3)=\frac{-2a_n-9}{a_n^2+7a_n+13}+3=\frac{3a_n^2+19a_n+30}{denom.>0}=\frac{3(a_n+\frac{10}{3})(a_n+3)}{denom.>0}">

<img src="https://latex.codecogs.com/svg.latex?5.1.){\;}\boxed{\lambda\in(\frac{-10}{3};-3)}:a_{n+1}-(-3)<0"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow{\infty}}a_n=-3}">.

<img src="https://latex.codecogs.com/svg.latex?5.2.){\;}\boxed{\lambda{=-\frac{10}{3}}}:a_{n+1}=-3\stackrel{\text{4.)}}{\Rightarrow}\lim_{n\rightarrow\infty}{a_n=-3}">.


<img src="https://latex.codecogs.com/svg.latex?5.3.){\;}\boxed{\lambda\in(-4,-\frac{10}{3})}:a_{n+1}-(-3)>0"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow\lim_{n\rightarrow\infty}a_n=-1"> (*от 3.)*).

<img src="https://latex.codecogs.com/svg.latex?6.){\;}\boxed{\lambda=-4}:a_{n+1}=-1\stackrel{\text{2.)}}{\Rightarrow}\lim_{n\rightarrow\infty}a_n=-1">.

<img src="https://latex.codecogs.com/svg.latex?7.){\;}\boxed{\lambda\in(-\infty{;}-4)}:a_{n+1}-(-3)>0">, т.е. прескача <img src="https://latex.codecogs.com/svg.latex?-3"> и <img src="https://latex.codecogs.com/svg.latex?\{a_n\}"> е растяща <img src="https://latex.codecogs.com/svg.latex?\Rightarrow{\lim_{n\rightarrow\infty}{a_n}=-1}">.

**Окончателно:**

<img src="https://latex.codecogs.com/svg.latex?\lim_{n\rightarrow\infty}a_n=\begin{cases}-1,{\;}a_1\in({-\infty};-10/3)\cup{(-3;+\infty)}\\-3,{\;}a_1\in[-10/3;-3]\end{cases}}">

```cpp
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
```
