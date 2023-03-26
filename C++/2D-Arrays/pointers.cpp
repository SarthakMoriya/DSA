#include <iostream>
using namespace std;
void swap(char *x,char *y)
{
    char* temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;

}
int main()
{
    int a = 10;
    // int *ptr = &a;
    // int *cpy = ptr;
    /*
    // Value of A
    cout << a << endl;
    // Address of A
    cout << &a << endl;
    // Address of pointer
    cout << ptr << endl;
    // Value in copy pointer
    cout << *ptr << endl;
    // address of copy pointer
    cout << &ptr << endl;
    // value in copy pointer
    cout << cpy << endl;
    // address of copy pointer
    cout << &cpy << endl;
    return 0;
    int num = 10, p = 10;
    int *ptr = &num;
    //    *ptr=p;

    cout << ptr << endl;
    // cout<<&num<<endl;
    (*ptr)++;
    cout<<*ptr;
    // cout<<&p;
   float f=10.5,p=2.5,*ptr=&f;
   (*ptr)++;
   *ptr=p;
   cout<<*ptr<<" "<<f<<" "<<p;

   //CHARACTER 
   char ch[10]="Hello";
   char *p=ch;
//    cout<<ch[0]<<" "<<p[3];
    float arr[5]={1,2,3,4,5};
    float *ptr1=arr;
    float *ptr2=ptr1+3;
    // cout<<ptr1<<" "<<ptr2<<" "<<ptr2-ptr1;
    char *x="GeeksforGeeks";
    char *y="Geeksquiz";
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    */
   int arr[]={1,2,3,4,5};
   int *ptr=arr;
   cout<<ptr[3];

}