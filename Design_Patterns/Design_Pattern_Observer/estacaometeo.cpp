/*
 * estacaometeo.cpp
 *
 *  Created on: 6 de nov. de 2022
 *      Author: admin
 */

#include "estacaometeo.h"

estacao_meteo::estacao_meteo() :temp(0) {
	cout << "criando estacao " << this << endl;
}

estacao_meteo::~estacao_meteo() {
	// TODO Auto-generated destructor stub
	cout << "destruindo estacao " << this << endl;
}

void estacao_meteo::set_temp(int temp)
{
	cout << "mudanca de temp detectada para " << temp <<endl;
	this->temp = temp;

	cout << "notificando subscribers..." << endl;
	this->notifyObserver(temp);
}

void estacao_meteo::fecha_estacao()
{
	this->end_subscription();
}

