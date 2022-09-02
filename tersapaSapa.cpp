#include <iostream>

using namespace std;

// int saffa(int x){
	
// 	if(x <= 11){
		
// 		return x;
		
// 	}else{

// 		return saffa(x/2) + saffa(x/3) + saffa(x/4);
// 	}
// }

int jumlah(int x, int y){
	int c;
	c = x + y;
	return c;
}
int main(){
	
	int x, y, jlh;
	
	cin >> x >> y;
	
	// saffa(x);

	jlh = jumlah(x,y);
	cout << jlh ;
	return 0;
	
}