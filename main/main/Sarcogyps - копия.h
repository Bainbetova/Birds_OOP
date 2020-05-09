#ifndef Sarcogyps_h
#define Sarcogyps_h

#include "Accipitrinae.h"


class Sarcogyps : public Accipitrinae {

 public:

    virtual void fly();

    virtual void spread_wings();

    virtual void voice();

 public:
    double wingspan = 150;
};

#endif // Sarcogyps_h
