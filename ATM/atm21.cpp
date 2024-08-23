#include<iostream>
using namespace std;

int main ()
{
    int choice;
    int password, pin, enter_amount;
    float withdrawal_amount, deposit_amount;

    cout << "\n --------------- WELCOME TO BANK OF Health ---------------" << endl;
    cout << "PIN Giriniz: " << endl;
    cin >> password;

    cout << "Hesabınızı Aktif Etmek İçin Tutar Giriniz: " << endl;
    cin >> enter_amount;

    cout << "Onay için PIN kodunu girin: " << endl;    
    cin >> pin;

    if (password == pin)
    {
        cout << "Bunlardan herhangi birini seçin: " << endl;
        cout << " 1. Para Çekme" << endl;
        cout << " 2. Mevduat" << endl;
        cout << " 3. Mini-ekstre" << endl;
        cout << " 4. PIN Değiştirme" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Çekilecek Tutarı Girin: " << endl;
                cin >> withdrawal_amount;
                if (withdrawal_amount <= enter_amount) {
                    enter_amount -= withdrawal_amount;
                    cout << "Paranızı çektikten sonra bakiyeniz: " << enter_amount << endl;
                } else {
                    cout << "Yetersiz bakiye!" << endl;
                }
                break;
            }        
            case 2:
            {
                cout << "Hesabınıza yatırılacak tutarı girin: " << endl;
                cin >> deposit_amount;
                enter_amount += deposit_amount;
                cout << "Yatırma işleminden sonra bakiyeniz: " << enter_amount << endl;
                break;
            }
            case 3:
            {
                cout << "Hesabınızdaki Bakiye: " << enter_amount << endl;
                break;
            }
            case 4:
            {
                cout << "Mevcut PIN'inizi girin: " << endl;
                cin >> pin;
                if (pin == password)
                {
                    cout << "Yeni PIN Girin: " << endl;
                    cin >> pin;
                    password = pin;
                    cout << "PIN başarıyla değiştirildi" << endl;
                }
                else
                    cout << "Mevcut PIN'iniz yanlış, PIN değiştirilemedi" << endl;
                break;
            }
            default:
                cout << "ÜZGÜNÜM, geçersiz bir giriş yaptınız." << endl;
                break;
        }
    }
    else
    {
        cout << "ÜZGÜNÜM, PIN eşleşmiyor. LÜTFEN tekrar deneyin." << endl;
    }

    return 0;
}