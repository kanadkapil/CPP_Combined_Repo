#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;	
	Node* previous;
};

void printList(Node* n){
while(n!=NULL)	{
	cout<<n->data<<endl;
	n=n->previous;
}
}

int main(){
	
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	
	head->data=1;
	head->next=second;
	head->previous=NULL;
	
	second->data=2;
	second->next=third;
	second->previous=head;
	
	third->data=3;
	third->next=head;
	third->previous=second;
	
	printList(third);
	return 0;
}
