#ifndef Gyps_himalayensis_h
#define Gyps_himalayensis_h
#include "Gyps.h"

class Gyps_himalayensis : public Gyps {
public:
	/* Конструктор */
	Gyps_himalayensis() {}
    void fly();
    void spread_wings();
    void voice();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Gyps_himalayensis_h
