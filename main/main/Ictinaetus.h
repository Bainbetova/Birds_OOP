#ifndef Ictinaetus_h
#define Ictinaetus_h
#include "Aquilinae.h"

class Ictinaetus : public Aquilinae {
public:
	/* ����������� */
	Ictinaetus() {}
    void fly();
    void spread_wings();
    void voice();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Ictinaetus_h
