#include <iostream>
#include "ll.h"
using namespace std;

int main(int argc, char** argv) {
    LL l;

    for (int i = 1; i < argc; i+=2) {
        string name(argv[i]);
        l.insert_node(argv[i+1],atoi(argv[i]));
    }

    l.print_all();

    return 0;
}
