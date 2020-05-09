#ifndef Falconiformes_h
#define Falconiformes_h
#include "Fly.h"
#include "Neognathae.h"
/* Соколообразные */
class Falconiformes : public Neognathae, virtual public Fly {
public:
	/* Метод */
    void spread_wings();
};

#endif // Falconiformes_h
