#ifndef Gyps_africanus_h
#define Gyps_africanus_h

#include "Gyps.h"
#include "stdafx.h"

class Gyps_africanus : public Gyps {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 120;

};

#endif // Gyps_africanus_h
