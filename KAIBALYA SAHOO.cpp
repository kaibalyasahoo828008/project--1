
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
class giventask
{
    char Taskname[10];
    int Taskumber;
public:
void Add()
{
    /*adding of task*/
    cout<<"ENTER THE PRIORITY NUMBER"<<endl;
    cin>>Taskumber;
    cout<<"ENTER THE TASK"<<endl;
    cin.ignore();
    cin.getline(Taskname,10);
    
    
    
  
    
    
    
}
 void Display()
    
    {
     /*to display*/
     cout<<Taskumber<<"="<<Taskname<<endl;
     
     
 }
    

    void giventask1()
    {
        Taskumber=0;
        strcpy(Taskname,"NA");
    }
    void giventask2()
    {
      
        strcpy(Taskname,"DONE");
    }
void commands()
    {
    cout<<"******************************************"<<endl;
            cout<<"WHAT YOU WANT"<<endl;
            cout<<"ENTER specific character   AS SHOWN BELOW TO DO SPECIFIC TASK"<<endl;
            cout<<"TO ADD-a"<<endl;
            cout<<"TO SHOW INCOMPLETE PRIORITY LIST ITEMS SORTED BY PRIORITY IN ASCENDING-l"<<endl;
            cout<<"DELETE THE INCOMPLETE ITEM WITH THE GIVEN PRIORITY NUMBER-d "<<endl;
            cout<<"MARK THE INCOMPLETE ITEM WITH THE GIVEN PRIORITY NUMBER-m"<<endl;
            cout<<"SHOW USAGE-h"<<endl;
            cout<<"STATISTICS-p"<<endl;
          cout<<"*********************************************"<<endl;
  
       
        
    }

    int Taskumber1()
    {
        return Taskumber;
    }

};

int main()
{
    cout<<"******************************************"<<endl;
            cout<<"WHAT YOU WANT"<<endl;
            cout<<"ENTER specific character  AS SHOWN BELOW TO DO SPECIFIC TASK"<<endl;
            cout<<"TO ADD-a"<<endl;
            cout<<"TO SHOW INCOMPLETE PRIORITY LIST ITEMS SORTED BY PRIORITY IN ASCENDING-l"<<endl;
            cout<<"DELETE THE INCOMPLETE ITEM WITH THE GIVEN PRIORITY NUMBER-d "<<endl;
            cout<<"MARK THE INCOMPLETE ITEM WITH THE GIVEN PRIORITY NUMBER-m"<<endl;
            cout<<"SHOW USAGE-h"<<endl;
            cout<<"STATISTICS-p"<<endl;
          cout<<"*********************************************"<<endl;
  
    
    
    for(int j=0;j<100;j++)
    {
        
        /*variables*/
    giventask A[10];
        static int pending=0;
        static int completed=0;
    static int i=0;
        int cross[10];/*to store the deleted element*/
        char case1;
        cin>>case1;
   
        
        
        
        
        
       /*switch case*/
        
switch(case1) {
      case 'a' :
        A[i].Add();                        /*for storing the values*/
               i++;
        pending=pending+1;
         break;
        
    case 'l' :                             /*for dispaly the values*/
        for(int k=0;k<i;k++)
        {
            for(int h=0;h<i;h++)
            {
               if(cross[h]!=k)
               {
        A[k].Display();
                   break;
               }
            }
           
        }
         break;
    case 'h' :                               /*for showing thw comangds*/
        A[i].commands();
        break;
        
        
        
    case 'd' :/*for deleting values*/
    {
        int del;
       
        cout<<"WHICH PRIORITY NUMBER YOU WANT TO DELETE"<<endl;
        cin>>del;
        for(int k=0;k<10;k++)
        {
            if(A[k].Taskumber1()==del)
            {
                A[k].giventask1();
            }
        }
        
        pending--;
         break;
    }
    case 'm' :/*for completing  values*/
    {
        int del;
      
        cout<<"WHICH PRIORITY NUMBER YOU WANT TO DELETE"<<endl;
        cin>>del;
        for(int k=0;k<10;k++)
        {
            if(A[k].Taskumber1()==del)
            {
                A[k].giventask2();
            }
        }
        
        pending--;
        completed++;
         break;
   
    }
    case 'p' :       /*for showing the pending and completed work*/
        cout<<"complete"<<completed<<endl;
        cout<<"pending"<<pending<<endl;
        break;
}
        
     /*shorting the elements*/
        for(int w=0;w<i;w++)
        {
            for(int h=w+1;h<i;h++)
            {
                if(A[w].Taskumber1()>A[h].Taskumber1())
                {
                giventask B[10];
                    B[1]=A[w];
                    A[w]=A[h];
                    A[h]=B[1];
                }
                
                
                
            }
        /***********888***************/
            
            
            
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
   }
       
    
}
/*please use command accordingily to show the result */
