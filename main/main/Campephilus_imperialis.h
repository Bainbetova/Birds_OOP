#ifndef Campephilus_imperialis_h
#define Campephilus_imperialis_h
#include "Campephilus.h"

class Campephilus_imperialis : public Campephilus {
public:
	/*Ìועמהû*/
    void voice();
    void fly();
	/*Ñגמיסעגא*/
	int get_color() const;
	void print();
	char * type() const;
};

#endif // Campephilus_imperialis_h
