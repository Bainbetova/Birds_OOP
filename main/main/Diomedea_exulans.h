#ifndef Diomedea_exulans_h
#define Diomedea_exulans_h
#include "Diomedeidae.h"

class Diomedea_exulans : public Diomedeidae {
public:
	/* Конструктор */
	Diomedea_exulans() {}
	/* Методы */
    void voice();
    void fly();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_exulans_h
