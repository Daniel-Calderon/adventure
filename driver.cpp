// Raquel Figueroa
// Ali Fenton
// David Jia
// Daniel Calderon

#include<iostream> // input output
#include<string> // string
#include <cctype>
#include <cassert>




double scuba(int peopleTotal, int totalDays);

double discount(double baseChange);


char menu();
double  climbing( );
double scuba(int peopleTotal, int totalDays);
double skyDive();
double spelunk();
double discount(double baseChange); // gives discounted price

using namespace std;

int main()
{
    
    if(menu() == 'a')
    {
    cout << climbing()<<endl;
    }
//    else if(menu() =='b')
//    {
//    scuba();
//    }
    else if(menu() =='c')
    {
    cout << skyDive()<<endl;
    }
    else if(menu() =='d')
    {
    cout << spelunk() << endl;
    }

    return 0;
}
char menu()
{
    char ans;
    
     cout << "\n"
          << "**Welcome to High Adventure Travel Agency**\n"
          << "       We offer 4 vacation packages:\n"
          << "         A. Devil's Courthouse Adventure Weekend.\n"
          << "         B. Scuba Bahama.\n"
          << "         C. Sky Dive Colorado.\n"
          << "         D. Barron Cliff Spelunk.\n"
          << "\n"
          << "Please enter your preferred vacation package: ";
         
          cin >> ans;
          ans = tolower(ans);
             
          while (ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
          {
            cout << "\n"
                 << "Invalid input. Please choose A, B, C, or D: ";
            cin >> ans;
            ans = tolower(ans);
          }
    return ans;
}

double spelunk()
{
    int numPeople(0), numEquipRental(0), numDays(0);
    double totalBaseCharge(0), totalEquipRental(0), totalCost(0);
    double costBaseCharge(700), costEquipRental(40), discount(0.9);
    
    cout << "You have chosen the Barron Cliff Spelunk Vacation Package!"
         << "\n"
         << "Enter number of people: "; 
    cin >> numPeople;
    
    cout << "Enter the number of people renting equipment: ";
    cin >> numEquipRental;
    
    cout << "Enter number of days you will need the equipment: ";
    cin >> numDays;
    
    totalBaseCharge = costBaseCharge * numPeople;
    totalEquipRental = costEquipRental * numDays * numEquipRental;
    
    if (numPeople >= 5)
        totalBaseCharge = totalBaseCharge * discount;
    
    totalCost = totalBaseCharge + totalEquipRental;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    return totalCost;
}

//double discount(double baseChange)
//{
//	return (baseChange * 0.9);
//}

double climbing()
{
	int numPeople, numInstructions, numRentals, numRentalDays;
	double basePrice = 350;
	int instructionPrice = 100;
	int rentalPrice = 40; 
	double baseCharge, instructionCharge, rentalCharge, totalCharge;
	
	cout << "How many people will be attending?" << endl;
	cin >> numPeople;
	
	while (numPeople < 1) // checks for invalid input
	{
		cout << "Please enter a valid number of people attending or zero if you wish to cancel."
			 << endl;
		cin >> numPeople;
		
		if (numPeople == 0)
		{
			return 0;
		}
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
	
	if (numRentals > 1)
	{
		cout << "How many days do you wish to rent the equipment for?" << endl;
		cin >> numRentalDays;
	
		while (numRentalDays < 0)
		{
			cout << "Please enter a valid number for the number of days desired for the " <<
					" equipment rental or enter zero to cancel the rental." << endl;
			cin >> numRentalDays;
		}
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




double discount(double baseCharge){
    return(baseCharge * 0.9);
}


double scuba(int peopleTotal, int totalDays){
    int baseCharge = 1000;
    int scubaInstruc = 100; 
    int totalOfScuba;
    
    if(peopleTotal >= 5){
        baseCharge = discount(baseCharge);
    }
    baseCharge = baseCharge * peopleTotal;
    
    if(totalDays >= 1){
        scubaInstruc = scubaInstruc * peopleTotal;
        scubaInstruc = scubaInstruc * totalDays;
    }
    
    totalOfScuba = scubaInstruc + baseCharge;
    
    return totalOfScuba;


}

double skyDive()
{
	int numPeople, numLodge, numLodgeDays, numInn, numInnDays;
	double basePrice = 700; 
	int lodgePrice = 65;
	int innPrice = 120;
	double baseCharge, lodgeCharge, innCharge, totalCharge;
	
	cout << "How many people will be attending?" << endl;
	cin >> numPeople;
	
	while (numPeople < 1) // checks for invalid input
	{
		cout << "Please enter a valid number of people attending or zero if you wish to cancel."
			 << endl;
		cin >> numPeople;
		
		if (numPeople == 0)
		{
			return 0;
		}
	}
	
	cout << "How many people would like to stay at the Wilderness Lodge?" << endl;
	cin >> numLodge;
	
	while (numLodge < 0) // checks for invalid input
	{
		cout << "Please enter a valid number of people staying or zero if you wish to cancel."
			 << endl;
		cin >> numLodge;
	} 
	
	if (numLodge > 1)
	{
		cout << "How many days do they wish to stay at the Wilderness Lodge?" << endl;
		cin >> numLodgeDays;
	
		while (numLodgeDays < 0) // checks for invalid input
		{
			cout << "Please enter a valid number of days staying or zero if you wish to cancel."
				 << endl;
			cin >> numLodgeDays;
		}
	}
	
	cout << "How many people would like to stay at the Luxury Inn?" << endl;
	cin >> numInn;
	
	while (numInn < 0) // checks for invalid input
	{
		cout << "Please enter a valid number of people staying or zero if you wish to cancel."
			 << endl;
		cin >> numInn;
	} 
	
	if (numInn > 1)
	{
		cout << "How many days do they wish to stay at the Luxury Inn?" << endl;
		cin >> numInnDays;
	
		while (numInnDays < 0) // checks for invalid input
		{
			cout << "Please enter a valid number of days staying or zero if you wish to cancel."
				 << endl;
			cin >> numInnDays;
		}
	}
	
	baseCharge = basePrice * numPeople;
	
	if (numPeople >= 5)
	{
		baseCharge = discount(baseCharge);
	}
	
	lodgeCharge = lodgePrice * numLodge * numLodgeDays;
	
	innCharge = innPrice * numInn * numInnDays;
	
	cout.setf(ios::fixed); // gives back 2 decimal places
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	totalCharge = baseCharge + lodgeCharge + innCharge;
	
	return totalCharge;
}
