#ifndef Cuculiformes_h
#define Cuculiformes_h
#include "Fly.h"
#include "Neognathae.h"
/* ���������������� */
class Cuculiformes : public Neognathae, virtual public Fly {
public:
	/* ����������� */
	Cuculiformes() {}
	/* ������ */
    void fly();
    void lay_egg();
    void buail_nest();
	void voice();
	char * type() const;
};

#endif // Cuculiformes_h
