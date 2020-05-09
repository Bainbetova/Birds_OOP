#ifndef Galliformes_h
#define Galliformes_h
#include "Fly.h"
#include "Neognathae.h"
/* Курообразные */
class Galliformes : public Neognathae, virtual public Fly {
public:
	/* Конструктор */
	Galliformes() {}
	/* Методы */
    void lay_egg();
    void voice();
	double get_weight() const;
	char * type() const;
};

#endif // Galliformes_h
