/*
 * mallard.cpp
 *
 *  Created on: 7 de nov. de 2022
 *      Author: admin
 */

#include <mallard.h>

mallard::mallard() {
	// TODO Auto-generated constructor stub
	this->setQuackBehavior(quack_s);
}

mallard::~mallard() {
	// TODO Auto-generated destructor stub
	cout << "pato mallard morreu!" << endl;
}


void mallard::display(){
   cout << "shows a mallard duck..." <<endl;
}
