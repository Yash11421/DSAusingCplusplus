#include<iostream>
using namespace std;
int main()
{
  //Declaration of a variable with Data-type Int
  int index=45;
  //Declaration of Pointer to int of name ptr
  int *ptr=&index;
  cout<<"The value of index is:"<<index<<endl;//Value of index
  cout<<"The Address of index is:"<<&index<<endl;//Address of index
  cout<<"The value of ptr is:"<<*ptr<<endl;//Value of that pointer(ptr)
  cout<<"The Address of ptr is:"<<ptr<<endl;//Address stored at that pointer

}
