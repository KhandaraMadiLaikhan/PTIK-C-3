#include <iostream>
#include <vector>

using namespace std;

struct Mobil
{
    string merk;
    string topspeed;
    string model;
    string kapasitasmesin;
    string Tahunkeluar;
    string tipemesin;
    string tipepenggerak;
    int harga;
};

void displaymobil(vector<Mobil> &mobilList)
{
    for (int i = 0; i < mobilList.size(); i++)
    {
        cout << i + 1 << ". " << mobilList[i].merk << " ";
        cout << mobilList[i].model << " ";
        cout << mobilList[i].tipemesin << " ";
        cout << mobilList[i].harga << endl;
    }
}

void createMobil(vector<Mobil> &mobilList)
{
    Mobil newMobil;
    cout << "Masukkan merk mobil: ";
    cin >> newMobil.merk;
    cout << "Masukkan model mobil: ";
    cin >> newMobil.model;
    cout << "Masukkan tipemesin mobil: ";
    cin >> newMobil.tipemesin;
    cout << "Masukkan harga mobil: ";
    cin >> newMobil.harga;
    mobilList.push_back(newMobil);
}

void updateMobil(vector<Mobil> &mobilList)
{
    int index;
    cout << "Masukkan model mobil yang ingin diupdate: ";
    cin >> index;
    cout << "Masukkan merk mobil: ";
    cin >> mobilList[index - 1].merk;
    cout << "Masukkan model mobil: ";
    cin >> mobilList[index - 1].model;
    cout << "Masukkan tipemesin mobil: ";
    cin >> mobilList[index - 1].tipemesin;
    cout << "Masukkan harga mobil: ";
    cin >> mobilList[index - 1].harga;
}

void deleteMobil(vector<Mobil> &mobilList)
{
    int index;
    cout << "Masukkan model mobil yang ingin dihapus: ";
    cin >> index;
    mobilList.erase(mobilList.begin() + index - 1);
}

int main()
{
    vector<Mobil> mobilList;
    int choice;

    while (true)
    {
        cout << "1. Tampilkan semua mobil" << endl;
        cout << "2. Buat mobil baru" << endl;
        cout << "3. Update mobil" << endl;
        cout << "4. Hapus mobil" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;


        

        switch (choice)
        {
        case 1:
            displaymobil(mobilList);
            break;
        case 2:
            createMobil(mobilList);
            break;
        case 3:
            updateMobil(mobilList);
            break;
        case 4:
            deleteMobil(mobilList);
            break;
        case 5:
            return 0;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }



    return 0;
}