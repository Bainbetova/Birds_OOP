#ifndef Fulmarus_h
#define Fulmarus_h
#include "Fulmarinae.h"

class Fulmarus : public Fulmarinae {
public:
	/* Конструктор */
	Fulmarus() {}
	/* Методы */
    void fly();
	void voice();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Fulmarus_h
