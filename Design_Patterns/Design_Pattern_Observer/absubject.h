/*
 * absubject.h
 *
 *  Created on: 6 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef ABSUBJECT_H_
#define ABSUBJECT_H_

#include <vector>
#include <cstddef>
#include <iostream>
#include "abobserver.h"

using namespace std;

class ab_subject {
private:
	vector <ab_observer *> lista_ob;
protected:
	void end_subscription();
	void notifyObserver(int i);
public:
	ab_subject();
	virtual ~ab_subject();
	void insertObserver(ab_observer *o);
	void removeObserver(ab_observer *o);
};

#endif /* ABSUBJECT_H_ */
