#ifndef Ictinaetus_h
#define Ictinaetus_h
#include "Aquilinae.h"

class Ictinaetus : public Aquilinae {
public:
	/* Конструктор */
	Ictinaetus() {}
    void fly();
    void spread_wings();
    void voice();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Ictinaetus_h
