/*
 * redhead.cpp
 *
 *  Created on: 7 de nov. de 2022
 *      Author: admin
 */

#include <redhead.h>

redhead::redhead() {
	// TODO Auto-generated constructor stub
	this->setQuackBehavior(quack_s);
}

redhead::~redhead() {
	// TODO Auto-generated destructor stub
	cout << "pato rredhead morreu!" << endl;
}

void redhead::display(){
	cout << "shows a redhead duck..." << endl;
}

