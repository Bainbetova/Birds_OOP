#ifndef Aquila_nipalensis_h
#define Aquila_nipalensis_h
#include "Aquila.h"

class Aquila_nipalensis : public Aquila {
public:
	/* ����������� */
	Aquila_nipalensis() {}
	/* ������ */
    void fly();
    void spread_wings();
    void voice();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Aquila_nipalensis_h
