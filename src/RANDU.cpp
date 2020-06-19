//
// Created by jake on 19/06/2020.
//

#include "RANDU.h"

void RANDU::setSeed(uint32_t seed) {
	this->seed = seed;
}

uint32_t RANDU::get() {
	long intermediateValue = seed * 65539;
	return seed = intermediateValue % (1LL << 31);
}
