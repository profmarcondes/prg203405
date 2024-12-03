#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Box {
    public:
        Box(double len, double bre, double hei){
            _lenght = len;
            _breadth = bre;
            _height = hei;
        }
        Box(){
            _lenght = 1.0;
            _breadth = 1.0;
            _height = 1.0;
        }

        double lenght() { return _lenght; }
        double breadth() { return _breadth; }
        double height() { return _height; }

        double volume() const {
            return _lenght * _breadth * _height;
        }

        Box operator+(const Box &b){
            Box retBox;
            double finalVolume = this->volume() + b.volume();
            retBox._lenght = this->_lenght;
            retBox._breadth = this->_breadth;
            retBox._height = finalVolume / (this->_lenght * this->_breadth);
            return retBox;
        }

        bool operator<(const Box &b){
            return (this->volume() < b.volume());
        }

        friend ostream& operator<<(ostream &output, const Box &b){
            output << "Box(" << b._lenght << ",";
            output << b._breadth << "," << b._height << ") = ";
            output << b.volume();
            return output;
        }

    private:
        double _lenght;
        double _breadth;
        double _height;
};

int main() {

    cout << "Overload Example" << endl;

    vector<Box> caixas;

    Box box1(2.5, 6.0, 3.75);
    cout << box1 << endl;

    Box box2(5.0, 7.0, 10.0);
    cout << box2 << endl;

    Box box3;
    cout << box3 << endl;

    caixas.push_back(box1);
    caixas.push_back(box2);
    caixas.push_back(box3);

    cout << endl << "Sorting boxes" << endl;
    sort(caixas.begin(), caixas.end());

    for(auto box: caixas){
        cout << box << endl;
    }


    box3 = box1 + box2;
    cout << endl << "Caixa 3 somada" << endl;
    cout << box3 << endl << endl;


    for(auto box: caixas){
        cout << box << endl;
    }
    
    return 0;
}