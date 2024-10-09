import java.util.Scanner;

public class UAS {

    static int cek_terbesar(int a[], int n) {
        int max = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }

    static int cek_terkecil(int a[], int n) {
        int min = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
            }
        }
        return min;
    }

    static int urutan_data_terbesar(int a[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a[0];
    }

    static int urutan_data_terkecil(int a[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        return a[0];
    }

    static void data_pilihan(int pilihan, int n[], int total) {

        if (pilihan == 1) {
            System.out.println("Data terbesar = " + cek_terbesar(n, total));
        } else if (pilihan == 2) {
            System.out.println("Data terkecil = " + cek_terkecil(n, total));
        } else if (pilihan == 3) {
            urutan_data_terbesar(n, total);
            cetak_data(n, total);
        } else if (pilihan == 4) {
            urutan_data_terkecil(n, total);
            cetak_data(n, total);
        } else {
            System.out.println("Pilihan tidak ada");
        }
    }

    static void masukkan_data(int a[], int n) {
        int nilai;
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            System.out.print("Masukkan data ke-" + (i + 1) + " = ");
            nilai = input.nextInt();
            a[i] = nilai;
        }
    }

    static void cetak_data(int a[], int n) {
        System.out.print("Data berurutan : ");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
    }

    public static void main(String[] args) {
        int total, pilihan;
        System.out.println("PROGRAM MENENTUKAN DATA TERBESAR, TERKECIL, DAN URUTAN DATA TERBESAR DAN TERKECIL");
        System.out.println("=================================================================================\n");
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan jumlah data yang ingin diinput = ");
        total = input.nextInt();
        int[] n = new int[total];

        masukkan_data(n, total);

        System.out.print("Tentukan :\n1. Data terbesar\n2. Data Terkecil\n3. Urutan Terbesar\n4. Urutan terkecil\nPilihan = ");
        pilihan = input.nextInt();

        data_pilihan(pilihan, n, total);
    }
}