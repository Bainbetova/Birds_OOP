#ifndef Piciformes_h
#define Piciformes_h
#include "Fly.h"
#include "Neognathae.h"
/* ������������� */
class Piciformes : public Neognathae, virtual public Fly {
public:
	/* ����� */
    void knock();
};

#endif // Piciformes_h
