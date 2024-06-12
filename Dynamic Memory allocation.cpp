//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int *p=new int;
////int *p=NULL;
////p=new int;
//if(!p)
//{
//    cout<<"\n Memory allocation failure 1";
//    exit(1);
//}
//if(p==NULL)
//{
//    cout<<"\n Memory allocation failure 2";
//    exit(1);
//}
//else
//cout<<"Successfully allocated";
//delete p;
//return 0;
//}

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

float *p=new float;
float *r=new float;
float *t=new float;
float *si=new float;
if(p==NULL||r==NULL||t==NULL||si==NULL)
{
    cout<<"Memory allocation failure";
    exit(1);
}
cout<<"Enter principle,rate and time:"<<endl;
cin>>*p>>*r>>*t;
*si=(0.01)*(*p)*(*r)*(*t);
cout<<endl<<"Simple interest is:"<<*si;
delete p;
delete r;
delete t;
delete si;
return 0;
}


