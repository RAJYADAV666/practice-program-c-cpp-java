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
            printf("Element of the Array is :\n");
            for(iCnt = 0;iCnt< iSize ;iCnt++)
            {
                cout<<"\t"<<Arr[iCnt];
            }
        }
        //Note : Array should be Sorted;
        bool BinarySearch(int iNo)
        {
          bool flag = false;
          int iStart =0, iEnd =0, iMid =0;
          
          iStart = 0;
          iEnd = iSize-1;
          
          while(iStart<=iEnd)
          {
            iMid = iStart +(iEnd - iStart)/2;

            if(Arr[iMid]== iNo)
            {
                flag = true;
                break;
            }
            else if(Arr[iMid] < iNo)
            {
                iStart = iMid +1;
            }
            else if(Arr[iMid] > iNo)
            {
                iEnd = iMid-1;
            }

          }
          return flag;

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
    aobj->Display();

    cout<<"\n Enter the Element that you want to search :"<<endl;
    cin>>iValue;

    bret = aobj->BinarySearch(iValue);

    if(bret== true)
    {
        cout<<"Element is Present in the array ";
    }
    else
    {
        cout<<"There is no such element int the array :";
    }

    delete aobj;

    return 0;
}
