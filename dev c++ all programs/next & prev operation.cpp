#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector <int> v1 {10,20,30,40,50,60,70,80,90,100};

vector<int> :: iterator it1;

it1 = v1.begin();

vector<int> :: iterator it2 = next(it1,5);

cout << "it2 is now at element : " << *it2 << endl;

vector<int> :: iterator it3 = prev(it2,2);

cout << "it3 is now at element : " << *it3 << endl;

return 0;
}
