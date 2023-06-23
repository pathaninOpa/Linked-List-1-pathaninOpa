#include <iostream>
#include <string>
using namespace std;
class node {
private:
    int id;
    string name;
    node* next;

public:
    node(int id, string name) : id(id), name(name), next(nullptr) {}

    void print() {
      cout << "----------------------------------------\n";
      cout << "ID: " << id << ", Name: " << name << endl;
      cout << "----------------------------------------\n";
    }

    node* get_next() {
        return next;
    }

    void set_next(node* next_node) {
        next = next_node;
    }

    ~node() {
        cout << name << " deleted" << endl;
    }
};


