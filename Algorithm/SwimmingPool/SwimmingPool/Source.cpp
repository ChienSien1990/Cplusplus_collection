////////////////////////////////////////////////////////////////////////////////////////
/// NAME: CHIEN SIEN LOW
/// ID: 01436482
/// SUBMISSION DATE : 26 FEB 2015
/////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
#include <conio.h>
void merge(int *, int, int, int);
void mergesort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergesort(a, low, mid);
		mergesort(a, mid + 1, high);
		merge(a,low, high, mid);
	}
	return;
}
void merge(int *a, int low, int high, int mid)
{
	int i, j, k, c[50];
	i = low;
	k = low;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			c[k] = a[i];
			k++;
			i++;
		}
		else
		{
			c[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		c[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i < k; i++)
	{
		a[i] = c[i];
	}
}
int main(){
	
	
	int j=0;

	
	int za[7][4];
	int ya[7][4];
	int tmp[7];								// assume there is only 7 contestants as maximum, the program can be modified later if needed
	for (int m = 0; m < 7; m++){
		for (int i = 0; i < 3; i++)
			za[m][i] = rand() % 100 + 1;	// random generate the swimming, biking and running time
	}
	
	int max = 0;
	for (int i = 0; i < 7; i++){			// make the temporary array as the biking time plus running time
		tmp[i] = za[i][1] + za[i][2];

	}
	
	mergesort(tmp, 0, 6);					// mergesort the temporary array

	cout << "/// Original List: ///\n";		
	for (int i = 0; i < 7; i++){
		cout << za[i][0] << " + " << za[i][1] << " + " << za[i][2] << "    d =   " << za[i][1] + za[i][2] << "\n";
	}
											
		
		for (int l = 0; l < 7; l++){
			for (int i = 0; i < 7; i++){
			if ((tmp[6 - l] == (za[i][1] + za[i][2])) ){		// assign the sorting list to a new list
				
				for (int k = 0; k < 3; k++){
				
						ya[j][k] = za[i][k];
				}
				
				j++;
				break;
			}
			
		}
		
		
	}
		cout << "\n///This is the output: ///\n";
		for (int i = 0; i < 7; i++){
			if (i > 0){
				ya[i][0] = ya[i][0] + ya[i - 1][0];
				ya[i][3] = ya[i][0] + ya[i][1] + ya[i][2];
				cout << ya[i][0] << " + " << ya[i][1] << " + " << ya[i][2] << "  =  " << ya[i][3] << "   d=  " << tmp[6 - i] << "\n";
			}
			else if (i == 0){
				ya[i][3] = ya[i][0] + ya[i][1] + ya[i][2];
				cout << ya[i][0] << " + " << ya[i][1] << " + " << ya[i][2] << " =  " << ya[i][3] << "   d =  " << tmp[6 - i] << "\n";
				}

			}
		for (int i = 0; i < 7; i++){
			
			if (max < ya[i][3])
				max = ya[i][3];
		}
		cout << "\nthe miniumum time takes: " << max << " minutes to finish the contest\n";

	system("pause");
	return 0;
}
