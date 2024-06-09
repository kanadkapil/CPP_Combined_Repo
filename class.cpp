/*
Virtual Function
Rules:
Virtual function should be a member of class
virtual function  can not be static member;
virtual function can be featured of another clas
virtual function is base class, mut be 
virtual function must be fin 

#include<iostream>
using namespace std;
class Circle{
    int r, a;
    public:
    virtual void get();
    virtual void put();

};
class Rectangle: public Circle{
    int l, b, a;
    public:
    void get();
    void put();
};
void Circle:: get()
{
    cout<<"Enter Radius: ";
    cin>>r;
} 
void Circle :: put()
{
    a=3.14*r*r;
    cout<<a ;
}
void Rectangle :: get()
{
    cout<<"\nEnter Length  and  Breadth: ";
    cin>>l>>b;

} 
void Rectangle :: put()
{
    a = l*b;
    cout<<a;

}
int main()
{
    Circle *ptr;
    Circle obj;
    ptr=&obj;
    ptr->get();
    ptr->put();
    Rectangle obj1;
    ptr=&obj1;
    ptr->get();
    ptr->put();
    return 0;
}


#include<iostream>
using namespace std;
class Shape{
    public:
    float x, y;
    virtual void get();
    virtual void put();
};
class Triangle : public Shape{
    float a;
    public:
    void get();
    void put();
};
class Rectangle  : public Shape{
    float l ,b,a;
    public:
    void get();
    void put();
};
void Shape::get(){

}
void Shape :: put(){

}
void Triangle::get()
{
    cout<<"Enter base and height: ";
    cin>>x>>y;
}
void Triangle :: put(){
    a=(0.5)*x*y;
    cout<<a;
}
void Rectangle ::get(){
    cout<<"\nEnter Lenght and Breadth :";
    cin>>l>>b;
}
void Rectangle :: put(){
    a=l*b;
    cout<<a;
}


int main()
{
    Shape *ptr;
    Triangle obj;
    ptr = &obj;
    ptr->get();
    ptr->put();
    Rectangle obj1;
    ptr = &obj1;
    ptr->get();
    ptr->put();
    
    
    return 0;
} 


// A virtual fucntion which  is assigned value zero;
// a Virtual function that is declaredbut does not have defination;
// Class which contain pase virtual function is called abstract class,
// Class which does not contain  pase virtual function is called not pure function


#include<iostream>
using namespace std;
class x{
    public:
    virtual void get()=0;
    virtual void put();
};

class y:public x{
    int no;
    public:
    void get();
    void put();
};
class z: public y{
    int no1;
    public:
    void get();
    void put();
};
void x:: put(){

}
void y ::get(){
    cout<<"Enter the no";
    cin>>no;
}
void y::put(){
    cout<<no;
}
void z :: get(){
    cout<<"Enter Another No";
    cin>>no1;
}
void z :: put(){
    cout<<no1;
}
int main(){
    x *ptr;
    y obj;
    ptr = &obj;
    ptr->get();
    ptr->put();
    z obj1;
    ptr=&obj1;
    ptr->get();
    ptr->put();
    return 0;
}
*/



/*
int main()
{
   int k = 5, size  = 10;
   int hashtable[size];
   for(int i = 0 ; i < size; i++) hashtable[i]= -1;
   for(int i = 0 ; i < k ; i ++)
   {
    int key = 5;
    int index = key*key;
    while(index>=size)
    {
        index = index/10;
        if(index>= size)
        {
            int n ; 
            if(index > 1000) n = 1000;
            else if(index > 100) n = 100;
            else n = 10; 
            index = index %  n;

        }
    }
    if(hashtable[index] == -1)
        hashtable[index] = key;
    else
    {
        while(hashtable[index] != -1)
        {
            index++;
            if(index == 10) index = 0;
        }
        hashtable[index] = key;
    }
    cout<<"\nAddress of"<<key << " is : "<<index; 
   }
   
   
    return 0;
}
*/

/*
int main()
{
   int k = 5, size  = 10;
   int hashtable[size];
   for(int i = 0 ; i < size; i++) hashtable[i]= -1;
   for(int i = 0 ; i < k ; i ++)
   {
    int key = 5;
    int index = key*key;
    while(index>=size)
    {
        index = index/10;
        if(index>= size)
        {
            int n ; 
            if(index > 1000) n = 1000;
            else if(index > 100) n = 100;
            else n = 10; 
            index = index %  n;

        }
    }
    if(hashtable[index] == -1)
        hashtable[index] = key;
    else
    {   
        int i = 1, h = index;
        while(hashtable[index] != -1)
        {
                index = h + i * i;
                if(index > 9) index = index % 10;
                i++;
        }
        hashtable[index] = key;
    }
    cout<<"\nAddress of"<<key << " is : "<<index; 
   }
   
   
    return 0;
}
*/



        /*
#include<iostream>

using namespace std;

int main()
{
    int k = 5, size  = 10;
   int hashtable[size];
   for(int i = 0 ; i < size; i++) hashtable[i]= -1;
   for(int i = 0 ; i < k ; i ++)
   {
    int key = 5;
    int index = key % size;
    
    
    if(hashtable[index] == -1)
        hashtable[index] = key;
    else
    {   
        int i = 1, h = index;
        while(hashtable[index] != -1)
        {
                index++;
                if(index == 10) index = 0;
                
        }
        hashtable[index] = key;
    }
    
   }
   for(int i = 0;  i< 10; i ++){
    if(hashtable[i] != -1) 
    cout<<"\nIndex"<<i<< " : key = "<<hashtable[i]<<endl;
   }
   return 0;
   }
   */

   #include<iostream>
   
   using namespace std;
   struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
   };
   struct node *root = NULL;
   void insert(int data){
        struct node *tempNode = (struct node*)malloc(sizeof (struct node));
        struct node *current;
        struct node *parent;

        tempNode->data=data;
        tempNode->leftChild=NULL;
        tempNode->rightChild=NULL;

        if(root == NULL){
            root = tempNode;
        }
        else{
            current = root;
            parent = NULL;
            while(1){
                parent = current;
                if(data < parent->data)
                {
                    current=current->leftChild;
                    if(current == NULL){
                        parent->leftChild=tempNode;
                        return;
                    }
                }
                else{
                    current=current->rightChild;
                    if(current == NULL){
                        parent->rightChild=tempNode;
                        return;
                    }
                }
            }
        }
   }
   void inorder_traversal(struct node* root){
   if(root != NULL) {
      inorder_traversal(root->leftChild);
      printf("%d ",root->data);
      inorder_traversal(root->rightChild);
   }
}
   int main()
   {
       int i;
       int arr[7]={43,65,73,76,32,72,91};
       for(i=0;i<7;i++)
       insert(arr[i]);
       inorder_traversal(root);
       return 0;
   }
   
    
      
    



