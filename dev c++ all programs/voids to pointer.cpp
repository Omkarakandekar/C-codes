#include<iostream>

using namespace std;

void rotateArray(int arr[], int size, int rf) {
int temp[rf];
//int output[size];

for(int i=0; i<rf; i++) { // temp: 1 2
temp[i] = arr[i];
}

for(int i=rf, j=0; i<size; i++, j++) { // arr: 3 4 5 6 _ _
arr[j] = arr[i];
}

for(int i=0, j=size-rf; i<rf; i++, j++) { // arr: 3 4 5 6 1 2
arr[j] = temp[i];
}

//return output; // &output[0]
}


int main() {

int size;
cin>>size;

int input[size];
for(int i=0; i<size; i++) {
cin>>input[i];
}

int rf;
cin>>rf;

//int output[size];

rotateArray(input, size, rf);

for(int i=0; i<size; i++) {
cout<<input[i]<<" ";
}

return 0;
}
