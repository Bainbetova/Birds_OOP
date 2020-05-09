#ifndef Aquila_nipalensis_h
#define Aquila_nipalensis_h
#include "Aquila.h"

class Aquila_nipalensis : public Aquila {
public:
	/* Конструктор */
	Aquila_nipalensis() {}
	/* Методы */
    void fly();
    void spread_wings();
    void voice();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Aquila_nipalensis_h
