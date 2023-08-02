#include <stdio.h>

int binary(int arr[],int x,int l,int h){
while(l<=h){
int mid= l+ (h-l)/2;

    if (arr[mid]==x)
    return mid;

    if (arr[mid]<x)
    l=mid+1;

    if (arr[mid]>x)
    h=mid-1;
}
return -1;
}

int main(){

int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binary(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Location at %d", result);
  return 0;

}
