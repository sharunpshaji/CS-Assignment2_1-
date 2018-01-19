#include <iostream>
using namespace std;
// making node
struct node {
int data;
node *next;
};
// maiking class linkedlist
class linkedlist{

private:
node *head , *tail;

public:
// assigning default value by means of constructer
linkedlist(){
head = NULL ;
tail = NULL;
}
// declaing member functions
void insert(int n);
void insertat(int p, int n);
void delet();
void deleteat(int p);
void count();
void show();
};

//function to add node at the end

void linkedlist::insert(int n){
node *temp = new node;
temp->data = n;
temp->next = NULL;
if (head == NULL){
    head = temp;
    tail = temp;
}
else{
        tail->next= temp;
        tail = temp;

}

}

// function to add an object at a given position

void linkedlist::insertat(int p, int n) {
		node *previous = new node;
		node *current = new node;
		node *temp = new node;
		current = head;
		for (int i = 1; i < p; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = temp;
		temp->data = n;
		temp->next = current;
	};




// function to delete the last element from the linked list

void linkedlist::delet(){
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

// function to delete an element at the given position

void linkedlist::deleteat(int p){
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

// to count the number of objects in the linked list

void linkedlist::count(){

    if(head == NULL){
        cout<<"There are 0 elements in the list";
    }
    else{
    int x;
    x=0;
    node *temp = new node;
    temp = head;
    while(temp!=NULL){
        temp = temp->next;
            x++;
            }
    cout<<"There are "<<x<<" elements in the list";
}
}

// function to show what is in the linked list

void linkedlist::show() {
if(head == NULL) {
    cout<<"There is nothing to show"<<endl;
}
else{
    node *temp = head;
    while(temp != NULL ){
        cout<<" -> "<<temp-> data<<" ";
        temp = temp->next;
    }

}
}

int main() {

    linkedlist a;
    a.insert (1);
    a.insert (2);
    a.show();
    cout<<endl;
    a.count();
return 0;
    }
