#ifndef Diomedea_amsterdamensis_h
#define Diomedea_amsterdamensis_h
#include "Diomedeidae.h"

class Diomedea_amsterdamensis : public Diomedeidae {
public:
	/* ����������� */
	Diomedea_amsterdamensis() {}
	/*������*/
    void voice();
    void fly();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Diomedea_amsterdamensis_h
