#ifndef Fulmarus_h
#define Fulmarus_h

#include "Fulmarinae.h"


class Fulmarus : public Fulmarinae {

 public:

    virtual void fly();

	virtual void voice();

 public:
    double lenght_beak = 3;
};

#endif // Fulmarus_h
