#ifndef Galliformes_h
#define Galliformes_h

#include "Fly.h"
#include "Neognathae.h"


class Galliformes : public Neognathae, virtual public Fly {

 public:

    virtual void lay_egg();

    virtual void voice();
};

#endif // Galliformes_h
