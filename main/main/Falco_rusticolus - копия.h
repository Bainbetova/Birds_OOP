#ifndef Falco_rusticolus_h
#define Falco_rusticolus_h

#include "Falco.h"


class Falco_rusticolus : public Falco {

 public:

    virtual void spread_wings();

    virtual void voice();

    virtual void fly();

 public:
    double wingspan = 130;
};

#endif // Falco_rusticolus_h
