/*
 * quackbehavior.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef QUACKSBEHAVIOR_QUACKBEHAVIOR_H_
#define QUACKSBEHAVIOR_QUACKBEHAVIOR_H_

#include <iostream>

using namespace std;

class quackbehavior {
public:
	quackbehavior();
	virtual ~quackbehavior();
	virtual void doSound() = 0;
};

#endif /* QUACKSBEHAVIOR_QUACKBEHAVIOR_H_ */
