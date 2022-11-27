/*
 * mallard.h
 *
 *  Created on: 7 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef DUCKSTYPES_MALLARD_H_
#define DUCKSTYPES_MALLARD_H_

#include "duck.h"

class mallard : public duck {
public:
	mallard();
	virtual ~mallard();
	void display();
};

#endif /* DUCKSTYPES_MALLARD_H_ */
