#ifndef Struthio_Camelus_h
#define Struthio_Camelus_h
#include "Struthioniformes.h"

class Struthio_Camelus : public Struthioniformes {
public:
	/* Конструктор */
	Struthio_Camelus() {}
	/* Методы */
    void lay_egg();
    void voice();
	/* Свойства */
	double get_weight() const;
	double get_size_egg() const;
	void print();
	char * type() const;
};

#endif // Struthio_Camelus_h
