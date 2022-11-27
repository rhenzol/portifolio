/*
 * mute.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef QUACKSBEHAVIOR_MUTE_H_
#define QUACKSBEHAVIOR_MUTE_H_

#include "quackbehavior.h"

class mute : protected quackbehavior {
public:
	mute();
	virtual ~mute();
	void doSound();
};

#endif /* QUACKSBEHAVIOR_MUTE_H_ */
