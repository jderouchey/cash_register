/*
 * reg.cpp
 *
 *  Created on: Sep 27, 2017
 *      Author: joel
 */


#include <iostream>

using namespace std;

int main(){
	float subTotal = 0.0;
	float item_price = 0.0;

	do{
	cout << "Enter item price:";
	cin  >> item_price;
	subTotal += item_price;
	cout << "Running total:" << subTotal << endl;
	}while ( item_price > 0 );
	cout << "Thank you for shopping with us!" << endl;
	cout << "Your Subtotal was $" << subTotal << endl;
	return 0;
}
