#include<stdio.h>
#include<math.h>
double QuadraticSpline(double arr[],double x,int i){
	return arr[i*3]*x*x+arr[i*3+1]*x+arr[i*3+2];
}

void GaussJordan(double arrx[],double arry[],double arr[],int n){
	double A[3*n][3*n+1];
	int i,j,k;
	int term=0;
	A[0][0]=1;
	for(i=1;i<3*n;i+=3){
		j=i-1;
		printf("%d %d\n",i,j);
//		printf("%d\n",j);
		// row1
		A[i][j]=arrx[term]*arrx[term];
		A[i][j+1]=arrx[term];
		A[i][j+2]=1;
		A[i][3*n]=arry[term];
		term++;
		// row2
		A[i+1][j]=arrx[term]*arrx[term];
		A[i+1][j+1]=arrx[term];
		A[i+1][j+2]=1;
		A[i+1][3*n]=arry[term];
		
		if(term<n){
			// row3
			A[i+2][j]=2*arrx[term];
			A[i+2][j+1]=1;
			A[i+2][j+3]=-2*arrx[term];
			A[i+2][j+4]=-1;
		}
		
	}
	//print matrix A
	for(i=0;i<12;i++){
		for(j=0;j<13;j++){
			printf("%.2f ",A[i][j]);
            printf("\t");
		}
		printf("\n");
	}
	
	for(k=0;k<n*3-1;k++){
		for(i=k+1;i<n*3;i++){
			double temp=A[i][k];
			for(j=0;j<n*3+1;j++){
				A[i][j]=A[i][j]-(A[k][j]/A[k][k]*temp);
			}
		}
	}
	for(k=n*3-1;k>=0;k--){
		for(i=k-1;i>=0;i--){
			double temp=A[i][k];
			for(j=0;j<n*3+1;j++){
				A[i][j]=A[i][j]-(A[k][j]/A[k][k]*temp);
			}
		}
	}
	for(i=0;i<n*3;i++){
		for(j=0;j<n*3+1;j++){
			arr[i]=A[i][j]/A[i][i];
		}
	}
}
int main(){
	double arrx[5]={2,4,6,8,10};
	double arry[5]={9.5,8.0,10.5,39.5,72.5};
	double arr[12];
	double x=4.5;
	double result;
	int n=4;
	int i,j;
	GaussJordan(arrx,arry,arr,n);
	//print a b c
	for(i=0;i<n*3;i++){
		printf("x[%d] = %f\n",i+1,arr[i]);
	}
	for(i=0;i<4;i++)
    {
		if(x>=arrx[i] && x<=arrx[i+1])
        {
			result=QuadraticSpline(arr,x,i);
		}
	}
	printf("%f",result);
	return 0;
}
