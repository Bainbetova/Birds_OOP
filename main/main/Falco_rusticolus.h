#ifndef Falco_rusticolus_h
#define Falco_rusticolus_h
#include "Falco.h"

class Falco_rusticolus : public Falco {
public:
	/* Конструктор */
	Falco_rusticolus() {}
	/* Методы */
    void spread_wings();
    void voice();
    void fly();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Falco_rusticolus_h
