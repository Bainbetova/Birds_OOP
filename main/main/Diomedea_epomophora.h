#ifndef Diomedea_epomophora_h
#define Diomedea_epomophora_h
#include "Diomedeidae.h"

class Diomedea_epomophora : public Diomedeidae {
public:
	/* ����������� */
	Diomedea_epomophora() {}
	/* ������ */
    void voice();
    void fly();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_epomophora_h
