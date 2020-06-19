//
// Created by jake on 19/06/2020.
//

#ifndef RANDOMTESTER_BASIC_PRNGS_H
#define RANDOMTESTER_BASIC_PRNGS_H

#include "PRNG.h"

class Zeroes : public PRNG {
public:
	void setSeed(uint32_t seed) override;

	uint32_t get() override;
};

class Ones : public PRNG {
public:
	void setSeed(uint32_t seed) override;

	uint32_t get() override;
};

class Alternating : public PRNG {
public:
	void setSeed(uint32_t seed) override;

	uint32_t get() override;
};


#endif //RANDOMTESTER_BASIC_PRNGS_H
