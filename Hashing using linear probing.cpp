// Division Method by Linear Probing
#include<iostream>
using namespace std;

int main()
{
int m;

cin >> m;
cout << "Size of the Hash Table: " << m << endl;

int hash_table[m];
int elements[m];

for(int i = 0; i < m; i++)
{
hash_table[i] = -1;
}

for(int i = 0; i < m; i++)
{
cin >> elements[i];
}

int mod;
for(int i = 0; i < m; i++)
{
mod = (elements[i] % m);
if(hash_table[mod] == -1)
{
hash_table[mod] = elements[i];
}
else
{
int count = (mod + 1);
while(count != mod)
{
if(count >= m)
{
count = count - m;
}

if(hash_table[count] == -1)
{
hash_table[count] = elements[i];
break;
}

count++;

}

}
}

cout << "Orignal Elements are: ";
for(int i = 0; i < m; i++)
{
cout << elements[i] << " ";
}

cout << endl;

cout << "Elements of Hash Table are: ";
for(int i = 0; i < m; i++)
{
cout << hash_table[i] << " ";
}

return 0;
}
