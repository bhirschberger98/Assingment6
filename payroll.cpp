/****************************************
Implementation file for the PayRoll class
Writen by: Brett Hirschberger
*****************************************/
#include "payroll.h"

double PayRoll::getpay() {
	double finalPay = 0;
	const double taxDeduction = .2;
	finalPay = hourlyPay * hoursWorked;
	finalPay = finalPay - (finalPay*taxDeduction);
	return finalPay;
}
double PayRoll::getHoursWorked() {
	return hoursWorked;
}
double PayRoll::getHourlyPay() {
	return hourlyPay;
}
void PayRoll::addInfo(double hw, double hp) {
	hoursWorked = hw;
	hourlyPay = hp;
}
PayRoll::PayRoll() {
	/*an empty constructor is nessesary because the array creates several instances of this class
	and the  infornmation is added afterwards*/
}