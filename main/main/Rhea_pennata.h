#ifndef Rhea_pennata_h
#define Rhea_pennata_h
#include "Rheiformes.h"

class Rhea_pennata : public Rheiformes {
public:
	 /* Конструктор */
	 Rhea_pennata() {}
	 void voice();
	 /* Свойства */
	 double get_weight() const;
	 double get_size_egg() const;
	 void print();
	 char * type() const;
};

#endif // Rhea_pennata_h
