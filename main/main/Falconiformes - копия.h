#ifndef Falconiformes_h
#define Falconiformes_h

#include "Fly.h"
#include "Neognathae.h"


class Falconiformes : public Neognathae, virtual public Fly {

 public:

    virtual void spread_wings();
};

#endif // Falconiformes_h
