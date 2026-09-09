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
            std::cout<<"Enter 0 for enquqeue and 1 for dequeue and 2 to stop: ";
            std::cin>>argument;
        }while(argument<0 || argument>2);
        
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
            if(insertion== 0){
                std::cout<<"Queue is Empty aleardy.";
            }
            else{
                int front_copy = arr[0].second;
                for(int i = 0 ;i < insertion ;i++ ){
                    if(front_copy < arr[i].second){
                        front_copy = arr[i].second;
                    }
                }
                bool flag = false;
                for(int i = 0; i < insertion; i++){
                    if(front_copy == arr[i].second){
                        if(i == 0){
                            i = 1;
                        }
                        flag = true;
                    }
                    if(flag == true){
                        arr[i-1] = arr[i];
                    }
                }
                --insertion;
            }
        }
        else{
            break;
        }
    }
    
}
