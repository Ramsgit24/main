//indirect recursion: the function call other function and the other function call the 1st function
//it iterates 
#include<stdio.h>
void print();
void ras();
int main(){
	print();
}
void print(){
	printf("hello ");
	ras();
}
void ras(){
	printf("world! ");
	print();
}