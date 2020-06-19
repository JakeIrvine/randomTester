//
// Created by jake on 19/06/2020.
//

#include "basic_PRNGs.h"

void Zeroes::setSeed(uint32_t seed) {
	// does nothing
}

uint32_t Zeroes::get() {
	return 0;
}

void Ones::setSeed(uint32_t seed) {
	// does nothing
}

uint32_t Ones::get() {
	return UINT32_MAX;
}

uint32_t Alternating::get() {
	return 0b01010101010101010101010101010101;
}
