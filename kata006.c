#include<stdio.h>
void create_matrix();
void display(int);
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
				create_matrix();
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
				display(a[3][3]);
			case 5:
				printf("bye-bye\n");
				return 0;
		}
	}
	return 0;
}


void create_matrix(){
	int a[3][3];
	int b[3][3];
	printf("Enter the element of matrix A\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("element ofA%d%d\t",i,j);
			scanf("%d\n",&a[i][j]);
		}
	}
	printf("Enter the element of matrix B\n");
        for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                        printf("element ofB%d%d\t",k,l);
                        scanf("%d\n",&a[k][l]);
                }
        }

}

void diaplay(){
	int a[3][3];
	for(int o=0;o<3;o++){
		for(int p=0;p<3;p++){
			printf("%3d   ",a[o][p]);
		}
		printf("\n");
	}
}
