#ifndef Aquila_chrysaetos_h
#define Aquila_chrysaetos_h
#include "Aquila.h"

class Aquila_chrysaetos : public Aquila {
public:
	/* ����������� */
	Aquila_chrysaetos() {}
	/* ������ */
    void fly();
    void spread_wings();
    void voice();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Aquila_chrysaetos_h
