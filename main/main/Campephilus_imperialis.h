#ifndef Campephilus_imperialis_h
#define Campephilus_imperialis_h
#include "Campephilus.h"

class Campephilus_imperialis : public Campephilus {
public:
	/*������*/
    void voice();
    void fly();
	/*��������*/
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Campephilus_imperialis_h
