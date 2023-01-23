#include <iostream>

void selection(int array[],int size){
    for(int i = 0 ; i < size - 1; i++){
        int    min_index = i;
        for(int j = i ; j < size ; j++){
            if(array[j] < array[min_index]) min_index = j;
        }

        if (min_index != 0) {
            int temp = array[min_index];
            array[min_index] = array[i];
            array[i] = min_index;
        }
    }
}

int main(){
    int arr[] = {1,5,2,1,2,7,5,2,1,26,7,8,32};
    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";
    std::cout << "\n";

    selection(arr,s);
    for(int i =0; i < s ; i++) std::cout << arr[i] << "\t";

    return 0;
}
