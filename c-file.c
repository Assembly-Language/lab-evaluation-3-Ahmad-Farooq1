
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int arr ,int *p2);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int arr[10]={1,2,3,0,4,5,0,6,8,0};
    int n=0;
    printf("assembly proc calling from  from C! \n");
getch();
    printf("the orignal array is :");
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    asmfunc(arr,&n); //assembly proc calling
   
   getch();
    
    printf("\n");
    printf("The number of all non-zero elements is = %d\n",n); // printing in c
    
  
    
    return 0;
}