#include <iostream>
using namespace std;

struct node{
	int info;
	node *next;
	node *prev;
	
}*ptr, *newptr, *start, *np, *save;

node *create_node(int n);
void insert_at_beg(node *np);
void display_LL(node *n);


int main(){
int inf;
char ch;

start=NULL;

//while(ch=='y'){

cout<<"Enter the element to be inserted"<<endl;
cin>>inf;
newptr = create_node(inf);

insert_at_beg(newptr);
if(newptr==NULL){
	cout<<"Node not successfully created"<<endl;
}
else{
cout<<"Node successfully created"<<endl;
}

insert_at_beg(newptr);
cout<<"Node successfully inserted at beginning."<<endl;	
cout<<"The elements are: "<<endl;
display_LL(start);

cout<<"Do you want to add a new node?"<<endl;
cin>>ch;

//if(ch!='y'){
//	break;
//}



return 0;	
}

node *create_node(int n){
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	ptr->prev=NULL;	
	return ptr;
}

void insert_at_beg(node *np){
	
if(start==NULL){
	start=np;
}
//save=start;   This command is for single LL
start->prev=np;
np->next=start;
start=np;

}


void display_LL(node *n){
	
while(n!=NULL){
	cout<<n->info<<endl;
	n=n->next;
}	
		
}
