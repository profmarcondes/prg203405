#ifndef DIE_H
#define DIE_H

class Die {
private:
    int _faceValue;

public:
	Die(unsigned int seed);
    int getFaceValue();
    void roll();

};


#endif // DIE_H