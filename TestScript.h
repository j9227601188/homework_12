#pragma once
#include "IsKPeriodic.h"

void testScript() {
	std::string test_str_01{ "qweqweqweqweqweqweqweqwe" };
	int test_int_00{ 0 }, test_int_01{ -1 }, test_int_02{ 2 }, test_int_03{ 3 }, test_int_100{ 100 };
	std::cout << "Output of autotesting: \n";
	isKPeriodic(test_str_01, test_int_00);
	isKPeriodic(test_str_01, test_int_01);
	isKPeriodic(test_str_01, test_int_02);
	isKPeriodic(test_str_01, test_int_03);
	isKPeriodic(test_str_01, test_int_100);
}
