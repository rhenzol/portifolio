/*
 * sbsgrafico.h
 *
 *  Created on: 6 de nov. de 2022
 *      Author: Rhenzo Losson
 */

#ifndef SBSGRAFICO_H_
#define SBSGRAFICO_H_

#include "abobserver.h"
#include "absubject.h"

class sbs_grafico: public ab_observer {
private:
	int temp;
	ab_subject *subject;
public:
	sbs_grafico();
	~sbs_grafico();
	void subscribe_to(ab_subject *s);
	void unsubscribe_to(ab_subject *s);
	void update(int i);
};

#endif /* SBSGRAFICO_H_ */
