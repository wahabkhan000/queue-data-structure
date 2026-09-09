#include <iostream>

int main() 
{
    int size = 5;
    int count = 0;
    int arr[5];


    int front = 2;
    int rear = 4;

    while(1){
        int argument = 0;
        do{
            std::cout<<"Enter 0 for enquqeue and 1 for dequeue and 2 to stop: ";
            std::cin>>argument;
        }while(argument<0 || argument>2);

        if(argument == 0){
            if(count == size){
                std::cout<<"Queue is completely filled.\n";
            }
            else{
                int value = 0;
                std::cout<<"Enter value you want to enter: ";
                std::cin>>value;
                rear = ( rear + 1 ) % size;
                arr[rear] = value;
                count++;
            }
        }
        else if(argument == 1){
            if(count == 0){
                std::cout<<"Queue is completely empty.\n";
            }
            else{
                front = ( front + 1 ) % size;
                count--;
            }
        }
        else{
            break;
        }
    }
}
