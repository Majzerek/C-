//============================================================================
// Name        : FirstProgram.cpp
// Author      : Mariusz Mazur "Majzer"
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
// calculating years, months and days from days.


//	int numberInput;

//	cout << "Please enter number of days:";
//	cin >> numberInput;
//	int year = numberInput / 365;
//	int weeks = numberInput / 7.6f - (year * 48);
//	int days = numberInput - (year * 365) - (weeks * 7.5f);
//	cout << numberInput << " days is: " << year << " year " << weeks << " weeks" << " and " << days << " days";
//==========================================================================================================================


// obliczanie banknotow na podstawie ceny
//	cout << "Please enter price: " << endl;
//
//	float dolarInput;
//	int tenDollar;
//	int fiveDollar;
//	int twoDollar;
//	int oneDollar;
//	int cent_25;
//	int cent_10;
//	int cent_5;
//	int cent_1;
//990
//	cin >> dolarInput;
//	// int input dollar
//	tenDollar = (dolarInput / 10);
//	fiveDollar = (dolarInput - (tenDollar * 10)) / 5;
//	twoDollar = ((dolarInput - (tenDollar * 10)) - (fiveDollar * 5)) /2;
//	oneDollar = (((dolarInput - (tenDollar * 10)) - (fiveDollar * 5)) - (twoDollar * 2)) / 1;
//	//float input dollar
//	cent_25=((dolarInput - ((tenDollar * 10))- (fiveDollar * 5))- (twoDollar * 2))/ 0.25;
//	cent_10 = (((dolarInput - ((tenDollar * 10))- (fiveDollar * 5)) - (twoDollar * 2)) - (cent_25 * 0.25)) / 0.10;
//	cent_5 = ((((dolarInput - ((tenDollar * 10))- (fiveDollar * 5)) - (twoDollar * 2)) - (cent_25 * 0.25)) - (cent_10 * 0.10)) / 0.05 ;
//	cent_1 = (((((dolarInput - ((tenDollar * 10))- (fiveDollar * 5)) - (twoDollar * 2)) - (cent_25 * 0.25)) - (cent_10 * 0.10)) - (cent_5 * 0.05) + 0.0001) / 0.01 ;
//
//	cout << tenDollar << " ten dollar bills"<< endl;
//	cout << fiveDollar << " five dollar bills" << endl;
//	cout << twoDollar << " two dollar bills" << endl;
//	cout << oneDollar << " one dollar bills" << endl;
//	cout << cent_25 << " twenty five cent pieces" << endl;
//	cout << cent_10 << " ten cent pieces" << endl;
//	cout << cent_5 << " five cent pieces" << endl;
//	cout << cent_1 << " one cent pieces" << endl;

	//==========================================================================================================================


// calculating time based on seconds


	int secondInput;
	float hhOut;
	int minOut;
	int secOut;

	cout << "Please enter value in second: ";
	cin >> secondInput;

	hhOut = secondInput / 3600;
	minOut = (secondInput - (hhOut * 3600)) / 60;
	secOut = ((secondInput - (hhOut * 3600)) - (minOut * 60));



	cout << "Its: " << hhOut << "h::" <<  minOut << "m::" << secOut << "s"<< endl;


	return 0;
}
