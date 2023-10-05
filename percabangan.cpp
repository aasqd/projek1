/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
/*
void percabangan_1(); {
        
        int nilai;
        
        cout<<"masukan nilai : "; cin>>nilai;
        
        if (nilai >= 90){
            cout<<"nilai angka : A"<<endl;
        }
        if (nilai < 90){
            cout<<"nilai angka : B"<<endl;
        }
        else{
            cout <<"maaf anda tidak lulusl"<<endl;
        }
    }
  
 void percabangan_2(); {
        
        int nilai;
        
        cout<<"masukan nilai : "; cin>>nilai;
        
        if (nilai%2==0){
            cout<<"nilai"<<nilai<<"adalah nilai genap"<<endl;
        }
        else{
            cout <<"nilai"<<nilai<<"adalah nilai ganjil"<<endl;
        }
    }
 void percabangan_3(); {
        
        int gol;
        
        cout<<"masukan gol : "; cin>>gol;
        
        switch (gol)
        case 1 : cout<<"gaji = 100";
        break;
        
        case 2 : cout<<"gaji = 200";
        break;
        
        case 3 : cout<<"gaji = 300";
        break;
        
        default : cout<<"golongan salah";
        break;
    }
    void percabangan_4(); {
        
        int a,b,c,max;
        
        cout<<"masukan 3 buah bilangan : ";
        
        cin >> a >> b >> c;
        
        if (a > b)
        if (a > c) max = a; //a>b and a>c
        else max = c; 
        
        else
        
        if (b > c) max = b;
        else max = c;
        
        cout<<"maksimum adalah: "<< max << endl;
    }
 void percabangan_5(); {
        
        int a,b,c,min;
        
        cout<<"masukan 3 buah bilangan : ";
        
        cin >> a >> b >> c;
        
        if (a < b)
        if (a < c) min = a; //a>b and a>c
        else min = c; 
        
        else
        
        if (b < c) min = b;
        else min = c;
        
        cout<<"minimum adalah: "<< min << endl;
    }
    
     void percabangan_6(); {
        
        int a,b,c;
        
        cout<<"masukan 3 buah bilangan : ";
        
        cin >> a >> b >> c;
        
         cout<<"nilai tertinggi adalah : ";
        
        
        
        
        if ((b>=a) && (b>=c)) cout<< b <<endl;
        
        if ((c>=a) && (c>=b)) cout<< c <<endl;
    }
    void percabangan_7(); {
        
        char jawab;
        
        cout<<"yakin (y/t) : "; cin>> jawab;
        
        if (jawab == 'Y' || jawab == 'y')
        
        cout<<" ok, anda yakin" <<endl;
        else
        cout<<"maaf anda tidak yakin.."<< endl;
    }
        void percabangan_8(); {
        
        string jawab;
        
        cout <<"yakin (yakin/tidak) : "; cin>> jawab;
        
        if (jawab == "yakin" || jawab == "Yakin")
        
        cout<<" ok, anda yakin" <<endl;
        else
        cout<<"maaf, anda tidak yakin.."<< endl;
    }
            void percabangan_9(); {
        
        char status;
        int grade;
        
        cout <<"masukan grade : "; cin>> grade;
        
        status = (grade >= 60) ? 'L' : 'G';
        
        cout<<status<<endl;
    }
       void percabangan_10(); {
        
        string status;
        int grade;
        
        cout <<"masukan grade : "; cin>> grade;
        
        status = (grade >= 60) ? "lulus" : "g lulus";
        
        cout<<status<<endl;
    }
    
       void percabangan_11(); {
        
        int m = 26,n=82;
        
        int min = m < n ? m:n;
        
        cout<<"bilangan terkecil adalah "<<min<<endl;
    }
    
    void percabangan_12(); {
        
        int m = 26,n=82;
        
        int max = m > n ? m:n;
        
        cout<<"bilangan terbesar adalah "<<max<<endl;
    }
    
     void percabangan_12(); {
         
        string status;
        int nim;
        
        cout <<"masukan nim : "; cin>> nim;
        if (nim%2==0){
            cout<<"nim : genap"<<endl;
        }
        else{
            cout <<"nim : ganjil"<<endl;
        }
        
        int uts,uas,tugas;
        
        cout<<"masukan nilai uts, : ";cin>>uts
        
        
     }
     */
     
     void percabangan_13(); {
         
     int uas, uts, tugas, max, min, rata_rata, nim;
     string nama;
     
     cout <<"masukan nama : "; cin>> nama;
     cout <<"masukan nim : "; cin>> nim;
     cout <<"masukan uts : "; cin>> uts;
     cout <<"masukan uas : "; cin>> uas;
     cout <<"masukan tugas: "; cin>> tugas;
     
      if (nim%2==0){
            cout<<"nim : genap"<<endl;
        }
        else{
            cout <<"nim : ganjil"<<endl;
        }
    cout<<"nama : "<<nama<<endl;
        
        if (uts > uas)
        if (uas > tugas) max = uts;
        else max = tugas; 
        
        else
        
        if (uas > tugas) max = uas;
        else max = tugas;
        
        cout<<"nilai maksimum adalah: "<< max << endl;
        
        if (uts < uas)
        if (uas < tugas) min = uts;
        else min = tugas; 
        
        else
        
        if (uas < tugas) min = uas;
        else min = tugas;
        
        cout<<"nilai minimum adalah: "<< min << endl;
        
        rata_rata = (uts+uas+tugas)/3;
        
        cout<<"rata rata nilai anda: "<<rata_rata<<endl;
        
        if (rata_rata >= 90){
            cout<<("grade : A")<<endl;}
        else
        if (rata_rata >= 80 || rata_rata < 90){
            cout<<("grade : A-")<<endl;}
        else
        if (rata_rata >= 75 || rata_rata < 80){
        cout<<("grade : B+")<<endl;}
        else
        if (rata_rata >= 70 || rata_rata < 75){
            cout<<("grade : B")<<endl;}
        else
        if (rata_rata >= 65 || rata_rata < 70){
            cout<<("grade : C+")<<endl;}
        else
        if (rata_rata >= 60 || rata_rata < 65){
            cout<<("grade : C")<<endl;}
        else
        if (rata_rata >= 55 || rata_rata < 60){
            cout<<("grade : D")<<endl;}
            
        if (rata_rata < 55){
            cout<<"grade : F"<<endl;}
        
     }
    return 0;
}