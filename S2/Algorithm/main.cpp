#include <iostream>
using namespace std;
#define MAX 100
#define NOT_COMPUTED 0
int count;

int memo[MAX];
void initMemo(){
	for (int i=0; i<MAX; i++){
		memo[i] = NOT_COMPUTED;
	}
}

int F(int n){
	count++;
	cout << "n = " << n << endl;
	if (n < 2 ) return 1;
	return F(n-2) + F(n-1);
}

int F_dp(int n){ // Top Down
	if (memo[n] != NOT_COMPUTED) return memo[n];

	if (n < 2 ){
		memo[n] = 1;
		cout << "memo[" << n << "]\n"; 
		return memo[n];
	} 
	
	memo[n] =F_dp(n-2) + F_dp(n-1);
	cout << "memo[" << n << "]\n";
	return memo[n];
}

int F_bottom_up_dp(int n){

	memo[0] = 1;
	memo[1] = 1;
	for (int i=2; i<= n; i++){
		memo[i] = memo[i-2] + memo[i-1];
	}
	return memo[n];
}

int main(int argc, char** argv) {
	count = 0;
	initMemo();
	cout << "Result is "<< F_bottom_up_dp(30) << endl;
	cout << "Count is "<< count << endl;
	return 0;
}
