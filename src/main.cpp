#include <iostream>
#include <string>
#include <rect.hpp>
using namespace std;

float length, 
    width,
    midpoint_x, 
    midpoint_y;

int main(){
    while(1){
       
        std::string option_str;
        int option_int;
        std::cout << "Masukan Data Untuk Masing-Masing Persegi atau Persegi Panjang" << std::endl;
        std::cout << "Persegi 1" <<std::endl;
             cout << "Panjang        : "; cin >> length;      
             cout << "Lebar          : "; cin >> width;       
             cout << "Titik tengah x : "; cin >> midpoint_x;  
             cout << "Titik tengah y : "; cin >> midpoint_y;  
             cout <<  endl;
        input();
        persegiPanjang obj1(midpoint_x, midpoint_y, length, width);

        std::cout << "Persegi 2" << std::endl;
             cout << "Panjang        : "; cin >> length;      
             cout << "Lebar          : "; cin >> width;       
             cout << "Titik tengah x : "; cin >> midpoint_x;  
             cout << "Titik tengah y : "; cin >> midpoint_y;  
             cout <<  endl;
        input();
        persegiPanjang obj2(midpoint_x, midpoint_y, length, width);
        persegiPanjang obj3(0,0,0,0);
        clear();

        std::cout << "Data yang dimasukkan :" << std::endl;
        std::cout << "Persegi panjang 1" << std::endl; 
            obj1.output();
            cout << endl;
            cout << endl;
        std::cout << "Persegi panjang 2" << std::endl;
            obj2.output();
            std::cout << std::endl;


        clear();
        
        while(1){
            clear();
            option_int = optionthis();
            switch (option_int){
                case 0:
                    {
                        cout << "Operator + " <<endl;
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 1:
                    {
                        cout << "Operator - " << endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                        cout << "Operator ++ Pada Persegi Panjang 1 " << endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 3:
                    {
                        cout << "Operator ++ Pada Persegi Panjang 1 " << endl;
                        ++obj2;
                        obj1.output();
                        --obj2;
                    }
                    break;
                case 4:
                    {
                        cout << "Operator ++ Pada Persegi Panjang 2 " << endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                        std::cout << "Operator -- Pada Persegi Panjang 2 " << std::endl;
                        --obj2;
                        obj1.output();
                        ++obj2;
                    }
                    break;
                case 6:
                    {
                        std::cout << "Operaotr [] " << std::endl;
                        std::cout << "Nilai X Max Persegi 1 : " << obj1[2] << std::endl;
                        std::cout << "Nilai X Max Persegi 2 : " << obj2[2] << std::endl;
                        if (obj1[2] > obj2[2]){
                            cout << "X Max Persegi 1 lebih besar dari X Max Persegi 2" <<endl;
                        }
                        else if(obj2[2] > obj1[2]){
                            cout << "X Max Objek 2 lebih besar dari X Max Objek 1" <<endl;
                        }
                        else{
                            cout << "Kedua X Max sama";
                        }
                    }
                    break;
                case 7:
                    {
                        std::cout << "Operator == " << std::endl;
                        if (obj1==obj2){
                            cout << "Persegi panjang beririsan" << endl;
                        }else{
                            cout << "Persegi panjang tidak beririsan" << endl;
                        }
                    }
                    break;
                }
            std::cout << std::endl<< std::endl;
            std::cout << "Apakah anda ingin mencoba operator lain (y/n) : ";
            std::cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    clear();
    std::cout << std::endl;
    std::cout << "Apakah anda ingin mencoba demgan objek baru (y/n) :";
        std::cin >> option_str;
        if(option_str == "N" || option_str == "n"){
            break;
        }
}

return 0;
}

void input(){
    std::cout << "Panjang        : "; std::cin >> length;      
    std::cout << "Lebar          : "; std::cin >> width;       
    std::cout << "Titik tengah x : "; std::cin >> midpoint_x;  
    std::cout << "Titik tengah y : "; std::cin >> midpoint_y;  
    std::cout << std::endl;

   
}
void clear(){
    system("clear || CLS");
}
int optionthis(){
    std::cout << std::endl;
    int option_fungsi;
    std::cout << "Pilihlah Operasi yang ingin anda lakukan \n 0. Operator + \n 1. Operator - \n 2. Operator ++ Objek 1 \n 3. Operator -- Objek 1 \n 4. Operator ++ Objek 2 \n 5. Operator -- Objek 2 \n 6. Operator []  \n 7. Operator == \n Masukan pilihan anda : ";
    std::cin >> option_fungsi;
    return option_fungsi;
}
