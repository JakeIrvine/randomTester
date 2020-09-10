//
// Created by jake on 19/06/2020.
//

#ifndef RANDOMTESTER_RANDU_H
#define RANDOMTESTER_RANDU_H

#include "PRNG.h"
/// RANDU PRNG

class RANDU : public PRNG {
public:
	void setSeed(uint32_t seed) override;

	uint32_t get() override;

  std::string name() override;
  std::string description() override;
private:
	long seed;
};


#endif //RANDOMTESTER_RANDU_H
