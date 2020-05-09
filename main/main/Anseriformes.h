#ifndef Anseriformes_h
#define Anseriformes_h
#include "Neognathae.h"
#include <stdio.h>
/* Гусеобразыне */
class Anseriformes : public Neognathae {
public:
	/* Конструктор */
	Anseriformes() {}
	/* Методы */
    void swim();
	void voice();
	double get_weight() const;
	char * type() const;
};

#endif // Anseriformes_h
