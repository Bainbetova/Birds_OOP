#ifndef Fly_h
#define Fly_h

class Fly {
public:
	/* ����������� */
	Fly() {}
    virtual void fly()  = 0;
    // virtual destructor for interface 
    virtual ~Fly() { }
};

#endif // Fly_h
