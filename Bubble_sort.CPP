#include <iostream.h>
#include <conio.h>
void main() {
	clrscr();
	int a[5];
	cout<<"Enter five numbers \n";
	for (int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"Unsorted array \n";
	for (int j=0;j<5;j++){
		cout<<a[j]<<" ";
	}
	for (int k=0;k<4;k++){
		for(int l=0;l<4-k;l++){
			if (a[l]>a[l+1]){
				int t=a[l];
				a[l]=a[l+1];
				a[l+1]=t;
			}
		}
	}
cout<<"\n Array in ascending order \n";
for (int n=0;n<5;n++) {
	cout<<a[n]<<" ";
	}
getch();
}