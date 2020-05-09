#ifndef Falco_peregrinus_h
#define Falco_peregrinus_h

#include "Falco.h"

class Falco_peregrinus : public Falco {

 public:

    virtual void spread_wings();

    virtual void voice();

    virtual void fly();

 public:
    double wingspan = 120;
};

#endif // Falco_peregrinus_h
