#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    int i = 1;
    double loan, per, pay, Interest, Total, NewB;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	NewB = loan;
	while(NewB > 0){	
	cout << fixed << setprecision(2);
	cout << setw(13) << left << i++; 
	cout << setw(13) << left << loan;
	Interest = loan*(per/100);
	cout << setw(13) << left << Interest;
	Total = loan+Interest;
	cout << setw(13) << left << Total;
	if(pay > Total) pay = Total;
	cout << setw(13) << left << pay;
	NewB = Total-pay;
	cout << setw(13) << left << NewB;
	loan = NewB;
	cout << "\n";
	}
	
	return 0;
}