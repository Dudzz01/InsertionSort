#include <stdio.h>

void InsertionSort(int array[],int size);

int main() {
    int size_array = 10;
    int arr[] = {5,7,2,10,8,3,4,2,1,9};

    InsertionSort(arr,size_array);
    //bu(arr,size_array);

    return 0;
}


void InsertionSort(int array[], int size)
{
    int n = 0;
    int j = 0;
    int aux = 0;

    for(int i = 0; i<size;i++)
    {
        for(j = i; j>=0 && array[j-1]>=array[j]; j--)
        {
            aux = array[j];
            array[j] = array[j-1];
            array[j-1] = aux;
        }




    }


for(int i = 0; i<size;i++){
    printf("%d",array[i]);
}





}
