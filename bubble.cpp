#include <iostream>

void bubble(int array[],int size){
    for(int i = 0; i < size ; i++){
        for(int j = i; j < size; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1,5,2,1,2,7,5,2,1,26,7,8,32};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";
    std::cout << "\n";

    bubble(arr,s);
    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";
}
