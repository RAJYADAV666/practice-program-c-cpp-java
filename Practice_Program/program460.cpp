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
      
        void SelectionSort()
        {
           int min_index = 0;
           int i =0, j=0;
           int Temp =0;

           for(i =0;i<iSize;i++)
           {
             min_index = i;

             for(j = i+1 ;j < iSize ;j++)
             {
                if(Arr[j]<Arr[min_index])
                {
                    min_index = j;
                }
             } 
             Temp = Arr[i];
             Arr[i] = Arr[min_index];
             Arr[min_index] = Temp;
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
    
     aobj->SelectionSort();
     aobj->Display();

    delete aobj;

    return 0;
}
