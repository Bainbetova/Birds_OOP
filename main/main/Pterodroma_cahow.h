#ifndef Pterodroma_cahow_h
#define Pterodroma_cahow_h
#include "Pterodroma.h"

class Pterodroma_cahow : public Pterodroma {
public:
	/* Конструктор */
	Pterodroma_cahow() {}
    void fly();
    void voice();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Pterodroma_cahow_h
