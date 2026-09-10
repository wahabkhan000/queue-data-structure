#include <iostream>
#include <utility>
int main() 
{
    int size = 5;
    int count = 0;
    std::pair<int,int> arr[5];

    while(1){
        int argument = 0;
        do{
            std::cout<<"Enter 0 for enqueue and 1 for dequeue and 2 for peek and 3 to stop: ";
            std::cin>>argument;
        }while(argument<0 || argument>3);
        
        if(argument == 0){
            if(count == size){
                std::cout<<"Queue is completely filled.\n";
            }
            else{
                int priority = 0; int value = 0;
                std::cout<<"Enter Value you want to enter: \n";
                std::cin>>value;
                std::cout<<"Enter its priority: \n";
                std::cin>>priority;
                for(int i = 0; i <size; i++){
                    if(priority > arr[i].second){
                        for(int j = count; j > i; j--){
                            arr[j] = arr[j-1];
                        }
                        arr[i].first = value;
                        arr[i].second = priority;
                        break;
                    }
                }
                count++;
            }
        }
        else if(argument == 1){
            if(count == 0){
                std::cout<<"Queue is Empty.\n";
            }
            else{
                for(int i = 0; i < count-1; i++){
                    arr[i] = arr[i+1];
                }
                count--;
            }
        }
        else if(argument == 2){
            if(count == 0){
                std::cout<<"Queue is Empty.\n";
            }else{
                std::cout<<"Peek is: "<<arr[0].second<<" "<<arr[0].first<<"\n";
            }
        
        }
        else{
            break;
        }
    }
    
}
