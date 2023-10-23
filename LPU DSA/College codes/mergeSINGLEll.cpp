#include <iostream>
using namespace std;

struct Link {
    int data;
    struct Link* next;
};

void create(struct Link*& start, struct Link*& current, int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        struct Link* node = new Link;
        cin >> node->data;
        node->next = NULL;
        if (start == NULL) {
            start = node;
            current = node;
        } else {
            current->next = node;
            current = node;
        }
    }
}

void display(struct Link* start) {
    struct Link* ptr = start;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

struct Link* merge(struct Link* list1, struct Link* list2) {
    struct Link* mergedList = NULL;
    struct Link* current = NULL;

    while (list1 != NULL) {
        struct Link* newNode = new Link;
        newNode->data = list1->data;
        newNode->next = NULL;

        if (mergedList == NULL) {
            mergedList = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }

        list1 = list1->next;
    }

    while (list2 != NULL) {
        struct Link* newNode = new Link;
        newNode->data = list2->data;
        newNode->next = NULL;

        if (mergedList == NULL) {
            mergedList = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }

        list2 = list2->next;
    }

    return mergedList;
}

int main() {
    struct Link* start1 = NULL;
    struct Link* current1 = NULL;
    struct Link* start2 = NULL;
    struct Link* current2 = NULL;

    int n1, n2;
    cout << "Enter the number of elements for the first list: ";
    cin >> n1;
    create(start1, current1, n1);

    cout << "Enter the number of elements for the second list: ";
    cin >> n2;
    create(start2, current2, n2);

    struct Link* mergedList = merge(start1, start2);

    cout << "Merged list: ";
    display(mergedList);

    return 0;
}

