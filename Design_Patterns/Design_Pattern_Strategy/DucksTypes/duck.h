/*
 * duck.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef DUCKSTYPES_DUCK_H_
#define DUCKSTYPES_DUCK_H_

#include "quackbehavior.h"
#include "quack.h"
#include "squeak.h"
#include "mute.h"

typedef enum {quack_s,quick_s,mute_s} soundtype;

class duck {
protected:
	quackbehavior *ptr_quackbehavior;
	void setQuackBehavior(soundtype type);
public:
	duck();
	virtual ~duck();
	void doSound();
	virtual void display() = 0;
};

#endif /* DUCKSTYPES_DUCK_H_ */
