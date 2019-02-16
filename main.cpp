#include <iostream>

using namespace std;

class guest {

    private:
        int group_size;

    public:
        guest(int size = 1);
        int get_size() const;
};

class table {

    private:
        bool isFree;
        const int capability;
        int freeSeats;

    public:
        table(int capability)
            : isFree(true)
            , capability(capability)
            , freeSeats(capability)
            {
            cout << "create table with capacity = " << this->capability << endl;
            }
        
        bool isfree() const
            {
            return this->isFree;
            }
        
        void sitDown(guest g)
            {
            this->isFree = false;
            this->freeSeats -= g.get_size();
            cout << "table was occupied by group with size = " << g.get_size() << endl;
            }

};


guest::guest(int size)
    : group_size(size)
        {
        }


int guest::get_size() const
    {
    return this->group_size;
    }




int main()
{

    table t1(3);
    table t2(5);
    table t3(7);

    guest g1;
    guest g2(2);

    t1.sitDown(g1);

    cout << t1.isfree() << endl;
    cout << "prog end!!!" << endl;
    
    return 0;
}
