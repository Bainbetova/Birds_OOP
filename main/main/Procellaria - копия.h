#ifndef Procellaria_h
#define Procellaria_h

#include "Puffininae.h"


class Procellaria : public Puffininae {

 public:

    virtual void fly();

    virtual void voice();

 public:
    double lenght_beak;
};

#endif // Procellaria_h
