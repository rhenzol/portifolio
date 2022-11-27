/*
 * squeak.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef QUACKSBEHAVIOR_SQUEAK_H_
#define QUACKSBEHAVIOR_SQUEAK_H_

#include "quackbehavior.h"

class squeak : protected quackbehavior {
public:
	squeak();
	virtual ~squeak();
	void doSound();
};

#endif /* QUACKSBEHAVIOR_SQUEAK_H_ */
