// Raquel Figueroa
// Ali Fenton
// David Jia

#include <iostream>
#include <cctype>

char menu();
double  climbing(... );
double scuba(... );
double skyDive(... );
double spelunk();

using namespace std;

int main()
{
    cout << spelunk();
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

