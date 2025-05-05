#include <vector>
#include <iostream>  
using namespace std;

const char* szHW = "Hello World";

int main(int argc, char* argv[])
{
    vector<char> vec;
    vector<char>::iterator vi;
    const char* cptr = szHW;

    while (*cptr != '\0') {  
        vec.push_back(*cptr);  
        cptr++;  
    }
    for (vi=vec.begin(); vi!=vec.end(); vi++) {  
        cout << *vi;  
    }
    cout << endl;
    return 0;
}