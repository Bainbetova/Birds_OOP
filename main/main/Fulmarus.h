#ifndef Fulmarus_h
#define Fulmarus_h
#include "Fulmarinae.h"

class Fulmarus : public Fulmarinae {
public:
	/* ����������� */
	Fulmarus() {}
	/* ������ */
    void fly();
	void voice();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Fulmarus_h
