#include <iostream>
int binnars(int* arr,int min, int max, int num);
int main(){
int num;
std::cin>>num;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int min = 0;
int max = 9;
std::cout<< binnars(arr,min,max,num)<<std::endl;
return 0;}

int binnars(int* arr, int min, int max, int num){
   int mid = (min+max)/2;
   while(min<=max){
	if(arr[mid]==num){
        return mid;
         }
         if(arr[mid]>num){
                 max = mid-1;
             }
          if(arr[mid]<num){
               min = mid + 1;
                }
     mid = (min+max)/2;
    }

    return -1;

}
