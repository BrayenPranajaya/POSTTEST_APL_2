#include <iostream>
using namespace std;

int main() {
    string senjata[5];
    string namaSenjata;
    int pilih, banyakSenjata = 0, index;
    string username, password;
    int loginAttempts = 0;

    
    while (loginAttempts < 3) {
        cout << "Masukkan Username: ";
        cin >> username;
        cout << "Masukkan Password: ";
        cin >> password;

        
        if (username == "Brayen" && password == "2309106128") {
            cout << "Login berhasil!\n";
            break; 
        } else {
            cout << "Login gagal. Silakan coba lagi.\n";
            loginAttempts++;
        }
    }

    
    if (loginAttempts == 3) {
        cout << "Anda telah mencoba login sebanyak 3 kali. Program berhenti.\n";
        return 0; 
    }

    
    while (true) {
        
        cout << "Pilih menu: " << endl;
        cout << "1. Tambahkan nama senjata" << endl;
        cout << "2. Lihat list senjata" << endl;
        cout << "3. Ubah nama senjata" << endl;
        cout << "4. Hapus nama senjata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih: "; cin >> pilih; 
        cout << endl;

        
        switch (pilih)
        {
        
        case 1:
            if (banyakSenjata >= 5) {
                cout << "List senjata sudah penuh" << endl;
            } else {
                cout << "Masukkan nama senjata: "; cin >> senjata[banyakSenjata];
                banyakSenjata++;
            }
            break;

        case 2:
            if (banyakSenjata == 0) {
                cout << "List senjata kosong" << endl;
            } else {
                cout << "List Nama Senjata pada Game Valorant:\n";
                for (int i = 0; i < banyakSenjata; i++) {
                    cout << i+1 << ". " << senjata[i] << endl;
                }
            }
            break;

        case 3:
            if (banyakSenjata == 0) {
                cout << "List senjata kosong" << endl;
            } else {
                cout << "List Nama Senjata pada Game Valorant:\n";
                for (int i = 0; i < banyakSenjata; i++) {
                    cout << i+1 << ". " << senjata[i] << endl;
                }
                cout << "Pilih nama senjata yang akan diubah: "; cin >> index;
                if (index > 0 && index <= banyakSenjata) {
                    cout << "Masukkan nama senjata baru: "; cin >> namaSenjata;
                    senjata[index - 1] = namaSenjata;
                    cout << "Nama senjata berhasil diubah.\n";
                } else {
                    cout << "Indeks tidak valid.\n";
                }
            }
            break;
        
        case 4:
            if (banyakSenjata == 0) {
                cout << "List senjata kosong" << endl;
            } else {
                cout << "List Nama Senjata pada Game Valorant:\n";
                for (int i = 0; i < banyakSenjata; i++) {
                    cout << i+1 << ". " << senjata[i] << endl;
                }
                cout << "Pilih nama senjata yang akan dihapus: "; cin >> index;
                if (index > 0 && index <= banyakSenjata) {
                    for (int i = index - 1; i < banyakSenjata - 1; i++) {
                        senjata[i] = senjata[i + 1];
                    }
                    banyakSenjata--;
                    cout << "Nama senjata berhasil dihapus.\n";
                } else {
                    cout << "Indeks tidak valid.\n";
                }
            }
            break;

        case 5:
            return 0;
            break;

        default:
            cout << "Pilihan tidak valid.\n";
            break;
        }
    }

    return 0;
}
