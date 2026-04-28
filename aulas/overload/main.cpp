#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Box {
	public:
		//Box(): Box(1.0,1.0,1.0) {}
		Box(double c = 1.0, double l = 1.0, double a = 1.0){
			comprimento = c;
			largura = l;
			altura = a;
		}

		double getVolume() const {
			return comprimento * largura * altura;
		}

		/*Box operator+(const Box &arg){
			Box retobj;
			retobj.comprimento = this->comprimento + arg.comprimento;
			retobj.largura = this->largura + arg.largura;
			retobj.altura = this->altura + arg.altura;

			return retobj;
		}*/

		bool operator<(const Box &arg){
			return ( this->getVolume() < arg.getVolume() );
		}

		friend Box operator+(const Box &arg1, const Box &arg2);
		friend ostream& operator<<(ostream &output, const Box &arg);

	private:
		double comprimento;
		double largura;
		double altura;

};

Box operator+(const Box &arg1, const Box &arg2){
	Box retObj;
	retObj.comprimento = arg1.comprimento + arg2.comprimento;
	retObj.largura = arg1.largura + arg2.largura;
	retObj.altura = arg1.altura + arg2.altura;
	return retObj;
}

ostream& operator<<(ostream &output, const Box &arg){
		output << "(" << &arg << ")";
		output << "-Box(" << arg.comprimento << ",";
		output << arg.largura << ",";
		output << arg.altura << "), volume = " << arg.getVolume();
		return output;
}

int main (int argc, char* argv[]) {
	cout << "Hello overload !" << endl;

	vector<Box> caixas;

	Box obj1;
	cout << obj1 << endl;
	Box obj2(3.4, 8.9, 5.21);
	cout << obj2 << endl;

	//cout << "Volume da caixa01 = " << obj1.getVolume() << endl;
	//cout << "Volume da caixa02 = " << obj2.getVolume() << endl;

	Box obj3;
	obj3 = obj1 + obj2; // obj3 = obj1.operator+(obj2);
	cout << obj3 << endl;
	//cout << "Volume da caixa03 = " << obj3.getVolume() << endl;

	caixas.push_back(obj3);
	caixas.push_back(obj1);
	caixas.push_back(obj2);

	cout << "==========================" << endl;
	for(auto obj: caixas){
		cout << obj << endl;
	}
	
	cout << "==========================" << endl;
	sort(caixas.begin(),caixas.end());
	
	cout << "==========================" << endl;
	for(auto obj: caixas){
		cout << obj << endl;
	}
	
	cout << "==========================" << endl;

	cout << caixas[2] << endl;
	obj3 = obj3 + Box(2.0,2.0,2.0);

	cout << obj3 << endl;
	cout << caixas[2] << endl;

	return 0;
}
