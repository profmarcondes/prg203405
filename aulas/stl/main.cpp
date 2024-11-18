#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

char* hello = "Hello World";

int main() {
    vector<char> vec;

    char* ptr = hello;

    while(*ptr != '\0'){
        vec.push_back(*ptr);
        ptr++;
    }

    for(auto vi=vec.begin(); vi != vec.end(); vi++){
        cout << *vi;
    }
    cout << endl;

    cout << "For ranged loop" << endl;
    for(auto a : vec){
        cout << a;
    }
    cout << endl;

    cout << "Lista de inteiros" << endl;
    for(auto a : { 1, 3, 56, 89 }){
        cout << a << " , ";
    }
    cout << endl;

    sort(vec.begin(), vec.end());
    for (auto c: vec){
        cout << c;
    }
    cout << endl;

    return 0;
}
