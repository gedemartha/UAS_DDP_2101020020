#include <iostream>

using namespace std;

int main ()
{

    int mainMenu = 1, pilihWhile = 1,pilih,pilihBilling,kembali,bayar,bayar1,tambah = 1,id = 0;
    string billing[3] = {"1. Billing Internet" , "2. Billing Game Online" , "3. Exit Program"};
    string billingInternet[10] = {"1. 30 Menit = Rp.2.000" , "2. 45 Menit = Rp.3.000" , "3. 1 Jam = Rp.4.000" , "4. 1 Jam 15 Menit = Rp.5.000" ,"5. 1 Jam 30 Menit = Rp.6.000" , "6. 1 Jam 45 Menit = Rp.7.000" , "7. 2 Jam = Rp.8.000" , "8. 3 Jam = Rp.10.000" , "9. 5 Jam = Rp.12.000" , "10. 8 Jam = Rp.15.000"};
    string billingGameOnline[6] = {"1. 1 Jam = Rp.3.000" , "2. 2 Jam = Rp.6.000" , "3. 3 Jam = Rp.8.000" , "4. 4 Jam = Rp.10.000" , "5. 5 Jam = Rp.12.000" , "6. 8 Jam = Rp.17.000"};
    int hargaInternet[10] = {2000,3000,4000,5000,6000,7000,8000,10000,12000,15000};
    int hargaGameOnline[6] = {3000,6000,8000,10000,12000,17000};
    string logBilling [100];


        while(mainMenu == 1) // Loop Main Menu jika mainMenu bernilai 1
        {
        cout << "==============PROGRAM KASIR BILLING SATELIT INTERNET GIANYAR==============\n"
        << "\nSelamat Datang di Program Kasir Billing Satelit Internet Gianyar\n"
        << "Jl. Ken Umang No.18, Gianyar, Kec. Gianyar, Kabupaten Gianyar, Bali 80511 \n"
        << "\n==========================================================================\n"
        << "Menu Utama : \n" 
        << "Pilih Billing yang ingin anda Print Out \n";
            for (int i=0 ; i<3;i++)
            {
                cout << billing[i] << "\n";
            }
        cin >> pilih;
        pilihWhile = 1;
            while (pilihWhile == 1) { // Looping pilihWhile yang bernilai 1   
                switch (pilih) { // awal switchPilih
                    case 1: // awal switchPilih caseBillingInternet
                            cout << "Billing Internet Satelit Internet Gianyar \n"
                            << "Billing Internet : \n";
                            for(int i=0;i<10;i++){
                                cout << billingInternet[i] << "\n";
                            }
                            cout << endl << "Pilih Billing Internet yang ingin di Print Out \n";
                            cin >> pilihBilling;
                            
                            switch(pilihBilling) { // awal switchPilih caseBillingInternet nested.switchPilihBilling
                                case 1:
                                logBilling[id] += "Billing Internet 30 Menit ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 30 Menit \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            } 
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 2:
                                logBilling[id] += "Billing Internet 45 Menit ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 45 Menit \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 3:
                                logBilling[id] += "Billing Internet 1 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 1 Jam \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 4:
                                logBilling[id] += "Billing Internet 1 Jam 15 Menit ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 1 Jam 15 Menit \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 5:
                                logBilling[id] += "Billing Internet 1 Jam 30 Menit ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 1 Jam 30 Menit \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 6:
                                logBilling[id] += "Billing Internet 1 Jam 45 Menit ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 1 Jam 45 Menit \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 7:
                                logBilling[id] += "Billing Internet 2 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 2 Jam \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 8:
                                logBilling[id] += "Billing Internet 3 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 3 Jam \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 9:
                                logBilling[id] += "Billing Internet 5 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 5 Jam \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 10:
                                logBilling[id] += "Billing Internet 8 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Internet 8 Jam \n"
                                << "Harga = Rp. " << hargaInternet[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Internet \n";
                                cin >> bayar;
                                kembali = bayar - hargaInternet[pilihBilling-1];
                                if (bayar >= hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaInternet[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaInternet[pilihBilling-1];
                                        if (bayar >= hargaInternet[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaInternet[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                default:
                                cout << "Input salah. \n";
                                break;        
                            } // akhir switchPilih caseBillingInternet nested.switchPilihBilling
                            cout << "Apakah anda ingin Print Out Billing Internet lagi ?\n"
                            << "1. Ya || 2. Tidak \n";
                            cin >> pilihWhile;
                            break; // akhir switchPilih caseBillingInternet
                    case 2: // awal switchPilih caseBillingGameOnline 
                            cout << "Billing Game Online Satelit Internet Gianyar \n"
                            << "Billing Game Online : \n";
                            for (int i=0;i<6;i++){
                                cout << billingGameOnline[i] << "\n";
                            }
                            cout << "Pilih Billing Game Online yang ingin di Print Out \n";
                            cin >> pilihBilling;

                            switch(pilihBilling){  // awal switchPilih caseBillingGameOnline nested.switchPilih Billing
                            case 1:
                                logBilling[id] += "Billing Game Online 1 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 1 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 2:
                                logBilling[id] += "Billing Game Online 2 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 2 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 3:
                                logBilling[id] += "Billing Game Online 3 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 3 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 4:
                                logBilling[id] += "Billing Game Online 4 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 4 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 5:
                                logBilling[id] += "Billing Game Online 5 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 5 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                case 6:
                                logBilling[id] += "Billing Game Online 8 Jam ";
                                id = id + 1;
                                cout << "Printing Out : Billing Game Online 8 Jam \n"
                                << "Harga = Rp. " << hargaGameOnline[pilihBilling-1] << "\n"
                                << "Masukkan Uang Pembayaran Billing Game Online \n";
                                cin >> bayar;
                                kembali = bayar - hargaGameOnline[pilihBilling-1];
                                if (bayar >= hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                    cout << "Kembali : Rp. " << kembali << "\n";
                                    cout << "Terima kasih telah membayar.\n";
                                } else if (bayar < hargaGameOnline[pilihBilling-1]) {
                                    cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                    cout << "Uang anda tidak mencukupi.\n";
                                    cout << "Apakah anda ingin menambah uang anda ?\n";
                                    cout << "\n 1. Ya || 2. Tidak\n";
                                    cin >> tambah;
                                    if (tambah == 1){ 
                                        cout << "Tambahan uang : Rp.";
                                        cin >> bayar1;
                                        cout << "\n";
                                        bayar += bayar1;
                                        kembali = bayar - hargaGameOnline[pilihBilling-1];
                                        if (bayar >= hargaGameOnline[pilihBilling-1]){
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Total Pembayaran : Rp." << bayar << " - " << hargaGameOnline[pilihBilling-1] << "\n";
                                            cout << "Kembali : Rp. " << kembali << "\n";
                                            cout << "Terima kasih telah membayar.\n";
                                        } else {
                                            logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                            cout << "Uang Pembayaran : Rp." << bayar << "\n";
                                            cout << "Tambahan uang tidak mencukupi total pembayaran.\n";
                                            cout << "Transaksi selesai. Billing deleted.\n";
                                        }
                                    } else {
                                        logBilling[id-1] = "";
                                            if (id != 0) {
                                                id = id - 1;
                                            }
                                        cout <<"Transaksi selesai. Billing deleted.\n";
                                    }
                                }
                                break;
                                default:
                                cout << "Input salah.\n";
                                break;
                            } // akhir switchPilih caseBillingGameOnline nested.switchPilihBilling
                            cout << "Apakah anda ingin Print Out Billing Game Online lagi ?\n"
                            << "1. Ya || 2. Tidak \n";
                            cin >> pilihWhile;
                            break; // akhir switchPilih caseBillingGameOnline 
                        case 3: // awal switchPilih caseExitProgram
                        pilihWhile = 0;  //menghentikan loop pilihWhile.
                        cout << "Log Transaksi Billing : ";
                        for(int i=0;i<100;i++){
                            cout << logBilling[i] << " ";
                        }
                        cout << endl << "Program exited.";
                        return 0; // akhiri program.
                        break; // akhir switchPilih caseExitProgram
                        default: 
                        pilihWhile = 0; // menghentikan loop pilihWhile.
                        cout << "Input Error.\n";
                        break; 
                } // akhir switchPilih
            if (pilihWhile == 1) { // kembalikan ke loop pilihWhile sehabis perintah switchPilih dijalankan.
                pilihWhile = 1;
                cout <<"\n";
            } else if (pilihWhile != 1) { // loop pilihWhile terhentikan dan menanyakan nilai loop mainMenu
            cout << "\nApakah anda ingin kembali ke Menu Utama ? \n"
            << "1. Ya || 2. Tidak \n";
            cin >> mainMenu;
            cout << "\n";
            }
        }// akhir loop PilihWhile.
    }// akhir loop mainMenu
    cout << "Program ditutup.";
    return 0;
}
