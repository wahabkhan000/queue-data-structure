#include <iostream>
struct Node{
    int data;
    Node*next;
    Node*prev;
    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
class Deque{
    public:
    Node *Head = nullptr;
    Node *Tail = nullptr;
    Deque(){
        while(1){
            int argument = 0;
            do{
                std::cout<<"========================================\n"
                "\tDEQUE — DOUBLY LINKED LIST\n"
                "========================================\n"
                "Select an operation:\n"
                "[1] push_front()\n"
                "[2] push_back()\n"
                "[3] pop_front()\n"
                "[4] pop_back()\n"
                "[5] peek_front()\n"
                "[6] peek_back()\n"
                "[0] Exit\n"
                "Enter your choice:\n";

                std::cin>>argument;
            }while(argument<0 || argument>6);
            if(argument == 1){
                node_insertion_head(Head,Tail);
            }
            else if(argument == 2){
                node_insertion_tail(Head,Tail);
            }
            else if(argument == 3){
                node_deletion_head(Head,Tail);
            }
            else if(argument == 4){
                node_deletion_tail(Head,Tail);
            }
            else if(argument == 5){
                if(Head == nullptr){
                    std::cout<<"Queue is Empty.\n";
                }
                else{
                    std::cout<<"peek_front is: "<<Head->data<<"\n";
                }
            }
            else if(argument == 6){
                if(Tail == nullptr){
                    std::cout<<"Queue is Empty.\n";
                }
                else{
                    std::cout<<"peek_back is: "<<Tail->data<<"\n";
                }
            }
            else{
                break;
            }
        }
    }
    ~Deque(){
        while(Head){
            node_deletion_head(Head,Tail);
        }
    }
    static void node_insertion_head(Node *&Head, Node *&Tail){
        int value = 0;
        std::cout<<"Enter the value: \n";
        std::cin>>value;
        if(Head == nullptr){
            Head = new Node(value);
            Tail = Head;
        }
        else{
            Node *temp = new Node(value);
            Head->prev = temp;
            temp->next = Head;
            Head = temp;
        }
    }
    static void node_insertion_tail(Node *&Head, Node *&Tail){
        int value = 0;
        std::cout<<"Enter the value: \n";
        std::cin>>value;
        if(Tail == nullptr){
            Tail = new Node(value);
            Head = Tail;
        }
        else{
            Node *temp = new Node(value);
            Tail->next = temp;
            temp->prev = Tail;
            Tail = temp;
        }
    }
    static void node_deletion_head(Node *&Head, Node *&Tail){
        if(Head == nullptr){
            std::cout<<"Queue is Empty.\n";
            return;
        }
        else{
            Node *temp = Head->next;
            delete Head;
            Head = temp;
            if(temp == nullptr){
                Tail = nullptr;
            }
        }
    }
    static void node_deletion_tail(Node *&Head, Node *&Tail){
        if(Tail == nullptr){
            std::cout<<"Queue is Empty.\n";
            return;
        }
        else{
            Node *temp = Tail->prev;
            delete Tail;
            Tail = temp;
            if(temp == nullptr){
                Head = nullptr;
            }
        }
    }
};

int main(){
    Deque D;
}
