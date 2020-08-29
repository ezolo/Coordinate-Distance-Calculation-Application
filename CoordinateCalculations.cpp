/* Name: Eva Zolotarev
Program Title: From Here to There
Program Description:
1.The following program should calculate the distance between two points while, keeping the format
(including: parenthesis and commas) constant throughout the program.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double x1, x2, y1, y2, distanceAway;
	char leftParenthesis, rightParenthesis, middleComma;
	char positionA[200], positionB[200];
	string position;

	cout << "Welcome to the 2D Distance Program!!!";

	cout << "\n\nWhat is your first point?"; //1st Point's Code
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.') //Setting up responses to: () & ,
	{
		cin >> leftParenthesis;
	}
	cin >> x1 >> ws;
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> middleComma;
	}
	cin >> y1 >> ws;
	if (cin.peek() == ')')
	{
		cin >> rightParenthesis;
	}
	cout << "Where is your second point?"; //2nd Point's Code
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> leftParenthesis;
	}
	cin >> x2 >> ws;
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> middleComma;
	}
	cin >> y2 >> ws;
	if (cin.peek() == ')')
	{
		cin >> rightParenthesis;
	}

	cout << "\n\nThank you!! Calculating... Done.\n";

	distanceAway = sqrt(pow(x2 - x1, 2) + pow((y2 - y1), 2)); //Calculating Distance

	cout << "\n\n(" << x1 << "," << y1 << ")" << " is " << distanceAway << " units away from " << "(" << x2 << "," << y2 << ")" << ".\n"; //printing out distance
	cout << "\n\nThank you for using the TDP!!\n";
	cout << "\n\nEndeavor to have a wondrous day!";
	char letter;
	cin >> letter;

	return 0;
}