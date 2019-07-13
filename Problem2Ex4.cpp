#include<iostream> 
using namespace std; 

void selectionSort(int a[], int n) {
	
    int i, j, min, temp;
   
    for (i = 0; i < n - 1; i++) {
        min = i;
	for (j = i + 1; j < n; j++)
        if (a[j] < a[min])
        min = j;
 		temp = a[i];
        a[i] = a[min];
        a[min] = temp;
   }
}

int main()
{
	int a[100], i, j, n, temp;
	cout << "Selection Sorting...\n";
	cout << "Enter the array size: ";
	cin >> n;
	cout << "Enter the " << n << " elements: \n"; 
	
	for (i=0; i<n; ++i)
		cin >> a[i];
		
	for (i=1; i<n; ++i)
	{
		for (j=0; j < (n - i); ++j)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}
	
	cout << "\nAfter using selection or bubble sort: \n";
	for (i=0; i<n; ++i)
		cout << a[i] << "," ;
		
	return 0;
}
