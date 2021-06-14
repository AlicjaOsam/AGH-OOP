#include "SecureCalc.h"
#include "Functions.h"
#include <iostream>
#include <stdexcept>
#include <cmath>


int main() {
	SecureCalc::run(Asin{}, 0.5);
	SecureCalc::run(Asin{}, M_PI/2);
	
	SecureCalc::run(Log10{}, 1e-10);
	SecureCalc::run(Log10{}, -20);
	
	SecureCalc::run(DivideBy{2.5}, -0.4);
  SecureCalc::run(DivideBy{1.6}, 0);
}