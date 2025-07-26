#include<iostream>
#include <climits>

using namespace std;

int main(){
int n;
cout<< "Enter the number of element: ";

cin>> n;

int arr[n];

cout<< "Enter the element of the array: ";

for(int i=0;i<n;i++){
    cin>>arr[i];

}

int max=INT_MIN;
int secondMax=INT_MIN;


for(int i=0;i<n;i++){
if(arr[i]>max){
    secondMax=max;

    max=arr[i];
}
else if(arr[i]>secondMax && arr[i] !=max){
    secondMax=arr[i];
}
}
if(secondMax==INT_MIN){
    cout<<"Not Found Second Maximum"<<endl;
}
else {
    cout<<"Second Maximum is: "<<secondMax<<endl;
}



return 0;


}
