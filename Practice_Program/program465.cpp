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
        void BubblesortEfficient()
        {
            int Temp =0;
            int i =0,j =0;
            bool flag = false;

            for(i=0;i< iSize;i++)
            {
                cout<<"Data after Pass :"<<(i+1)<<endl;
                
                for(j =0;j< iSize-i-1;j++)
                {
                    if(Arr[j]  < Arr[j+1])
                    { 
                        Temp = Arr[j];
                        Arr[j]=Arr[j+1];
                        Arr[j+1] = Temp;
                        flag = true;
                    }
                } 
                if(flag == false)
                {
                    break;
                }
                Display();
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
    
     aobj->BubblesortEfficient();
     aobj->Display();

    delete aobj;

    return 0;
}
