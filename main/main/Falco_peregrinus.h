#ifndef Falco_peregrinus_h
#define Falco_peregrinus_h
#include "Falco.h"

class Falco_peregrinus : public Falco {
public:
	/* ����������� */
	Falco_peregrinus() {}
	/* ������ */
    void spread_wings();
    void voice();
    void fly();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Falco_peregrinus_h
