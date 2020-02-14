#include<stdio.h>
void create_matrix(int a[3][3],int b[3][3]);
void display_arr(int a[3][3]);
void mul(int a[3][3],int b[3][3],int [3][3]);
int main(){
	while(1){
		int s;
		int a[3][3];
		int b[3][3];
		int c[3][3];
		printf("Enter your choice\n");
		printf("1.\tcreate matrix\n");
		printf("2.\taddition of matrix\n");
		printf("3.\tmultiplication of matrix\n");
		printf("4.\tdisplay matrix\n");
		printf("5.\texit\n\n");
		scanf("%d",&s);
		switch(s){
			case 1:
				create_matrix(a,b);
			break;
			case 2:
			break;
			case 3:
				mul(a,b,c);
				display_arr(c);
			break;
			case 4:
				printf("matrix A \n");
				display_arr(a);
				printf("matrix B \n");
				display_arr(b);
			break;
			case 5:
				printf("bye-bye\n");
				return 0;
		}
	}
	return 0;
}


void create_matrix(int a[3][3],int b[3][3]){
	printf("Enter the element of matrix A\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("element ofA%d%d\t",i,j);
			scanf("%d\n",&a[i][j]);
		}
	}
	display_arr(a);

	printf("Enter the element of matrix B\n");
        for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                        printf("element ofB%d%d\t",k,l);
                        scanf("%d\n",&b[k][l]);
                }
        }
	display_arr(b);

}

void display_arr(int a[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%3d   ",a[i][j]);
		}
		printf("\n");
	}
}

void mul(int a[3][3],int b[3][3],int c[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j] = c[i][j]+a[i][j]*b[j][i];
		}
	}
}
