#ifndef Rhea_americana_h
#define Rhea_americana_h
#include "Rheiformes.h"

class Rhea_americana : public Rheiformes {
public:
	/* ����������� */
	Rhea_americana() {}
    void hatch_egg();
    void voice();
	/*��������*/
	double get_weight() const;
	double get_size_egg() const;
	void print();
	char * type() const;
};

#endif // Rhea americana_h
