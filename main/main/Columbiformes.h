#ifndef Columbiformes_h
#define Columbiformes_h
#include "Neognathae.h"
/* ������������� */
class Columbiformes : public Neognathae {
public:
	/* ����������� */
	Columbiformes() {}
	/* ����� �*/
    void fly();
    void peck();
    void voice();
	double get_weight() const;
	char * type() const;
};

#endif // Columbiformes_h
