#ifndef Phalcoboenus_h
#define Phalcoboenus_h
#include "Falconidae.h"

class Phalcoboenus : public Falconidae {
public:
	/*Конструктор*/
	Phalcoboenus() {}
    void fly();
    void spread_wings();
    void voice();
	/*Свойства*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Phalcoboenus_h
