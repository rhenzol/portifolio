/*
 * redhead.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef DUCKSTYPES_REDHEAD_H_
#define DUCKSTYPES_REDHEAD_H_

#include "duck.h"

class redhead : public duck {
public:
	redhead();
	virtual ~redhead();
	void display();
};

#endif /* DUCKSTYPES_REDHEAD_H_ */
