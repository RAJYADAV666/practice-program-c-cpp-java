#include<iostream>
using namespace std;
class Array
{
    private :
        int *Arr;
        int iSize;

    public: 
        Array(int X)
        {
            iSize = X;
            Arr = new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept() 
        {
             int iCnt =0;

            cout<<"Enter the Element :\n";
             for(iCnt =0;iCnt< iSize;iCnt++)
             {
                cin>>Arr[iCnt];
             }
        }

        void Display()
        {
            int iCnt =0;
            printf("\n Element of the Array is :\n");
            for(iCnt = 0;iCnt< iSize ;iCnt++)
            {
                cout<<"\t"<<Arr[iCnt];
            }
        }
        //Note : Array should be Sorted;
      
        void Insertiosort()
        {
          int selected =0;
          int i =0,j=0;

          for(i =1;i<iSize;i++)
          {
            for(j = i-1 ,selected = Arr[i];((j>=0) &&(Arr[j] > selected));j--)
            {
                Arr[j+1] = Arr[j];
            }
            Arr[j+1] = selected;
          }

             
        }
};
int main()
{
    int Length =0;
    int iValue=0;
    bool bret = false;

    cout<<"Enter the number of Element :"<<endl;
    cin>>Length;

    Array *aobj = new Array(Length);

    aobj->Accept();
    
     aobj->Insertiosort();
     aobj->Display();

    delete aobj;

    return 0;
}
