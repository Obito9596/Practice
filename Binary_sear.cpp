#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
int s = 0 , e = n - 1;

while (s <= e)
{
    int mid = (s+e)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
   else if(arr[mid] > key)
   {
       e = mid -1;
   }
   else if(arr[mid] < key)
   {
       s = mid + 1;
   }
}
return -1;
}


int main(){
 
 int arr[]= {10,20,30,40,45,60,70,89};
 int n = sizeof(arr)/sizeof(int);
 int key;
 cin>>key;
  int index = binary_search(arr , n ,key);
  if(index != -1){
      cout<<key<<" is Present at "<<index<<endl;
  }
  else{
      cout<<key<<" is not Present "<<index<<endl;
  }
}