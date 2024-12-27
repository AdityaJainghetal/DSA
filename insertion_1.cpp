
#include <iostream>
using namespace std;

void insert(int arr[], int s){
	for(int i=1;i<s;i++){
		int chotu=i;
		while(chotu>0 && arr[chotu] < arr[chotu-1]){
		
	int tmp;
	tmp=arr[chotu-1];
	arr[chotu-1]=arr[chotu];
	arr[chotu]=tmp;
	chotu--;
}
}
}

int main(){
	int arr[]={3,1,4,2,6};
	int s= sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<s;i++){
		cout<<arr[i]<<"\n";
	}
	insert(arr,s);
	cout<<"\n After applying inserttion sort \n";
	for(int i=0;i<s;i++){
		cout<<arr[i]<<"\n";
	}
}
