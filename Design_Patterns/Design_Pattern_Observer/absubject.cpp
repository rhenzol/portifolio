/*
 * absubject.cpp
 *
 *  Created on: 6 de nov. de 2022
 *      Author: admin
 */

#include "absubject.h"

ab_subject::ab_subject() {
	// TODO Auto-generated constructor stub

}

ab_subject::~ab_subject() {
	// TODO Auto-generated destructor stub
	cout << "destruindo subject " << endl;
}

void ab_subject::insertObserver(ab_observer *o)
{
	cout << "objeto a ser inserido: " << o << endl;
	lista_ob.push_back(o);
	cout << "objeto: " << o << " inserido como subscriber" << endl;
	cout << "quantidade subscribers: " << lista_ob.size() << endl;
}

void ab_subject::removeObserver(ab_observer *o)
{
	vector <ab_observer *>::const_iterator it;

	cout << "objeto a ser retirado: " << o <<endl;


	for(it = lista_ob.begin(); it != lista_ob.end(); ++it) {
		if( (*it) == o) {
			lista_ob.erase(it);
			cout << "objeto: " << o << " retirado como subscriber" << endl;

			break;
		}
	}
	cout << "quantidade subscribers: " << lista_ob.size() << endl;
}

void ab_subject::end_subscription()
{

	cout << "encerrando todas as " << lista_ob.size() << " subsinscricoes existentes!" << endl;
	while(lista_ob.size() > 0)
		lista_ob.pop_back();
}

void ab_subject::notifyObserver(int i)
{
	vector <ab_observer*>::const_iterator it;
	ab_observer *ptr_subscriber;

	cout << "quantidade subscribers a serem notificados: " << lista_ob.size() << endl;

	for(it = lista_ob.begin(); it != lista_ob.end(); ++it) {
		    ptr_subscriber = (*it);
			ptr_subscriber->update(i);
			cout << "objeto " << ptr_subscriber << " notificado" << endl;
	}
}

