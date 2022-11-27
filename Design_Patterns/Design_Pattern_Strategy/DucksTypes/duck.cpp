/*
 * duck.cpp
 *
 *  Created on: 7 de nov. de 2022
 *      Author: admin
 */

#include "duck.h"

duck::duck() : ptr_quackbehavior(nullptr) {
	// TODO Auto-generated constructor stub

}

duck::~duck() {
	// TODO Auto-generated destructor stub
	cout << "deleting quack behavior" << endl;
	delete ptr_quackbehavior;
	ptr_quackbehavior = nullptr;
}

void duck::doSound(){
	cout << "making sound ";
	ptr_quackbehavior->doSound();
}


void  duck::setQuackBehavior(soundtype type){
	cout << "defining sound as ";
	switch (type) {
		case quack_s:
			ptr_quackbehavior =(quackbehavior*) new quack;
			cout << "quack!" << endl;
			break;
		case quick_s:
			ptr_quackbehavior =(quackbehavior*) new squeak;
			cout << "quick!" << endl;
			break;
		case mute_s:
		default:
			ptr_quackbehavior =(quackbehavior*) new mute;
			cout << "mute!" << endl;
			break;
	}
}
