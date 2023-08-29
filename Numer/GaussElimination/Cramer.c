#include<stdio.h>
#include<math.h>
double det(double a[3][3]){
	double det=0;
	int i;
	for(i=0;i<3;i++){
		det+=(a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3])-(a[0][(i+2)%3]*a[1][(i+1)%3]*a[2][i]);
	}
	return det;
}
int main(){
	double a[3][3]={{-2,3,1},{3,4,-5},{1,-2,1}};
	double x[3];
	double b[3]={9,0,-4};
	double tempA[3];
	double detA=det(a);
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			tempA[j]=a[j][i];
			a[j][i]=b[j];
		}
		x[i]=det(a)/detA;
		for(j=0;j<3;j++){
			a[j][i]=tempA[j];
		}
	}
	printf("%.2f %.2f %.2f",x[0],x[1],x[2]);
	return 0;
}
