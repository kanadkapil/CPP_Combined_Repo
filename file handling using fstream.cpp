#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file;
	file.open("Esther.txt",ios::out);
	cout<<file.tellp()<<endl;
	file<<"This is the best food I've eaten today";
		file.seekg(7,ios::beg);
		file<<" not the";
	cout<<file.tellp()<<endl;
	file.close();
	return 0;
}
