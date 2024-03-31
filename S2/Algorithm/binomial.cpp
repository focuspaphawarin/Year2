#include <iostream>
using namespace std;
#define MAX 100
#define NOT_COMPUTED 0

int memo[MAX][MAX];
void initMemo(){
	for (int i=0; i<MAX; i++){
		for (int j=0; j<MAX; j++)
			memo[i][j] = NOT_COMPUTED;
	}
}
int C(int n, int k){
	if (k==0) return 1;
	if (k==n) return 1;
	return C(n-1,k-1) + C(n-1,k);
}

// Dynamic Programming
int C_dp(int n, int k){
	
	if (memo[n][k] != NOT_COMPUTED) return memo[n][k];
	
	if (k==0 || k==n) {
		memo[n][k] = 1;
		return memo[n][k];
	}
	
	memo[n][k] = C_dp(n-1,k-1) + C_dp(n-1,k);
	return memo[n][k];
}

int main(int argc, char** argv) {
	initMemo();
	cout << "result is " << C_dp(50,3) << endl;
	return 0;
}
