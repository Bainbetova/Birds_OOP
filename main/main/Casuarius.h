#ifndef Casuarius_h
#define Casuarius_h
#include "Casuariiformes.h"

class Casuarius : public Casuariiformes {	
public:
	/* Конструктор */
	Casuarius() {}
	/* Метод */
    void voice();
	/*Свойства*/
	double get_weight() const;
	double get_size_egg() const;
	void print();
	char * type() const;
};

#endif // Casuarius_h
