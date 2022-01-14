#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *x, int *y, int *z , int *k ){
	int *S[] = {x, y, z, k};
	int idx_1 = rand() % 4, idx_2 = rand() % 4;
	while(idx_1 == idx_2){
		idx_2 = rand() % 4;
	}

	int afterShuffle = *S[idx_1];
	*S[idx_1] = *S[idx_2];
	*S[idx_2] = afterShuffle;
}
