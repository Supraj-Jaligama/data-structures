# include<stdio.h>
void selection(int a[],int n){
   int i,j,temp;
   for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
         if(a[j]<a[i]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
}
 void printArray(int a[],int n){
   int i;
   for(i=0; i<n; i++)
   printf("%d ", a[i]);
   printf("\n");
}
int main(){
   int n;
   printf("enter number of elements: ");
   scanf("%d", &n);
   int a[n];
   printf("enter %d elements:\n",n);
   for(int i=0; i<n; i++)
   scanf("%d", &a[i]);
   selection(a,n);
   printf("sorted array:\n");
   printArray(a,n);
   return 0;
}