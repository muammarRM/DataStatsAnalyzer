#include <iostream>
using namespace std;

int cek_terbesar(int a[], int n);
int cek_terkecil(int a[], int n);
int urutan_data_terbesar(int a[], int n);
int urutan_data_terkecil(int a[], int n);
void masukkan_data(int a[], int n);
void data_pilihan(int pilihan, int n[], int total);
void cetak_data(int a[], int n);

int main()
{ 
    int total, pilihan;
    system("cls");
    cout << "PROGRAM MENENTUKAN DATA TERBESAR, TERKECIL, DAN URUTAN DATA TERBESAR DAN TERKECIL" << endl;
    cout << "=================================================================================" << endl <<endl;
    
    cout << "Masukkan jumlah data yang ingin diinput = ";
    cin >> total;
    int n[total];
    

    masukkan_data(n, total);
    cout << "Tentukan :\n1. Data terbesar\n2. Data Terkecil\n3. Urutan Terbesar\n4. Urutan terkecil\nPilihan = ";
    cin >> pilihan;
    data_pilihan(pilihan, n, total);
}

int cek_terbesar(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int cek_terkecil(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int urutan_data_terbesar(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a[0];
}

int urutan_data_terkecil(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a[0];
}

void data_pilihan(int pilihan, int n[], int total)
{

    if (pilihan == 1)
    {
        cout << "Data terbesar = " << cek_terbesar(n, total) << endl;
    }
    else if (pilihan == 2)
    {
        cout << "Data terkecil = " << cek_terkecil(n, total) << endl;
    }
    else if (pilihan == 3)
    {
        urutan_data_terbesar(n, total);
        cetak_data(n, total);
    }
    else if (pilihan == 4)
    {
        urutan_data_terkecil(n, total);
        cetak_data(n, total);
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }
}

void masukkan_data(int a[], int n)
{
    int nilai;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << " = ";
        cin >> nilai;
        a[i] = nilai;
    }
}

void cetak_data(int a[], int n)
{
    cout << "Data berurutan : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}