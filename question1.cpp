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

// function for inserting node at the position with respect to the data
	void insertat (int pos, int value) {
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
	}
//function to show
	void display() {
		node *temp = new node;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
//function to delete
	void delete_last() {
		node *previous = new node;
		node *current = new node;
		while(current->next != NULL) {
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}
	void delete_pos(int pos) {
		node *previous = new node;
		node *current = new node;
		current = head;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete current;
	}
// function to count
void count(){
node *temp= head;
int x;
x=0;
whlie(temp != NULL){
temp = temp -> next
x=x++;
	}
}
};

int main() {


	return 0;
}

