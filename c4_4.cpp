#include <iostream>
using namespace std;

class Customer{
    private:
        string name;
    public:
        Customer(string name){
            this->name = name;
        }
        void display_name(){
            cout << "Customer Name: " << name << endl;
        }

};

class Product{
    private:
        int product_id;
    public:
        Product(int product_id){
            this->product_id = product_id;
        }
        void display_id(){
            cout << "Product ID: " << product_id << endl;
        }

};


class Order: public Customer, public Product{
    private:
        static int order_num; 
    public:
        Order(string name, int product_id): Customer(name), Product(product_id){
            cout << "Order "  << order_num<<  " Initilized" << endl;
            order_num++;
        };

        void display(){
            cout << "---------------------" << endl;
            display_name();
            display_id();
        }

};

int Order::order_num = 1;

int main(int argc, char const *argv[]){
    
    Order o1("John", 10000);
    Order o2("Tim", 20000);
    Order o3("Tom", 30000);


    o1.display();
    o2.display();
    o3.display();

    return 0;
}