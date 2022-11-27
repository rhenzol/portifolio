//============================================================================
// Name        : design_patterns_strategy.cpp
// Author      : Rhenzo Losso
// Version     :
// Copyright   : 
// Description : Small project of a duck simulator which uses Strategy Design
//               Pattern.
//============================================================================

#include <iostream>
using namespace std;

#include "mallard.h"
#include "redhead.h"
#include "rubber.h"

int main() {
	mallard duck_m;
	rubber duck_r, duck_r2;
	redhead duck_re;

	duck_m.display();
	duck_m.doSound();

	duck_r.display();
	duck_r.doSound();

	duck_re.display();
	duck_re.doSound();

	duck_r2.doSound();
	return 0;
}
