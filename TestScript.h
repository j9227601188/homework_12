#pragma once
#include "LskPeriodic.h"

void testScript() {
	std::string test_str_01{ "qweqweqweqweqweqweqweqwe" };
	int test_int_00{ 0 }, test_int_01{ -1 }, test_int_02{ 2 }, test_int_03{ 3 }, test_int_100{ 100 };
	std::cout << "Output of autotesting: \n";
	lskPeriodic(test_str_01, test_int_00);
	lskPeriodic(test_str_01, test_int_01);
	lskPeriodic(test_str_01, test_int_02);
	lskPeriodic(test_str_01, test_int_03);
	lskPeriodic(test_str_01, test_int_100);
}
