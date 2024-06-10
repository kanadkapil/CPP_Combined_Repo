#include<iostream>

using namespace std;
/*

int main()
{
    int i, j , k = 1, n;
    cout<<"Enter no of rows";
    cin>>n;
    for(i = 0; i<=n; i++){
        for(j = 1; j<=i ; j++)
        {
            cout<<k;
        }
        k++;
        cout<<endl;
    }
    return 0;
}



int main(){
    int i, j;
    char alpha
    cout<<"Enter the word";
    cin>>n;
    for(i= a; i<=z;i++){
        for(j=b;j<=i;j++){
            cout<<k;
        }
        k++;
        cout<<endl;
    }
    return 0;
        }
    
*/
void test(int x){
    try
    {
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if(x== -1) throw 1.0;
        cout<<"End of tru block";
    }
    catch(char c)
    {
        cout<<"caught a charecter";
    }
    catch(int m)
    {
        cout<<"caught an integer";
    }
    catch(double)
    {
        cout<<"caught a double";
    }
}
int main(){
    cout<<"testing multiple catches";
    cout<<"x==1";
    Test(1);
    cout<<"x==0";
    Test(0);
    cout<<"x==-1";
    Test(-1);
    cout<<"x==2";
    Test(2);
    return 0;
}