#ifndef Diomedea_epomophora_h
#define Diomedea_epomophora_h
#include "Diomedeidae.h"

class Diomedea_epomophora : public Diomedeidae {
public:
	/* Конструктор */
	Diomedea_epomophora() {}
	/* Методы */
    void voice();
    void fly();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_epomophora_h
