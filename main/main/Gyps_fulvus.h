#ifndef Gyps_fulvus_h
#define Gyps_fulvus_h
#include "Gyps.h"

class Gyps_fulvus : public Gyps {
public:
	/* ����������� */
	Gyps_fulvus() {}
    void fly();
    void spread_wings();
    void voice();
	/*��������*/
	double get_wingspan() const;
	void print();
	char * type() const;
};

#endif // Gyps_fulvus_h
