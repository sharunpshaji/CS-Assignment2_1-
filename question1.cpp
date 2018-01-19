#include <iostream>
using namespace std;
// making class node

struct node
{
public:
	int data;
	node *next;
};

// maikng another class linked list
class linked_list {
private:
	node *head, *tail;
public:
	linked_list() {
		head = NULL;
		tail = NULL;
	}
// function to add node
void insert(int n) {
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	};
// function for inserting node at the position with respect to the data
	void insertat(int pos, int value) {
		node *previous = new node;
		node *current = new node;
		node *temp = new node;
		current = head;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = temp;
		temp->data = value;
		temp->next = current;
	};
//function to show
	void show() {
		node *temp = new node;
		temp = head;
		while (temp != NULL) {
			cout<< "->" << temp->data <<endl ;
			temp = temp->next;
		}
	};
// function to delete
	void delete() {
		node *previous = new node;
		node *current = new node;
		while(current->next != NULL) {
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	};
	// function to delete from the given position
	void deleteat(int pos) {
		node *previous = new node;
		node *current = new node;
		current = head;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete current;
	};
	// function to count the number of elements
	void count(){
	int x;
	x=0;
	node *temp = new node;
	temp = head;
	while(temp!=tail){
	temp = temp->next;
	x=x++;
	}
	cout<<"There are "<<x<<" nuumber of elements in the linked list"<<endl;
	};
};

int main() {
	linked_list firstNode;
	firstNode.insert(4);
	firstNode.insert(6);
	firstNode.insert(3);
	firstNode.insertat(3,5);
	firstNode.show();
	cout<<endl;
	firstNode.count();
	cout << endl;
	return 0;
}


