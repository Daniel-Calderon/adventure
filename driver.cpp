// Raquel Figueroa
// Ali Fenton
// David Jia

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

char menu();
//double  climbing(... );
double scuba(int peopleTotal, int totalDays);
//double skyDive(... );
//double spelunk();
double discount(double baseChange);

int main(){

    
    return 0;
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
