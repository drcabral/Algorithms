#include <stdio.h>
#include <stdlib.h>

void swapVal(int *a, int *b);
int divide(int vec[], int low, int high);
void quickSort(int *vec, int low, int high);


//####################################################################################################################
void swapVal(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}//swapVal
 
//#################################################################################################################### 
 
int divide(int vec[], int low, int high)
{
    int i, j;
 
    i = low;
    for (j = low + 1; j <= high; ++j)
    {
        if (vec[j] < vec[low])
        {
            ++i;
            swapVal(&vec[i], &vec[j]);
        }
    }
    swapVal(&vec[low], &vec[i]);
 
    return i;
}//divide

//####################################################################################################################
 
void quickSort(int *vec, int low, int high)
{
    int r;
 
    if (high > low)
    {
        r = divide(vec, low, high);
        quickSort(vec, low, r - 1);
        quickSort(vec, r + 1, high);
    }
}//quickSort

//####################################################################################################################


int main(){
	
	
	int arr[6] = {10, 7, 8, 9, 1, 5}, low;
    int n = sizeof(arr)/sizeof(arr[0]);

	quickSort(arr,0,n-1);

	printf('Sorted array:\n');
	for(i=0;i<n;i++){
		printf("%d \n",vetor[i]);
		
	}

	system("pause");
	return 0;
}//main
