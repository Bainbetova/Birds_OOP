#ifndef Accipiter_striatus_h
#define Accipiter_striatus_h
#include "Accipiter.h"

class Accipiter_striatus : public Accipiter {
public:
	/* ����������� */
	Accipiter_striatus() {}
    void fly();
    void spread_wings();
	void voice();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Accipiter_striatus_h
