/****************************
Header file for PayRoll class
Writen by: Brett Hirschberger
*****************************/
#include <iostream>
#include <fstream>

#ifndef PAYROLL_H
#define PAYROLL_H
using namespace std;

class PayRoll {
private:
	double hoursWorked;
	double hourlyPay;
public:
	void addInfo(double hw, double hp);
	PayRoll();
	double getpay();
	double getHoursWorked();
	double getHourlyPay();
};
#endif