//============================================================================
// Name        : design_patterns_observer.cpp
// Author      : Rhenzo Losso
// Version     :
// Copyright   : 
// Description : Small project of a weather station data multi displaying. This
//               Project was implemented using Observed Design pattern.
//============================================================================

#include "estacaometeo.h"
#include "sbsgrafico.h"

#include <iostream>
using namespace std;

int main() {
	estacao_meteo estacao;
	sbs_grafico display1,display3,display4;

	display1.subscribe_to(&estacao);
	display3.subscribe_to(&estacao);
	display4.subscribe_to(&estacao);
	estacao.set_temp(30);
	display3.unsubscribe_to(&estacao);
	display3.unsubscribe_to(&estacao);
	display3.unsubscribe_to(&estacao);

	return 0;
}
