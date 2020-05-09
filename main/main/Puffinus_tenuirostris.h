#ifndef Puffinus_tenuirostris_h
#define Puffinus_tenuirostris_h
#include "Puffinus.h"

class Puffinus_tenuirostris : public Puffinus {
public:
	/* Конструктор */
	Puffinus_tenuirostris() {}
    void fly();
    void voice();
	/*Свойства*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Puffinus_tenuirostris_h
