#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node{
	const char* element;
	Node* next;
	
	Node(const char * e = NULL, Node * n = NULL)
	{
		element = e;
		next = n;
	}
};

struct SLinkedList{
	Node * head;
	Node * tail;
	long size;
	SLinedList(){
		head = NULL;
		tail = NULL;
		size = 0;
}
	//A1
void addFirst(const char* s){
	head = new Node(s,head);
	if(tail == NULL) tail = head;
}	

void addLast(const char*s){
	Node *newNode = new Node(s,NULL);
	if(head == NULL) head = newNode;
	else tail->next = newNode;
	tail = newNode;
}

void print() {
        for(Node *p = head; p != NULL; p = p->next) {
            cout << p->element << ".";
        }
        cout << endl;
    }

	//A2
 const char* removeFirst() {
        if(head == NULL) {
            return NULL;
        }
        Node * oldHead = head;
        head = head->next;
        const char* oldElement = oldHead->element;
        delete oldHead;
        return oldElement;
    }
    //A3
void destructor(Node * node) {
        if(node != NULL){
            cout << node->element << endl;
            free(node->next);
            delete node;
        }
    }
 	//A4
 const char * removeLast() {
        Node * p = head;
        while(p->next != tail) {p = p->next;}
        const char * oldData = tail->element;
        delete tail;
        tail = p;
        tail->next = NULL;
        return oldData;
    }
};

int main()
{
    SLinkedList city;

    city.addFirst("Hanoi");
    city.print(); cout << endl;
    city.addFirst("TPHCM");
    city.print(); cout << endl;
    city.addLast("DaNang");
    city.print();

    const char * s = city.removeFirst();
    city.print(); 
    cout << s << endl;
	
	s = city.removeLast();
    city.print();
    cout << s << endl ;

    Node * node = city.head;

    return 0;
}
