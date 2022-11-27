/*
 * sbsgrafico.cpp
 *
 *  Created on: 6 de nov. de 2022
 *      Author: admin
 */

#include "sbsgrafico.h"

sbs_grafico::sbs_grafico() : subject(nullptr), temp(0) {
	cout << "criando display " << this << endl;
}

sbs_grafico::~sbs_grafico() {

	cout << "destruindo display " << this << endl;
	if(subject != nullptr) {
		cout << "saindo da estacao " << subject <<endl;
		subject->removeObserver(this);
	}

	cout << "display " << this <<" destruido" << endl;
}

void sbs_grafico::subscribe_to(ab_subject *s)
{
	this->subject = s;
	cout << "registrando " << this << " no subscriber " << s << endl;
	s->insertObserver(this);
}

void sbs_grafico::unsubscribe_to(ab_subject *s)
{
	this->subject = nullptr;
	cout << "removendo " << this << " do subscriber " << s << endl;
	s->removeObserver(this);
}

void sbs_grafico::update(int i) {

	temp = i;
	cout << "atualizando display grafico de "<< this <<" com valor " << temp << endl;
}
