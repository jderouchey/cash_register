#include <iostream>

using namespace std;

void running_total(float item_price){

	float& subTotal;
	return item_price += &subTotal; 

}
int maint(){
	float subTotal = 0.0;
	cout << "Enter item price:";
	cin  >> item_price;
	cout << "Running total:" << running_total(item_price); 
	
	return 0;
}

