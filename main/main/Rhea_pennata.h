#ifndef Rhea_pennata_h
#define Rhea_pennata_h
#include "Rheiformes.h"

class Rhea_pennata : public Rheiformes {
public:
	 /* ����������� */
	 Rhea_pennata() {}
	 void voice();
	 /* �������� */
	 double get_weight() const;
	 double get_size_egg() const;
	 void print();
	 char * type() const;
};

#endif // Rhea_pennata_h
