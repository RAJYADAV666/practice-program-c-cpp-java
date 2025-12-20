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
        void Bubblesort(char choice)
        {
            int Temp =0;
            int i =0,j =0;

            if(choice == 'I')
            {
                for(i=0;i< iSize;i++)
                {
                    cout<<"Data after Pass :"<<(i+1)<<endl;
                    
                    for(j =0;j< iSize-i-1;j++)
                    {
                        if(Arr[j]  > Arr[j+1])
                        { 
                            Temp = Arr[j];
                            Arr[j]=Arr[j+1];
                            Arr[j+1] = Temp;
                        }
                    } 

                }  
            }              
            else if(choice=='D')
            {
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
        
                        }
                    } 
                }    
            }
            else
            {
                cout<<"Invalid choice :\n";
            }
        }
};
int main()
{
    int Length =0;
    int iValue=0;
    bool bret = false;
    char cChoice ='\0';

    cout<<"Enter the number of Element :"<<endl;
    cin>>Length;

    Array *aobj = new Array(Length);

    aobj->Accept();

    cout<<"Please enter your choice for sorting :\n";
    cout<<"I : Increasing order:\n";
    cout<<"D: Decreasing order \n" ;

    cin>>cChoice;
    
     aobj->Bubblesort(cChoice);
     aobj->Display();

    delete aobj;

    return 0;
}
