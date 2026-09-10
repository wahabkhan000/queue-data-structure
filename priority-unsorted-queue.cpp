#include <iostream>
#include <utility>

int main() 
{
    int size = 5;
    int insertion = 0;
    std::pair<int,int> arr[5];

    while(1){
        int argument = 0;
        do{
            std::cout<<"Enter 0 for enquqeue and 1 for dequeue and 2 for peek and 3 to stop: ";
            std::cin>>argument;
        }while(argument<0 || argument>3);
        
        if(argument == 0){
            if(insertion == size){
                std::cout<<"Queue is completely filled.";
            }
            else{
                std::cout<<"Enter Value you want to enter: ";
                std::cin>>arr[insertion].first;
                std::cout<<"Enter its priority: ";
                std::cin>>arr[insertion].second;
                insertion++;
            }
        }
        else if(argument == 1){
            if(insertion == 0){
                std::cout<<"Queue is Empty.";
            }
            else{
                int highest_priority = arr[0].second;
                for(int i = 0 ;i < insertion ;i++ ){
                    if(highest_priority < arr[i].second){
                        highest_priority = arr[i].second;
                    }
                }
                for(int i = 0; i < insertion; i++){
                    if(highest_priority == arr[i].second){
                        for(int j = i; j< insertion-1; j++){
                            arr[j] = arr[j+1];
                        }
                        break;
                    }
                }
                --insertion;
            }
        }
        else if(argument == 2){
            if(insertion == 0){
                std::cout<<"Queue is Empty.\n";
            }
            else{
                int peek_value = arr[0].first;
                int highest_priority = arr[0].second;
                for(int i = 0;i < insertion; i++){
                    if(highest_priority < arr[i].second){
                        highest_priority = arr[i].second;
                        peek_value = arr[i].first;
                    }
                }
                std::cout<<"Peek is: "<<peek_value<<"\n";
            }
            
        }
        else{
            break;
        }
    }
    
}
