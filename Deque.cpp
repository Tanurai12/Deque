#include<iostream>
using namespace std;
class Queue
{
    int q[100];
    int front;
    int rear;
    int size;

    public:
    Queue()
    {
        front=-1;
        rear=-1;
        size=100;

    }

    void insertAtRear(int v)
    {
        if(rear==size-1)
        cout<<"queue overflow...!"<<endl;
        else if(rear==-1)
        {
            rear++;
            front++;
            q[front]=v;
        }
        else
        {
            rear++;
            q[rear]=v;

        }


    }

    void DeleteAtFront()
    {
        if(front==-1)
        cout<<"queue underflow"<<endl;
        else if(front==rear)
        {
            cout<<q[front]<<"deleted"<<endl;
            rear=-1;
            front=-1;
        }
        else
        {
            cout<<q[front]<<"deleted"<<endl;
            front++;

        }
    }
     void insertAtFront(int v)
    {
        if(rear==size-1)
        cout<<"queue overflow...!"<<endl;
        else if(rear==-1)
        {
            rear++;
            front++;
            q[front]=v;
        }
        else
        {
            for(int i=rear;i<=front;i--)
            {
                q[i+1]=q[i];
            }
            rear++;
            q[front]=v;
            
        }


    }

    void DeleteAtRear()
    {
         if(front==-1)
        cout<<"queue underflow"<<endl;
        else if(front==rear)
        {
            cout<<q[front]<<"deleted"<<endl;
            rear=-1;
            front=-1;
        }
        else
        {
           cout<<q[rear]<<"deleted"<<endl;
           rear--;

        }
    }

    void printQueue()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }


};
int main()
{
    Queue q1;
    int choice;
    while(1)
    {
    cout<<"1.insert at rear"<<endl;
    cout<<"2. delete from front"<<endl;
    cout<<"3. print"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"5.insert at front"<<endl;
    cout<<"6. delete from rear"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        int v;
        cout<<"enter no."<<endl;
        cin>>v;
        q1.insertAtRear(v);
        break;

        case 2:
        q1.DeleteAtFront();
        break;

        case 3:
        q1.printQueue();
        break;


        case 4:
        exit(0);
        break;

        
        case 5:
        int v1;
        cout<<"enter no."<<endl;
        cin>>v1;
        q1.insertAtFront(v1);
        break;

         case 6:
        q1.DeleteAtRear();
        break;



    }
    }

    return 0;

}