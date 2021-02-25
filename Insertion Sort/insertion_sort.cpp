#include<iostream>
using namespace std;

void insertion_sort(int* a, int num){

  int key,pos,i;
  for(i=1;i<num;i++){
    key = a[i];
    pos = i;
    while(key<a[pos-1] && pos>0){         //key comparison and shifting
      a[pos]=a[pos-1];
      pos--;
    }
    a[pos]=key;
  }
}

int main(){

  int a[10] = {5,6,4,7,3,8,2,9,1,0},i;

  cout<<"Unsorted Array : ";
  for(i=0;i<10;i++){
    cout<<" "<<a[i];
  }

  insertion_sort(a,10);         //insertion_sort function call

  printf("\n  Sorted Array : ");
  for(i=0;i<10;i++){
    cout<<" "<<a[i];
  }
  return 0;
}
