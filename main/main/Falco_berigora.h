#ifndef Falco_berigora_h
#define Falco_berigora_h
#include "Falco.h"

class Falco_berigora : public Falco {
public:
	/* ����������� */
	Falco_berigora() {}
	/* ������ */
    void spread_wings();
    void voice();
    void fly();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Falco_berigora_h
