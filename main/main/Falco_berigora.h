#ifndef Falco_berigora_h
#define Falco_berigora_h
#include "Falco.h"

class Falco_berigora : public Falco {
public:
	/* Конструктор */
	Falco_berigora() {}
	/* Методы */
    void spread_wings();
    void voice();
    void fly();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Falco_berigora_h
