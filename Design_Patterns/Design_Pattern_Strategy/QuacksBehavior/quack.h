/*
 * quack.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef QUACKSBEHAVIOR_QUACK_H_
#define QUACKSBEHAVIOR_QUACK_H_

#include "quackbehavior.h"

class quack : protected quackbehavior {

public:
	quack();
	virtual ~quack();
	void doSound();
};

#endif /* QUACKSBEHAVIOR_QUACK_H_ */
