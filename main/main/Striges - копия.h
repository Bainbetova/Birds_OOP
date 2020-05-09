#ifndef Striges_h
#define Striges_h

#include "Fly.h"
#include "Neognathae.h"


class Striges : public Neognathae, virtual public Fly {

 public:

    virtual void catch_mouse();

    virtual void fly();

    virtual void swim();

    virtual void turn_head180();

    virtual void voice();
};

#endif // Striges_h
