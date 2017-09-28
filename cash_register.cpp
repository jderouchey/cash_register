#include <iostream>

using namespace std;

int main(){
	float subTotal = 0.0;
	float item_price = 0.0;
	
	do{
	cout << "Enter item price:";
	cin  >> item_price;
	cout << "Running total:" << running_total(item_price); 
	}while { item_price > 0 };
	cout << "Thank you for shopping with us!" << endl;
	cout << "Your Subtotal was $" << subTotal << end;
	return 0;
}

