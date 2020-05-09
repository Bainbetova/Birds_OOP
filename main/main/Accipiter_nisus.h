#ifndef Accipiter_nisus_h
#define Accipiter_nisus_h
#include "Accipiter.h"

class Accipiter_nisus : public Accipiter {
public:
	/* Конструктор */
	 Accipiter_nisus() {}
	/* Методы */
    void fly();
    void spread_wings();
	void voice(); 
	/* Свойства */
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Accipiter_nisus_h
