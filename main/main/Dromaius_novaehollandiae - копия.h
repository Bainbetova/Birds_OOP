#ifndef Dromaius_novaehollandiae_h
#define Dromaius_novaehollandiae_h

#include "Casuariiformes.h"


class Dromaius_novaehollandiae : public Casuariiformes {

 public:

    virtual void voice();

    virtual void go_ahead();

 public:
    double size_egg = 10;
};

#endif // Dromaius_novaehollandiae_h
