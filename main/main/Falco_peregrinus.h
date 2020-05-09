#ifndef Falco_peregrinus_h
#define Falco_peregrinus_h
#include "Falco.h"

class Falco_peregrinus : public Falco {
public:
	/* Конструктор */
	Falco_peregrinus() {}
	/* Методы */
    void spread_wings();
    void voice();
    void fly();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Falco_peregrinus_h
