#include<stdio.h>
struct emp{
	int id;
	float sal;
	char sec;
};
void struct_array(struct emp[][2]);
int main(){
	int i;
	
	struct emp X[3]={{100,3000.44f,'Q'},{200,4000.44f,'W'},{300,4000.44f,'T'}};
	struct emp Y[2][2]=
	{
		{			
				{100,3000.44f,'Q'},{200,4000.44f,'W'}	
		},
		{			
				{300,4000.44f,'T'},{100,3000.44f,'Q'}
		}
	};
	for(i=0;i<3;i++){
		printf("%d %f %c\n",X[i].id,X[i].sal,X[i].sec);
	}
	struct_array(Y);


}
void struct_array(struct emp Z[][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d %f %c ",Z[i][j].id,Z[i][j].sal,Z[i][j].sec);
		}
		printf("\n");
	}
	return Z;

}