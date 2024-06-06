#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string s;
    ofstream file("est.txt");
    file<<"Hey, I love cats. \n What about you? \n Cat or dog person?";
    file.close();
    ifstream mfile("est.txt");
    while(getline(mfile,s))
    cout<<s<<endl;
    mfile.close();
    return 0;
}
