#include<iostream>
#include<fstream>

using namespace std;

struct Student {
int rollno;
string name;
};

int main() {

ofstream file("student.dat", ios::out | ios::binary);

if(!file) {
cout<<"File is not created successfully"<<endl;
return 0;
}

struct Student s1, s2, s3;
s1.rollno = 10001;
s1.name = "Vaibhav";

s2.rollno = 10002;
s2.name = "Vinay";

s3.rollno = 10003;
s3.name = "Ashray";

file.write((char *)&s1, sizeof(struct Student));
file.write((char *)&s2, sizeof(struct Student));
file.write((char *)&s3, sizeof(struct Student));

if(!file.good()) {
cout<<"Error occurred while writing into file"<<endl;
file.close();
return 1;
}

file.close();

ifstream file2;
file2.open("student.dat", ios::in | ios::binary);

if(!file2) {
cout<<"Error opening the file for reading"<<endl;
return 1;
}
Student obj;
file2.read((char *) &obj, sizeof(struct Student));
cout<<obj.name<<endl;
cout<<obj.rollno<<endl;
file2.read((char *) &obj, sizeof(struct Student));
cout<<obj.name<<endl;
cout<<obj.rollno<<endl;
file2.read((char *) &obj, sizeof(struct Student));
cout<<obj.name<<endl;
cout<<obj.rollno<<endl;

if(!file2.good()) {
cout<<"Error occurred while reading the file"<<endl;
file2.close();
return 1;
}

file2.close();

return 0;
}
