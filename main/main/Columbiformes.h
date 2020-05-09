#ifndef Columbiformes_h
#define Columbiformes_h
#include "Neognathae.h"
/* Голубеобразне */
class Columbiformes : public Neognathae {
public:
	/* Конструктор */
	Columbiformes() {}
	/* Метод ы*/
    void fly();
    void peck();
    void voice();
	double get_weight() const;
	char * type() const;
};

#endif // Columbiformes_h
