#include <iostream>
#include<conio.h>

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
	while (num > 46){
		cout << "The calculator cannot return valid numbers beyond index 46, please enter a number less than or equal to 46: ";
		cin >> num;
	}
	cout << "\nThe fibonacci number of the index " << num << " is " << fibonacci(num) << endl;
	cout << "Press any key to end ..." << endl;
	getch();
}
