# include<stdio.h>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[],int low,int high){
    int pivot = a[high];
    int i = low;
    for(int j = low; j<high; j++){
        if(a[j]<pivot){
            swap(&a[i], &a[j]);
            i++;
        }
    }
    swap(&a[i], &a[high]);
    return i;
}

void quicksort(int a[],int low, int high){
    if(low<high){
        int p = partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}

int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("enter %d elements:\n",n);
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
    
    quicksort(a,0,n-1);

    printf("sorted array:\n");
    for(int i =0; i<n; i++)
    printf("%d ", a[i]);
    return 0;
}
