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
      
        void SelectionSort(char choice)
        {
                int min_index = 0;
                int i =0, j=0;
                int Temp =0;

            if(choice =='I'||choice=='i')
            { 
                
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
                if( i != min_index)
                {
                    Temp = Arr[i];
                    Arr[i] = Arr[min_index];
                    Arr[min_index] = Temp;
                }
             
                }
            }
            else if(choice =='D' ||choice =='d')
            {
              for(i =0;i<iSize;i++)
              {
                    min_index = i;

                    for(j = i+1 ;j < iSize ;j++)
                    {
                        if(Arr[j] > Arr[min_index])
                        {
                            min_index = j;
                        }
                    } 
                    if( i != min_index)
                    {
                        Temp = Arr[i];
                        Arr[i] = Arr[min_index];
                        Arr[min_index] = Temp;
                    }
                }        
            }
            else
            {
                cout<<"Please enter your choice for sorting :\n";
                cout<<"I /i: Increasing order:\n";
                cout<<"D/d: Decreasing order \n" ;

            }
          
             
        }
};
int main()
{
    int Length =0;
    int iValue=0;
    char cChoice ='\0';
    

    cout<<"Enter the number of Element :"<<endl;
    cin>>Length;

    Array *aobj = new Array(Length);

    aobj->Accept();

    cout<<"Please enter your choice for sorting :\n";
    cout<<"I /i: Increasing order:\n";
    cout<<"D/d: Decreasing order \n" ;
    cin>>cChoice;

    
     aobj->SelectionSort(cChoice);
     aobj->Display();

    delete aobj;

    return 0;
}
