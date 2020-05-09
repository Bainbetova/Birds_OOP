#ifndef Gyps_himalayensis_h
#define Gyps_himalayensis_h

#include "Gyps.h"


class Gyps_himalayensis : public Gyps {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 280;
};

#endif // Gyps_himalayensis_h
