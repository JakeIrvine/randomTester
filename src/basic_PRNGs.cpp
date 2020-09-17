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

std::string Zeroes::name() {
	return "Zeroes";
}

std::string Zeroes::description() {
	return std::string();
}


void Ones::setSeed(uint32_t seed) {
	// does nothing
}

uint32_t Ones::get() {
	return UINT32_MAX;
}

std::string Ones::name() {
	return "Ones";
}

std::string Ones::description() {
	return std::string();
}

uint32_t Alternating::get() {
	return 0b01010101010101010101010101010101;
}

std::string Alternating::name() {
	return "Alternating";
}

std::string Alternating::description() {
	return std::string();
}

void Alternating::setSeed(uint32_t seed) {
	// Does nothing
}
