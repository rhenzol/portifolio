/*
 * rubber.cpp
 *
 *  Created on: 7 de nov. de 2022
 *      Author: admin
 */

#include <rubber.h>

rubber::rubber() {
	// TODO Auto-generated constructor stub
	this->setQuackBehavior(quick_s);
}

rubber::~rubber() {
	// TODO Auto-generated destructor stub
	cout << "pato rubber morreu!" << endl;
}

void rubber::display(){
	cout << "shows a rubber  duck..." << endl;
}
