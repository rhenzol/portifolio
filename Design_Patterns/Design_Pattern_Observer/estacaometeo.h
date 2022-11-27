/*
 * estacaometeo.h
 *
 *  Created on: 6 de nov. de 2022
 *      Author: Rhenzo Losso
 */

#ifndef ESTACAOMETEO_H_
#define ESTACAOMETEO_H_

#include "absubject.h"

class estacao_meteo: public ab_subject {
private:
	int temp;
public:
	estacao_meteo();
	~estacao_meteo();
	void set_temp(int temp);
	void fecha_estacao();
};

#endif /* ESTACAOMETEO_H_ */
