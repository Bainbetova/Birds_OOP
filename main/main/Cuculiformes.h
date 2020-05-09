#ifndef Cuculiformes_h
#define Cuculiformes_h
#include "Fly.h"
#include "Neognathae.h"
/* Куккушкообразыне */
class Cuculiformes : public Neognathae, virtual public Fly {
public:
	/* Конструктор */
	Cuculiformes() {}
	/* Методы */
    void fly();
    void lay_egg();
    void buail_nest();
	void voice();
	char * type() const;
};

#endif // Cuculiformes_h
