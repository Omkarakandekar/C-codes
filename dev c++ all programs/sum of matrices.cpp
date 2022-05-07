#include<iostream>

using namespace std;

int main() {

int rows, cols;
cin>>rows>>cols;

int matrix1[rows][cols], matrix2[rows][cols];

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
cin>>matrix1[i][j];
}
}

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
cin>>matrix2[i][j];
}
}

int matrix3[rows][cols];

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
}
}

cout<<"First Matrix is: "<<endl;

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
cout<<matrix1[i][j]<<" ";
}
cout<<endl;
}

cout<<"Second Matrix is: "<<endl;

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
cout<<matrix2[i][j]<<" ";
}
cout<<endl;
}

cout<<"Sum of both Matrices is: "<<endl;

for(int i=0; i<rows; i++) {
for(int j=0; j<cols; j++) {
cout<<matrix3[i][j]<<" ";
}
cout<<endl;
}



return 0;
}


