/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int HP;
    int Power;
    int Obat =3;
    
    int HPMonster;
    int SeranganMonster;
    
    string Level;
    string Karakter;
    string Lanjutkan;
    string Skin;
    string Pilih;
    
    
   
           
            cout << "----------------------------"  << endl;
            cout << "|      MULAI GAME         |" << endl;
            cout << "----------------------------" << endl;
            
            cout << endl;
            cout << " Ketik Apa Saja Untuk Memulai Game  = ";
            cin >> Pilih;
            
            if ( Pilih == "1"){
                Pilih=  "MULAI GAME";
               
            }
    
        
       while(true){
            cout << "\033[2J\033[1;1H";
            cout << endl;
        
        
        cout << endl;
        cout << "-----------------------------------" << endl;
        cout << "|||||||||||||||||||||||||||||||||||" << endl;
        cout << "|           1. EASY               |" << endl;
        cout << "|||||||||||||||||||||||||||||||||||" << endl;
        cout << "|           2. NORMAL              " << endl;
        cout << "|||||||||||||||||||||||||||||||||||" << endl;
        cout << "|           3. HARD               |" << endl;
        cout << "|||||||||||||||||||||||||||||||||||" << endl;
        cout << "-----------------------------------" << endl;
        
        
        cout << endl;
        cout << "Silahkan Pilih Level = ";
        cin >> Pilih;
        
        if (Pilih == "1"){
            Level = "EASY";
            HP = 350;
            Power = 90;
         
            HPMonster = 300;
            SeranganMonster = 50;
            
            break;
        }
        
        else if (Pilih == "2"){
            Level = "NORMAL";
            HP = 300;
            Power = 70;
            
            HPMonster = 325 ;
            SeranganMonster = 65;
            
            break;
        }
        
        else if (Pilih == "3"){
            Level = "HARD";
            HP = 225;
            Power = 40;
            
            HPMonster = 300 ;
            SeranganMonster = 70;
            
            break;
        }
        else{
            
        continue;
        }
    }
    
        cout << endl;
        cout << " Level Yang Anda Pilih Adalah Level = " << Level << endl;
        
        cout << endl;
        cout << "Ketik Apa Saja Untuk Lanjutkan Permainan =  ";
        cin >>  Lanjutkan;
        
        while(true){
            cout << "\033[2J\033[1;1H";
            cout << endl;
            cout << "----------------------------------"  << endl;
            cout << "|    SILAHKAN PILIH KARAKTER      |" << endl;
            cout << "----------------------------------"  << endl;
            cout << "|      1. KSATRIA                  |" << endl;
            cout << "|         SENJATA : PEDANG         |" << endl;
            cout << "----------------------------------"  << endl;
            cout << "|      2. PEMANAH                  |" << endl;
            cout << "|         SENJATA : PANAH          |" << endl;
            cout << "----------------------------------"  << endl;
            cout << "|       3. SNIPER                  |" << endl;
            cout << "|          SENJATA :TEMBAKAN       |" << endl;
            cout << "----------------------------------"  << endl;
            
            cout << " Silahkan Pilih Karakter Anda = ";
            cin >> Karakter;
            
            if( Karakter == "1"){
            Karakter =  "KSATRIA";
            break;
            }
            
            else if(Karakter == "2"){
            Karakter = "PEMANAH";
            break;
            }
            
            else if(Karakter == "3"){
            Karakter = "SNIPER";
            break;
            }
            
            else{
             } continue;
        }
        
        cout << endl;
        cout << " Karakter Yang Anda Pilih Adalah Karakter = " << Karakter << endl ;
        
        cout << endl;
        cout << "Ketik Apa Saja Untuk Lanjutkan Permainan =  ";
        cin >>  Lanjutkan;
        
        while(true){
            cout << "\033[2J\033[1;1H";
            cout << endl;
            cout <<"******************************" <<endl;  
            cout <<"*      SILAHKAN PILIH SKIN   *" <<endl;
            cout <<"*        SKIN SENJATA        *" << endl;
            cout <<"******************************" <<endl;
            cout <<"*       1. LAPISAN EMAS      *" <<endl;
            cout <<"*       2. LAPISAN API       *" <<endl;
            cout <<"*       3. LAPISAN PETIR     *" <<endl;
            cout <<"******************************" <<endl;
             cout << endl;
            cout << " Silahkan Pilih SKIN = " << endl;
            cin >> Skin;
            
            if ( Skin == "1"){
                Skin =  " LAPISAN EMAS ";
               break;
            }
            
            else if (Skin == "2"){
               Skin = "LAPISAN API ";
                break;
            }
           
            else if (Skin == "3"){
               Skin  = "LAPISAN  PETIR ";
               break;
            }
            
             else {
               continue;
        }   }
        
        
            
          cout << endl;
          cout << " SKIN Yang Anda Pilih Adalah  " << Skin << endl;
          cout << endl;
            
          cout << endl;
          cout << "GAME AKAN SEGERA DI MULAI...  ";
          cout << endl;
          
           cout << endl;
           cout << "Ketik Apa Saja Untuk Lanjutkan Permainan =  ";
           cin >>  Lanjutkan;
     
          
         cout << endl;
        
            while(true){
            cout << "\033[2J\033[1;1H";
            cout << endl;
    
            cout << " " << Karakter << ",  ";
            
            cout << endl;
            cout << "HP = " << HP << endl;
            cout << "Power = " << Power << endl;
            
            cout << endl;
            cout << "HPMonster = " << HPMonster << endl;
            
            if (HP <= 0){
                cout << endl;
                cout << " YAH KAMU KALAH ;("  << endl;
                
                break;
            }
            
            else if (HPMonster <= 0){
                cout << endl;
                cout << " YEAY KAMU MENANG  " << endl;
                
                break;
                
            }
            
            cout << endl;
            cout << " 1. Serang " << endl;
            cout << " 2. Tambah Darah " << endl;
            
            cout << "Pilihan Anda " << endl;
            cin >> Pilih;
            
            if (Pilih == "1"){
                HP -= SeranganMonster;
                HPMonster -= Power;
                
                continue;
            }
            
             else if ( Pilih == "2"){  
                
                if(Obat >= 1){
                    HP += 100;
                    Obat -= 1;
                    
                    continue;
                }
                
                else if(Obat < 1){
                    continue;
                }
               
            }
         }
    
         
         
    return 0;
}