#ifndef DIE_H
#define DIE_H

class Die {

public:
    Die();
    int getFaceValue();
    void roll();

private:
    int faceValue;

};

#endif