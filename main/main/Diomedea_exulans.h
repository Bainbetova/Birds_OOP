#ifndef Diomedea_exulans_h
#define Diomedea_exulans_h
#include "Diomedeidae.h"

class Diomedea_exulans : public Diomedeidae {
public:
	/* ����������� */
	Diomedea_exulans() {}
	/* ������ */
    void voice();
    void fly();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_exulans_h
