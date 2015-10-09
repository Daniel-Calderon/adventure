// Raquel Figueroa
// Ali Fenton
// David Jia
#include<iostream> // input output
#include<string> // string
using namespace std;

char menu( );
double climbing();
double scuba(... );
double skyDive(... );
double spelunk();
double discount(double baseChange); // gives discounted price

int main()
{
    return 0;
}

double discount(double baseChange)
{
	return (baseChange * 0.9);
}

double climbing()
{
	int numPeople, numInstructions, numRentals, numRentalDays;
	double basePrice = 350;
	int instructionPrice = 100;
	int rentalPrice = 40; 
	double baseCharge, instructionCharge, rentalCharge, totalCharge;
	
	cout << "How many people will be attending?" << endl;
	cin >> numPeople;
	
	while (numPeople < 0) // checks for invalid input
	{
		cout << "Please enter a valid number of people attending or zero if you wish to cancel."
			 << endl;
		cin >> numPeople;
	}
	
	cout << "How many people will be needing climbing instructions?" << endl;
	cin >> numInstructions;
	
	while (numInstructions < 0)
	{
		cout << "Please enter a valid number of people that need climbing instruction or " <<
			 "enter zero if no one needs climbing instruction." << endl;
		cin >> numInstructions;
	}
	
	cout << "How many people need equipment rental?" << endl;
	cin >> numRentals;
	
	while (numRentals < 0)
	{
		cout << "Please enter a valid number of people that need equipment rental or " << 
				" enter zero if no one needs equipment rental." << endl;
		cin >> numRentals;
	}
	
	cout << "How many days do you wish to rent the equipment for?" << endl;
	cin >> numRentalDays;
	
	while (numRentalDays < 0)
	{
		cout << "Please enter a valid number for the number of days desired for the " <<
				" equipment rental or enter zero to cancel the rental." << endl;
		cin >> numRentalDays;
	}
	
	baseCharge = basePrice * numPeople;
	
	if (numPeople >= 5)
	{
		baseCharge = discount(baseCharge);
	}
	
	instructionCharge = instructionPrice * numInstructions;
	
	rentalCharge = rentalPrice * numRentals * numRentalDays;
	
	cout.setf(ios::fixed); // gives back 2 decimal places
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	totalCharge = baseCharge + instructionCharge + rentalCharge;
	
	return totalCharge;
}
