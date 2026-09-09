#include <iostream>

struct Node{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
void enqueue(int &value, Node* &front, Node* &rear){
    if(front == nullptr){
        front = new Node(value);
        rear = front;
    }
    else{
        rear->next = new Node(value);
        rear = rear->next;
    }
}
void dequeue(Node* &front, Node* &rear){
    if(front == nullptr){
        return;
    }
    else if(front->next  == nullptr){
        delete front;
        front = nullptr;
        rear = front;
    }
    else{
        Node *temp = front->next;
        delete front;
        front = temp;
    }
}
void free(Node* &front, Node* &rear){
    if(front == nullptr){
        return;
    }
    else{
        while(front != nullptr){
            Node* temp = front->next;
            delete front;
            front = temp;
        }
        rear = front;
    }
}
int main() 
{
    Node *front = nullptr;
    Node* rear = nullptr;
    while(1){
        int argument;
        do{
            std::cout<<"Enter 0 for enquqeue and 1 for dequeue and 2 to stop: ";
            std::cin>>argument;
        }while(argument<0 || argument>2);
        int value;
        if(argument == 0){
            std::cout<<"Enter value you want to enter: ";
            std::cin>>value;
            std::cout<<"Enqueue("<<value<<")\n";
            enqueue(value,front,rear);
        }
        else if(argument == 1){
            dequeue(front,rear);
        }
        if(argument == 2){
            free(front,rear);
            break;
        }
    }
}
