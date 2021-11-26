#include <iostream>
int binnars(int* arr,int min, int max, int num);
int main()
{
	int num;
	std::cin>>num;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int min = 0;
	int max = 9;
	std::cout<< binnars(arr,min,max,num)<<std::endl;
return 0;
}

int binnars(int* arr, int min, int max, int num)
{
  if(min>max){
    return -1;
       }

    int mid = (min+max)/2;
  
	if(arr[mid]==num){
        return mid;
         }
         else if (arr[mid]>num){
                 return binnars(arr,min,mid - 1,num);
             }
          else if(arr[mid]<num){
               return binnars(arr,mid + 1,max,num);
                }
}
