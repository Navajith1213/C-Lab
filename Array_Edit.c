#include <stdio.h>
void Array_add(int arr[],int size);
void Array_count(int arr[],int size);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    Array_add(arr, size);

    printf("Values in the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    Array_count(arr, size);
    return 0;
}

void Array_add(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void Array_count(int arr[],int size){
    int Search_key,F=0;
    printf("\nEnter the value to be found:");
    scanf("%d",&Search_key);
    for(int i=0;i<size;i++){
        if (arr[i]==Search_key){
            F+=1;
        }
    }
    if(F!=0){
        printf("\nNumber of times the element was found is:%d",F);
    }
    else{
        printf("\nThe element was not found");
    }
}