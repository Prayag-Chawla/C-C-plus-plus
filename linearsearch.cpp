#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int val) {


  for(int i=0; i<n; i++) {
    if(arr[i] == val) {
      return i;
    }
  }
  return -1;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  int value;
  cin>>value;
cout<<linearSearch(arr, n, value);
return 0;
}