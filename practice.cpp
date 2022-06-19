#include <iostream>
using namespace std;
struct data{
       unsigned int n;
       int sum;
       unsigned int k;

};

int main() {
	unsigned int T,i,j;
	cin>>T;
	struct data arr[T];
	unsigned int day=0;

	for(i=0;i<T;i++){
	       cin>>arr[i].n>>arr[i].k;
	       for(j=0;j<arr[i].n;j++){
	              int Q;
	              cin>>Q;
	              arr[i].sum=arr[i].sum+Q;
	       }
	}

	for(i=0;i<T;i++){

	       day=arr[i].sum/arr[i].k;
	       if(arr[i].sum%arr[i].k==0){
	              cout<<(day+1)<<endl;
	       }
	       else{
	       cout<<day<<endl;
	       }
	}
	return 0;
}

