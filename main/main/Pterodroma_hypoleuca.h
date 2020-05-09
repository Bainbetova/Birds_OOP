#ifndef Pterodroma_hypoleuca_h
#define Pterodroma_hypoleuca_h
#include "Pterodroma.h"

class Pterodroma_hypoleuca : public Pterodroma {
public:
	/* Конструктор */
	Pterodroma_hypoleuca() {}
    void fly();
    void voice();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Pterodroma_hypoleuca_h
