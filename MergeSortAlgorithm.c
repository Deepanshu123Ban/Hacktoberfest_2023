#include<stdio.h>

void merge(int arr[], int low, int mid, int high)
{
  int a=mid-low+1;
  int b=high-mid;

  int i,A[a],B[b];
  
  for(i=0;i<a;i++)
  {
  	A[i]=arr[low+i];
  }
  
  for(i=0;i<b;i++)
  {
  	B[i]=arr[mid+1+i];
  }
  
  int index=low;
  int sum=0,add=0;
  while(sum<a && add<b)
    {
      if(A[sum]<=B[add])
      {
        arr[index]=A[sum];
        sum++;
    }else{
        arr[index]=B[add];
        add++;
      }
      index++;
    }

  while(sum<a)
    {
      arr[index]=A[sum];
      sum++;
      index++;
    }

   while(add<b)
    {
      arr[index]=B[add];
      add++;
      index++;
    }
}

void mergesort(int arr[], int low, int high)
{
if(low<high)
{
  int mid=low+(high-low)/2;
  mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);

    merge(arr,low,mid,high);
}
}

int main()
{
  int n,i;
printf("Enter n ");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++)
{
printf("Enter array[%d] ",i);
scanf("%d",&arr[i]);
}

mergesort(arr,0,n-1);

  printf("Merge sort array\n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
return 0;
}
