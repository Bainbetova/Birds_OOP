#ifndef Piciformes_h
#define Piciformes_h
#include "Fly.h"
#include "Neognathae.h"
/* Дятлообразные */
class Piciformes : public Neognathae, virtual public Fly {
public:
	/* Метод */
    void knock();
};

#endif // Piciformes_h
