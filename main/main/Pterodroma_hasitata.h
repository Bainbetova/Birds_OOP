#ifndef Pterodroma_hasitata_h
#define Pterodroma_hasitata_h
#include "Pterodroma.h"

class Pterodroma_hasitata : public Pterodroma {
public:
	/* Конструткор */
	Pterodroma_hasitata() {}
	/* Методы */
    void fly();
    void voice();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Pterodroma_hasitata_h
