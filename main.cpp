#include <iostream>
using namespace std;

int main()
{
	int deret;
	cout << "Masukkan banyak angka : "; cin >> deret;
	int arr[deret];
	int max = -99999;
	int min = 99999;

	for(int i = 0; i < deret; i++){
		cout << "Angka ke-" << i + 1 << " : "; cin >> arr[i];
	}
	cout << endl << endl;

	cout << "__Hasil__" << endl ;
	cout << "Deret 		: ";
	for(int j = 0; j < deret; j++){
		cout << arr[j] << " ";
	}

	cout << endl;
	cout << "Maksimum 	: ";
	for(int x = 0; x < deret; x++){
		if(arr[x] > max){
			max = arr[x];
		}
		if(arr[x] < min){
			min = arr[x];
		}
	}

	cout << max << endl;
	cout << "Minimum 	: " << min << endl;
	cout << "Rata-rata 	: ";

	float total = 0;
	float rata;
	for(int y = 0; y < deret; y++){
		total += arr[y];
	}
	rata = (total/deret) * 1.0;
	cout << rata << endl;

	int selisih, max1 = -99999, selisih1;
	cout << "Selisih Max	: ";
	for(int m = 0; m < deret - 1; m++){
		selisih = arr[m] - arr[m+1];
		if(selisih < 0){
			max1 = selisih * (-1);
		}
		if(selisih > max1){
			max1 = selisih ;
		}
	}

	cout << max1<< endl;
	system("pause");
	return 0;
}
