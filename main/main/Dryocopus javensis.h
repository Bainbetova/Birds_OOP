#ifndef Dryocopus_javensis_h
#define Dryocopus_javensis_h
#include "Dryocopus.h"

class Dryocopus_javensis : public Dryocopus {
public:
	/* Конструктор */
	Dryocopus_javensis() {}
	/*Методы*/
    void voice();
    void fly();
	/*Свойства*/
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Dryocopus javensis_h
