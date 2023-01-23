#include <iostream>

void insertion(int array[],int size){
    for(int i = 1; i < size; i++){
        int key = array[i];
        int j = i - 1;
        while( j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
} 

int main(){
    int arr[] = {1,5,2,1,2,7,5,2,1,26,7,8,32};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";
    std::cout << "\n";

    insertion(arr,s);
    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";

    return 0;
}
