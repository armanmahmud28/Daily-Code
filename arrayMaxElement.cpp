#include<iostream>
using namespace std;
int findmax(int arr[],int n){
   int max_value=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max_value){
            max_value=arr[i];
        }
    }
                return max_value;

}
int main(){


int arr[]={10,30,20,50,100};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<n<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl<<"Max value is: "<<findmax(arr,n);
//cout<<max_value;


}