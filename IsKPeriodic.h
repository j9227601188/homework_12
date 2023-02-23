#pragma once
#include <string>

//checking the multiplicity of a string to the number K
auto isKPeriodic(const std::string& in_string, const int K) {
	//exception
	if (K <= 0) {
		std::cout << K << " invalid divisor" << "\n";
		return false;
	}
	//check
	if (in_string.size() % K == 0) {
		for (size_t i{ 0 }; i < K; ++i) {
			for (size_t j{ i + K }; j < in_string.size(); j += K) {
				if (in_string[i] != in_string[j]) {
					std::cout << in_string << " not a multiple " << K << "\n";
					return false;
				}
			}
		}
		std::cout << in_string << " multiple " << K << "\n";
		return true;
	}
	//invalid
	std::cout << in_string << " not a multiple " << K << "\n";
	return false;
};
