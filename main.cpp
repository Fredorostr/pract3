#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>

using namespace std;
int main() {
    char doing;
    int secret_num;
    int entered;
    int table [10][10];
    int num;
    string answer;
    while (true){
        while(true) {
            cout<<"Выберете действие\n";
            cout<<"'1' - игра угадай число \n '2' - таблица умножения \n '3' - нахождение делителей \n '4' - выход\n";
            cin>>doing;
            if (doing == '1' || doing == '2' || doing == '3' || doing == '4'){
                break;
            }
        }
        switch (doing) {
            case '1':
            srand(time(0));
            secret_num = 1 + rand() % 100;
            while (entered != secret_num){
                entered = 0;
                cout<<"введите число: ";
                cin>>entered;
                if (entered > secret_num) {
                    cout<<"Слишком много, бери меньше\n";
                }
                else if (entered < secret_num) {
                    cout<<"Слишком мало, бери больше\n";
                }
                else if (entered == secret_num) {
                    cout<<"Поздравляю, угадал";
                }
            }
            break;
            case '2':
            for (int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    table[i][j] = (i +1) * (j + 1);
                }
            }
            cout<<"ТАБЛИЦА\n";
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    cout<<table[i][j]<<"\t";
                }
            cout<<"\n";
            }
            break;
            case '3':
            cout<<"Введите число\n";
            cin>>num;
            cout<<"Делители\n";
            for(int i = 1; i <= num; i++){
                if (num % i == 0) {
                cout<<i<<"\n";
                }
            }
            break;
            case '4':
                return 0;
            }
        }
    }