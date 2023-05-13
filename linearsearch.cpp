#include <iostream>
using namespace std;

class linearsearch
{
  int a[10],i,item,n;
  public:
   void in();
   void out();
};
  void linearsearch:: in()
  {
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
  }
  void linearsearch:: out()
  {
    int LOC,c=0;
    cout<<"Enter element which is to be searched ";
    cin>>item;
    for(i=0;i<n;i++)
    {
      if(a[i]==item)
      {
        c=1;
        LOC=i+1;
        break;
      }
    }
    if(c==0)
    {
      cout<<"Item is not found";
    }
    else
    {
      cout<<"Item is found at location "<<LOC;
    }
  }

int main()
{
    clrscr();
    linearsearch s;
    s.in();
    s.out();
}