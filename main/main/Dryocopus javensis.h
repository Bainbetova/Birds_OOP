#ifndef Dryocopus_javensis_h
#define Dryocopus_javensis_h
#include "Dryocopus.h"

class Dryocopus_javensis : public Dryocopus {
public:
	/* ����������� */
	Dryocopus_javensis() {}
	/*������*/
    void voice();
    void fly();
	/*��������*/
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Dryocopus javensis_h
