#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k;
	double a[3][4]={{-2,3,1,9},{3,4,-5,0},{1,-2,1,-4}};
	double x[3];
	for(k=0;k<2;k++){
		for(i=k+1;i<3;i++){
			double temp=a[i][k];
			for(j=0;j<4;j++){
				a[i][j]=a[i][j]-(a[k][j]/a[k][k]*temp);
			}	
		}
	}
	x[2]=a[2][3]/a[2][2];
	for(i=1;i>=0;i--){
		double sum=0;
		for(j=i+1;j<3;j++){
			sum+=(a[i][j]*x[j]);
			x[i]=(a[i][3]-sum)/a[i][i];
		}
	}
	
	for(i=0;i<3;i++){
        printf("x[%d] = %.2f\n",i+1,x[i]);
    }

     for(i=0;i<3;i++)
    {
        for(j=0;i<4;j++)
        {
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }	
	return 0;
}
