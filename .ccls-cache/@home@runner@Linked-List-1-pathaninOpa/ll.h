#include "node.h"
using namespace std;

class LL {
private:
    node* head;

public:
    LL() : head(nullptr) {}

    void insert_node(string name, int id) {
        node* new_node = new node(id, name);
        new_node->set_next(head);
        head = new_node;
    }

    void print_all() {
        node* current = head;
        while (current != nullptr) {
            current->print();
            current = current->get_next();
        }
    }

    ~LL() {
        node* current = head;
        while (current != nullptr) {
            node* temp = current;
            current = current->get_next();
            delete temp;
        }
    }
};
