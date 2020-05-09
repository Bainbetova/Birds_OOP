#ifndef Ictinaetus_h
#define Ictinaetus_h

#include "Aquilinae.h"

class Ictinaetus : public Aquilinae {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 80;
};

#endif // Ictinaetus_h
