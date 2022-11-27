/*
 * abobserver.h
 *
 *  Created on: 6 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef ABOBSERVER_H_
#define ABOBSERVER_H_

#include <iostream>

using namespace std;

class ab_observer {
public:
	ab_observer();
	virtual ~ab_observer();
	virtual void update(int i) = 0;
};

#endif /* ABOBSERVER_H_ */
