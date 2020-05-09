#ifndef Apteryx_australis_h
#define Apteryx_australis_h
#include <stdio.h>

class Apteryx_australis : public Apterygiformes {
public:
	/* Конструктор */
	Apteryx_australis() {}
	/*Методы*/
	void voice();
	/*Свойства*/
	double get_weight() const;
	double get_size_egg() const;
	void print();
	char * type() const;
};

#endif // Apteryx_australis_h
