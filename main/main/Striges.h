#ifndef Striges_h
#define Striges_h
#include "Fly.h"
#include "Neognathae.h"
/* ������������ */
class Striges : public Neognathae, virtual public Fly {
public:
	/* ����������� */
	Striges() {}
	/* ������ */
    void catch_mouse();
    void fly();
    void swim();
    void turn_head180();
    void voice();
	char * type() const;
};

#endif // Striges_h
