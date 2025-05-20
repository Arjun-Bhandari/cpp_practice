#include <iostream>

#include <vector>

using namespace std;


class BankAccount{
    private:
        string accountNo;
        double balance;

    public:
        BankAccount(string account , int amount){
            accountNo = account;
            balance = amount;
            cout << "BankAccount Constructure Called"<< endl;
        };

        double getBalance(){
        return balance;
        }

        void setBalance(int amount){
            if(amount > 0){
                balance+=amount;
                cout <<"You Deposite: " << amount << " Balance: " << balance << endl;
            }else{
                cout << "Invalid amount";
            }
        }

        void withdrawBal(int amount){
            if(amount > 0 && balance >= amount){
                balance-=amount;
                cout << "You withdraw: " << amount << " Balance Remaining: "<< balance << endl;
            }else{
                cout << "Invalid amount";
            }
        }
};



int main(){
BankAccount account("8676456434e", 1000);
account.setBalance(500);
account.withdrawBal(200);
int balance = account.getBalance();
cout << "Your Current Balance: " << balance << endl;
return 0;
}