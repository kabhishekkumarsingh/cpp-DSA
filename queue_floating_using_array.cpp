
#include <iostream>
#define size 10
int queue[size],rear=-1,front=0;
using namespace std;

void push(){
    int n;
    if(rear==size-1) cout<<"queue is full.\n\n";
    else{
        cout<<"Enter element to push in queue: ";
        cin>>n;
        rear++;
        queue[rear]=n;
        cout<<n<<" is pushed in stack\n\n";
    }
}
void pop(){
    if(rear==-1) cout<<"queue is empty  enter element first\n\n";
    else if(rear==0 && front==0){
        cout<<"poped element is "<<queue[rear];
        rear--;
    }
    else{
        cout<<"poped element is "<<queue[front]<<"\n\n";
        front++;
    }
}
void display(){
    if(rear==-1) cout<<"queue is empty enter element first\n\n";
    else{
        cout<<"\nqueue elements\n";
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}


int main()
{
    int choice;
do{
    cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\n"; 
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice){
        case 1: push(); break;
        case 2: pop(); break;
       case 3: display(); break;
        case 4: exit(4);
        default: cout<<"You are selected wrong choice plese try again.\n";
    }
    
}while(choice!=4);
    return 0;
}
