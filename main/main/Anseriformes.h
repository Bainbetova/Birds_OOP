#ifndef Anseriformes_h
#define Anseriformes_h
#include "Neognathae.h"
#include <stdio.h>
/* ������������ */
class Anseriformes : public Neognathae {
public:
	/* ����������� */
	Anseriformes() {}
	/* ������ */
    void swim();
	void voice();
	double get_weight() const;
	char * type() const;
};

#endif // Anseriformes_h
