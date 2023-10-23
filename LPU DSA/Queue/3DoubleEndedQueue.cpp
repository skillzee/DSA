    #include <iostream>    
    using namespace std;
    #define size 5  
    int deque[size];    
    int f = -1, r = -1;    
    //  insert_front function will insert the value from the front    
    void insert_front(int x)    
    {    
        if((f==0 && r==size-1) || (f==r+1))    
        {    
            cout<<"Overflow";   
        }    
        else if((f==-1) && (r==-1))    
        {    
            f=r=0;    
            deque[f]=x;    
        }    
        else if(f==0)    
        {    
            f=size-1;    
            deque[f]=x;    
        }    
        else    
        {    
            f=f-1;    
            deque[f]=x;    
        }    
    }    
        
    // insert_rear function will insert the value from the rear    
    void insert_rear(int x)    
    {    
        if((f==0 && r==size-1) || (f==r+1))    
        {    
            cout<<"Over flow";  
        }    
        else if((f==-1) && (r==-1))    
        {    
            r=0;    
            deque[r]=x;    
        }    
        else if(r==size-1)    
        {    
            r=0;    
            deque[r]=x;    
        }    
        else    
        {    
            r++;    
            deque[r]=x;    
        }    
        
    }    
        
    // display function prints all the value of deque.    
    void display()    
    {    
        int i=f;    
        printf("\nElements in a deque are: ");    
            
        while(i!=r)    
        {    
            cout<<deque[i];  
            i=(i+1)%size;    
        }    
         cout<<deque[r]<<endl;    
    }    
        
    // getfront function retrieves the first value of the deque.    
    void getfront()    
    {    
        if((f==-1) && (r==-1))    
        {    
            cout<<"queue is empty";  
        }    
        else    
        {  
            cout<<"\nThe value of the element at front is:"<<deque[f];
        }    
            
    }    
        
    // getrear function retrieves the last value of the deque.    
    void getrear()    
    {    
        if((f==-1) && (r==-1))    
        {    
            cout<<"queue is empty";   
        }    
        else    
        {   
            cout<<"\nThe value of the element at rear is:"<<deque[r];
           
        }    
            
    }    
        
    // delete_front() function deletes the element from the front    
    void delete_front()    
    {    
        if((f==-1) && (r==-1))    
        {    
            cout<<"queue is empty";  
        }    
        else if(f==r)    
        {
            cout<<"Deleted element is:"<<deque[f];
            f=-1;    
            r=-1;    
                
        }    
         else if(f==(size-1))    
         {    
             cout<<"Deleted element is:"<<deque[f];  
             f=0;    
         }    
         else    
         {    
             cout<<"Deleted element is:"<<deque[f];   
              f=f+1;    
         }    
    }    
        
    // delete_rear() function deletes the element from the rear    
    void delete_rear()    
    {    
        if((f==-1) && (r==-1))    
        {    
            cout<<"queue is empty";   
        }    
        else if(f==r)    
        {    
            cout<<"Deleted element is:"<<deque[r];   
            f=-1;    
            r=-1;    
                
        }    
         else if(r==0)    
         {    
             cout<<"Deleted element is:"<<deque[r];     
             r=size-1;    
         }    
         else    
         {    
              cout<<"Deleted element is:"<<deque[r];    
              r=r-1;    
         }    
    }    
        
    int main()    
    { 
        int ch,val;
        cout<<"1.insert_Front  2.insert_rear 3.delete_front 4.delete_rear 5.dispaly 6.Exit:"<<endl;
        cout<<"7.get_front  8.get_rear"<<endl;
        while(1)
        {
            cout<<"Enter your choice:(1/2/3/4/5/6/7/8):";
            cin>>ch;
            switch(ch)
            {
                case 1:cout<<"Enetr a number"; cin>>val; insert_front(val);break;
                case 2:cout<<"Enetr a number"; cin>>val;insert_rear(val);break;
                case 3:delete_front();break;
                case 4:delete_rear();break;
                case 5:display();break;
                case 6:exit(0);break;
                case 7:getfront();break;
                case 8:getrear();break;
            }
        }        
  
        return 0;    
    }     