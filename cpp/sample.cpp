#include <iostream>

using namespace std;

int fibonacci(int i){
    int arr[] = {0,1};
    if (i < 0){
    	return 0;
	}
	if (i == 0 or i == 1){
		return arr[i];
	}
	int last = 1;
	int slast = 0;
	int x;
	for (x = 1; x < i; x++){
		int temp = last;
		last += slast;
		slast = temp;
	}
	return last;
}

int main(){
	cout << "We can calculate the nth fibonacci number, please enter the number here (0 is the first index): ";
	int num;
	cin >> num;
	cout << "\nThe fibonacci number of the index " << num << " is " << fibonacci(num);
}
