#ifndef Passeriformes_h
#define Passeriformes_h
#include "Neognathae.h"
/* ����������������� */
class Passeriformes : public Neognathae {
public:
	/*�����������*/
	Passeriformes() {}
	/* ������ */
    void fly();
    void voice();
    void jump();
	double get_weight() const;
	char * type() const; // { return "Passeriformes"; }
};

#endif // Passeriformes_h
