//#include<stdio.h>
//int main(){
//	int arr[]={1,5,3,6,-4,8,4,90,4,7,2};
//	int i=0,j=0;
//	int temp=0;
//	int size=sizeof(arr)/sizeof(int);
//	for(i=0;i<size;i++){
//		for(j=i;j<size;j++){
//			if(arr[i]>arr[j]){
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	for(i=0;i<size;i++){
//		printf("%d ",arr[i]);
//	}
//}
//
//#include<stdio.h>
//int main() {
//    int arr[] = {1, 5, 3, 6, -4, 8, 4, 90, 4, 7, 2};
//    int i, j, temp;
//    int size = sizeof(arr) / sizeof(int);
//    int swapped;
//    for (i = 0; i < size-1; i++) {
//        swapped = 0; // flag to check if any swapping happened
//        for (j = 0; j < size-i-1; j++) {
//            if (arr[j] > arr[j+1]) {
//                // Swap adjacent elements if they are in the wrong order
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                swapped = 1;
//            }
//        }
//        // If no two elements were swapped in the inner loop, break
//        if (swapped == 0) {
//            break;
//        }
//    }
//    for (i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//


#include<stdio.h>
void ur_strcpy(char [],char []);
int ur_strlen(char []);
int ur_strcmp(char M[],char N[]);
int main()
{
	int c;
	char a[]="siva";
	char b[10];
 	char d[]="siva";
	c=ur_strlen(a);
	printf("%d\n",c);

	
	 ur_strcpy(b,d);
	printf("%s",b);

}

int ur_strlen(char s[])

{
	int i=0;
	int len=0;
	while(s[i]!='\0')
	{
		i++;
		len++;
	}
	return len;
}
void ur_strcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
}
int ur_strcmp(char M[],char N[])
{
	int i=0,j=0;
	while(M[i]='\0'&& N[i]='\0')
	{
		if(M[i]!=N[i];)
		{
		return 0;
		}
	}
	




