// jawabas soal exercise

//1. algoritma sangat penting dalam menyelesaikan suatu masalah program karena algoritma merupakan langkah awal dalam mengurutkan suatu cara/ fungsi agar berjalan secara terstruktur.
//2. dalam algoritma, struktur data di bagi menjadi 2 yaitu : 
//		statis/ linear, contohnya array
//		dinamis/non-linear, contohnya linked list
//3. Faktor- faktor yang mempengaruhi efisiensi waktu algoritma yaitu:
//		kecepatan mesin, complier, Operating system, Bahas pemrograman yang di gunakan, ukuran dari inputnya.
//4. Berdasarkan materi yang telah di sampaikan, untuk penggunaan algoritma dalam jumlah data yang besar lebih mudah untuk menggunakan metode quicksort karena cara yang digunakan adalah mencari titik tengah (pivot) kemudian mencari mana yang terbesar dan yang terkecil dari titik tengah.
//5. berdadsarkan algoritma yang telah di pelajari, algoritma yang termasuk quadratic adalah: Bubble sort, selection sort, Insertion sort
//	 sedangkan yang loglinear adalah: mergesort dan quick sort.

//jawaban no 6

#include <iostream>
using namespace std;

int alif[95];
int n;
int MA;
int k;
int i;

void input() {
	while (true)
	{
		cout << "masukan jumlah banyaknya elemen pada array:";
		cin >> n;
		if (n <= 95)
			break;
		else {
			cout << "n\Maksimal array yaitu 95 elemen.\n";
		}
		cout << endl;								
		cout << "===================" << endl;		
		cout << "Masukan Elemen Array" << endl;	
		cout << "===================" << endl;	

		for (int i = 0; i < n; i++) {	
			cout << "Data ke-" << (i + 1) << ":";	
			cin >> n[i];					
		}
	}
	
}

void merge(int alif[], int low, int high, int mid) {
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            alif[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergesort(int alif[], int low, int high) {
	if (low >= high) {
		return;
	}
	int mid = (low + high) / 2;

}


void output(int alif[], int n) {
    cout << "array yang tersusun : ";
    for (int i = 0; i < n; i++) {
        cout << alif[i] << " ";
    }
    cout << endl;
}

int main() {
		input();
		mergesort();
		output();
	return 0;
}