#pragma once
#include "IsKPeriodic.h"

void testInManualMode() {
	std::cout	<< "\nTo test the lskPeriodic() function, press enter 1 or 0 to EXIT\n";
	int of{ 0 };
	std::cin >> of;
	while (of) {
		std::cout << "Enter a text for testing: ";
		std::string userString;
		std::cin.ignore();
		getline(std::cin, userString);
		std::cout << userString << "\n";//del
		std::cout << "Enter a multiplicity for testing: ";
		size_t userMultiplicity{ 0 };
		std::cin >> userMultiplicity;
		std::cout << userMultiplicity << "\n";//del
		isKPeriodic(userString, userMultiplicity);
		std::cout << "to repeat the test, enter 1 or 0 to EXIT\n";
		std::cin >> of;
	}
}
