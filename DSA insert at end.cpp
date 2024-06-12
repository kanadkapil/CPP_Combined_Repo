#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
//	Node(float val)=data(val),next(NULL);
	
} *head;

void insert_at_end(Node* &first, int val){
	Node* ptr = new Node;
	ptr->data=val;
	ptr->next=NULL;
	

	if(first==NULL)
		{
			first=ptr;
			return;
		}
		
	Node * cn = first;
		{
			while(cn->next!=NULL)
			{
				cn = cn->next;
			}
		}

		cn->next = ptr;
}

void insert_at_beg(Node* head, int val)
{
	Node* ptr = new Node;
	ptr->data=val;
	ptr->next=head;
	head = ptr;	
	
}

void display(Node *p){
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}

int main(){
	head=NULL;
	int num, val;
	cout<<"Enter the number of elements"<<endl;
	cin>>num;
	
	cout<<"Enter elements for the list: ";
	for(int i=0;i<num;i++){
		cin>>val;
		insert_at_end(head, val);
	}
	display(head);
	cout<<endl;
	
	int nu;
	cout<<"Enter the number of elements"<<endl;
	cin>>nu;
	cout<<"Enter elements for the list: ";
	for(int i=0;i<num;i++){
		int va;
		cin>>va;
		insert_at_beg(head, val);
	}
	display(head);

	
	

	return 0;
}
