#ifndef Puffinus_griseus_h
#define Puffinus_griseus_h
#include "Puffinus.h"

class Puffinus_griseus : public Puffinus {
public:
	/* ����������� */
	Puffinus_griseus() {}
    void fly();
    void voice();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Puffinus_griseus_h
