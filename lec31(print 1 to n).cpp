#include<iostream>
using namespace std;
void  lower( int n){
	
	if(n==0){
		return ;
	}
	cout<<n<<endl;
	lower(n-1);
	
	
	
}


int main(){
	int n;
	cin>>n;
	lower(n);


	return 0;
}