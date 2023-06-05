Pay an employee using a gold rod of 7 units 

#include <iostream>

void printPaymentSequence() {
    int rodLength = 7;

    for (int day = 1; day <= 7; day++) {
        int payment = 1 << (day - 1); //binary shift
        if (day == 2) {
            cout << "Day 2: Employer takes back 1 unit(s) of gold bar and gives 2 unit(s) of gold bar" << std::endl;
            payment = 2;
        }
        else if (day == 4) {
            cout << "Day 4: Employer takes back 1 unit(s) and 2 unit(s) of gold bar and gives 4 unit(s) of gold bar" << std::endl;
            payment = 4;
        }
        else if (day == 5) {
            cout << "Day 5: Employer takes back 2 unit(s) of gold bar and gives 5 unit(s) of gold bar" << std::endl;
            payment = 5;
        }
        else if (day == 6) {
            cout << "Day 6: Employer takes back 1 unit(s) of gold bar and gives 6 unit(s) of gold bar" << std::endl;
            payment = 6;
        }
        else if (day == 7) {
            std::cout << "Day 7: Employer gives 1 unit(s) of gold bar" << std::endl;
            payment = 1;
        }
        else {
            cout << "Day " << day << ": Employer gives " << payment << " unit(s) of gold bar" << std::endl;
        }
        
        rodLength -= payment;
    }
}

int main() {
    cout << "Payment Sequence: " << endl;
    printPaymentSequence();

    return 0;
}
