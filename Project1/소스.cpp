//1��
/*
#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0;

	char ch;

	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	while (cin >> ch) {

		switch (ch) {

		case'a':case'i':case 'e': case'o':case 'u':

			x++;
			break;
		case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':case'L':case'M':case'N':case'O':
		case'P':case'Q':case'R':case'S':case'T':case'U':case'V':case'W':case'X':case'Y':case'Z':

			cout << "Check to a alphabet" << endl;

			break;
		default:

			y++;

			break;
		}

	}

	cout << "����: " << x << endl;

	cout << "����: " << y << endl;

	return 0;
}*/

//2��
/*
#include <iostream>
#include <random>
using namespace std;
int answer;
int guess;
char r;

int main()
{
	random_device rd;

	mt19937 x(rd());

	mt19937 y(rd());

	uniform_int_distribution<int> dis(0, 100);

	int a, b;

	a = dis(x);

	b = dis(y);

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	cout << a << " ";

	cout << b << endl;

	cout << "������ �Է��ϱ�(+,-,*,/)" << endl;

	cin >> r;

	if (r == '+') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a + b;
	}

	else if (r == '-') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a - b;

	}

	else if (r == '*') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a * b;

	}

	else if (r == '/')
	{

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a / b;
	}

	if (answer == guess)
		cout << "�¾ҽ��ϴ�" << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�." << endl;

}
*/

//����3) 1���� N���� M�� �����
/*
#include <iostream>
using namespace std;
int main()
{
	int n, m, i, sum = 0;

	cin >> n >> m;

	cout << "N ���� " << n <<","<<" M ���� " << m << endl;

	for (i = 1; i <= n; i++)
	{
		if (i % m == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum;

	return 0;
}
*/

// ����4) ������� ��
/*
#include <iostream>
using namespace std;

int main()
{
	int n, i, sum = 1;
	cin >> n;
	cout << "1";

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << " + " << i;
			sum = sum + i;
		}
	}
	cout << " = " << sum;
	return 0;
}*/

//����5) 
/*
#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';
	for (k = 0; k < 9; k++)
	{
		cout << "(x, y) ��ǥ: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : '0';
		for (i = 0; i < 3; i++)
		{
			cout << "---|---|---" << endl;
			cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}
	return 0;
}*/

//6��
/*#include<iostream>
#include <time.h>
using namespace std;
int main()
{
	bool board[10][10] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)

			if ((rand() % 100) < 30)
				board[i][j] = true;
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			if (board[i][j])
				cout << "# ";
			else
				cout << ". ";
	cout << endl;

	}
	return 0;
}
*/
//1��
/*
#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0;

	char ch;

	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	while (cin >> ch) {

		switch (ch) {

		case'a':case'i':case 'e': case'o':case 'u':

			x++;
			break;
		case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':case'L':case'M':case'N':case'O':
		case'P':case'Q':case'R':case'S':case'T':case'U':case'V':case'W':case'X':case'Y':case'Z':

			cout << "Check to a alphabet" << endl;

			break;
		default:

			y++;

			break;
		}

	}

	cout << "����: " << x << endl;

	cout << "����: " << y << endl;

	return 0;
}*/

//2��
/*
#include <iostream>
#include <random>
using namespace std;
int answer;
int guess;
char r;

int main()
{
	random_device rd;

	mt19937 x(rd());

	mt19937 y(rd());

	uniform_int_distribution<int> dis(0, 100);

	int a, b;

	a = dis(x);

	b = dis(y);

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	cout << a << " ";

	cout << b << endl;

	cout << "������ �Է��ϱ�(+,-,*,/)" << endl;

	cin >> r;

	if (r == '+') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a + b;
	}

	else if (r == '-') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a - b;

	}

	else if (r == '*') {

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a * b;

	}

	else if (r == '/')
	{

		cout << "��� �Է��ϱ�" << endl;

		cin >> guess;

		answer = a / b;
	}

	if (answer == guess)
		cout << "�¾ҽ��ϴ�" << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�." << endl;

}
*/

//����3) 1���� N���� M�� �����
/*
#include <iostream>
using namespace std;
int main()
{
	int n, m, i, sum = 0;

	cin >> n >> m;

	cout << "N ���� " << n <<","<<" M ���� " << m << endl;

	for (i = 1; i <= n; i++)
	{
		if (i % m == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum;

	return 0;
}
*/

// ����4) ������� ��
/*
#include <iostream>
using namespace std;

int main()
{
	int n, i, sum = 1;
	cin >> n;
	cout << "1";

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << " + " << i;
			sum = sum + i;
		}
	}
	cout << " = " << sum;
	return 0;
}*/

//����5) 
/*
#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';
	for (k = 0; k < 9; k++)
	{
		cout << "(x, y) ��ǥ: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : '0';
		for (i = 0; i < 3; i++)
		{
			cout << "---|---|---" << endl;
			cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}
	return 0;
}*/

//6��
/*#include<iostream>
#include <time.h>
using namespace std;
int main()
{
	bool board[10][10] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)

			if ((rand() % 100) < 30)
				board[i][j] = true;
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
			if (board[i][j])
				cout << "# ";
			else
				cout << ". ";
	cout << endl;

	}
	return 0;
}
*/
