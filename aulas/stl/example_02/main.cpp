#include <string>
#include <set>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    set <string> strset;
    set <string>::iterator si;
    strset.insert("laranja");
    strset.insert("maça");
    strset.insert("limão");
    strset.insert("banana");
    strset.insert("uva");
    strset.insert("uva");  
    // This one overwrites the previous occurrence
    for (si=strset.begin(); si!=strset.end(); si++) {  
        cout << *si << " ";  
    }
    cout << endl;
    return 0;
}