#ifndef Procellaria_h
#define Procellaria_h
#include "Puffininae.h"

class Procellaria : public Puffininae {
public:
	/*�����������*/
	Procellaria() {}
    void fly();
    void voice();
	/*��������*/
	double get_lenght_beak() const;
	void print();
	char * type() const;
};

#endif // Procellaria_h
