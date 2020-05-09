#ifndef Diomedea_amsterdamensis_h
#define Diomedea_amsterdamensis_h
#include "Diomedeidae.h"

class Diomedea_amsterdamensis : public Diomedeidae {
public:
	/* Конструктор */
	Diomedea_amsterdamensis() {}
	/*Методы*/
    void voice();
    void fly();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_amsterdamensis_h
