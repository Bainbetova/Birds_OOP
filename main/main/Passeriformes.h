#ifndef Passeriformes_h
#define Passeriformes_h
#include "Neognathae.h"
/* Воробьинообразные */
class Passeriformes : public Neognathae {
public:
	/*Конструктор*/
	Passeriformes() {}
	/* Методы */
    void fly();
    void voice();
    void jump();
	double get_weight() const;
	char * type() const; // { return "Passeriformes"; }
};

#endif // Passeriformes_h
