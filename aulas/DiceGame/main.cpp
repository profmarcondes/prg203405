#include <iostream>
#include <cstdlib>

using namespace std;

class Die {
public:
    Die(){
        srand(time(NULL));
        roll();
    }
    int getFaceValue() { return _faceValue; }

    void roll() {
        _faceValue = rand() % 6 + 1;
        //std::default_random_engine generator;
        //std::uniform_int_distribution<int> distribution(1,6);
        //int dice_roll = distribution(generator);
    }
private:
    int _faceValue;
};

class DiceGame{
public:
    bool play(){
        _d1.roll();
        _d2.roll();
        cout << "d1-> " << _d1.getFaceValue();
        cout << ", d2-> " << _d2.getFaceValue();
        cout << endl;

        if ( (_d1.getFaceValue() + _d2.getFaceValue()) == 7 ){
            return true;
        } else {
            return false;
        }
    }

private:
    Die _d1;
    Die _d2;

};

int main()
{
    cout << "Hello World!" << endl;

    DiceGame jogo;
    int wins = 0;
    int times = 1000;

    for(int i = 0; i < times; i++){
        cout << "Play " << i << endl;
        if(jogo.play()){
            cout << "Você ganhou!" << endl;
            wins++;
        } else {
            cout << "Você perdeu!" << endl;
        }

    }

    cout << "Wins = " << wins << endl;
    cout << "Percentage = " << wins/(double)times << endl;

    return 0;
}
