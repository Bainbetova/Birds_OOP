#ifndef Cuculiformes_h
#define Cuculiformes_h

#include "Fly.h"
#include "Neognathae.h"


class Cuculiformes : public Neognathae, virtual public Fly {

 public:

    virtual void fly();

    virtual void lay_egg();

    virtual void buail_nest();

    virtual void voice();
};

#endif // Cuculiformes_h
