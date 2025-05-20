#include <iostream>

#include <vector>
#include <string>

using namespace std;


class Tea{

    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serve):teaName(name), servings(serve){
            cout << "Tea Constructor Called" << teaName << endl;
            
        }

        virtual void brew() const {
            cout << "Brewing Tea "<< teaName << "Using generic method" << endl;
        }
        virtual void serve() const {
            cout << "Serving Tea "<< servings << "cups Using generic method" << endl;
        }

        virtual ~Tea(){
            cout << "Destrucutre Called for " << teaName <<  endl;
        }
    };


    class RedTea : public Tea{
        public:
            RedTea(int serve) : Tea("Red Tea", serve){
                cout << "Red Tea Constructure Called"<< endl;
            }

            void brew() const override {
                cout << "Brewing " << teaName << "By steeping red tea" << endl;
            }

            ~RedTea(){
                cout << "Green Tea Detructure Called" << teaName << endl;
            }
    };

class MasalaChai : public Tea{
    public:
     MasalaChai(int serve) : Tea("Masala Chai ", serve){
        cout << "Construcutre Called in " << teaName << endl;
     }

     void brew() const override final {
        cout << "Brewwing "<< teaName << "By steeping Masala chai" << endl;
     }

     ~MasalaChai (){
        cout << "Destructure Called " << teaName << endl;
     }
};


// class SpiceChai: public MasalaChai {
//     public:
//         void brew()const override {
// cout << "Cannot override final while inheriting the final function keyword initializeed "<< endl;
//      }
// };



 int main(){

    Tea* chai = new RedTea(2);
    Tea* tea = new MasalaChai(4);

    chai->brew();
    chai->serve();
    tea->brew();
    tea->serve();


    delete chai;
     delete tea;


    return 0;

 }
