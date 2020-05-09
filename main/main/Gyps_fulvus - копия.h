#ifndef Gyps_fulvus_h
#define Gyps_fulvus_h

#include "Gyps.h"

class Gyps_fulvus : public Gyps {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 230;
};

#endif // Gyps_fulvus_h
