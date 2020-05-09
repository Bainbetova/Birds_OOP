#ifndef Phalcoboenus_h
#define Phalcoboenus_h

#include "Falconidae.h"

class Phalcoboenus : public Falconidae {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 60;
};

#endif // Phalcoboenus_h
