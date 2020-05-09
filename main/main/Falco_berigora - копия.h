#ifndef Falco_berigora_h
#define Falco_berigora_h

#include "Falco.h"


class Falco_berigora : public Falco {

 public:

    virtual void spread_wings();

    virtual void voice();

    virtual void fly();

 public:
    double wingspan = 80;
};

#endif // Falco_berigora_h
