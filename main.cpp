/****************************
Main file
Writen by: Brett Hirschberger
*****************************/
#include "payroll.h"

int main() {
	PayRoll payArray[11];
	double hoursWorked, payRate;
	ifstream payFile("payroll.dat");
	if (payFile.is_open()) {
		int i = 0;
		//gets information from the file and stores it in the Payroll objects in the array
		while (payFile >> hoursWorked >> payRate) {
			payArray[i].addInfo(hoursWorked, payRate);
			i++;
		}
		payFile.close();
	}
	//Formats and prints results
	for (int c = 0; c < sizeof(payArray) / sizeof(payArray[0]); c++) {
		cout << "Employee #:" << c + 1 << "\nHours Worked: " << payArray[c].getHoursWorked() <<
			"\nHourly Pay: $" << payArray[c].getHourlyPay() <<
			"\nWith a 20% tax deduction the final pay is $" << payArray[c].getpay() << endl << endl;
	}
	system("PAUSE");
	return 0;
}