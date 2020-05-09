#ifndef Accipiter_gundlachi_h
#define Accipiter_gundlachi_h

#include "Accipiter.h"

class Accipiter_gundlachi : public Accipiter {
public:
	 /* Конструктор */
	Accipiter_gundlachi() {}
	/* Методы */
    void fly();
    void spread_wings();
	void voice();
	/* Свойства */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Accipiter_gundlachi_h
