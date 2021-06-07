#include <iostream>
#include <vector>

using namespace std;

class Move{
private:
    int *data;
public:
    int get_data()
    {
        return *data;
    }
    Move(const Move &source);
    Move(Move &&source);
    Move(int val);
    ~Move();
    
};

Move::Move(int val)
{
    cout << "Single arg constructor for "  << val << endl;
    data = new int;         //allocates storage
    *data = val;
}

Move::~Move()
{
    delete data;                //free storage
    cout << "Destructor freeing memory" << endl;
}

Move::Move(const Move &source)
    :Move(*source.data)
{
    cout << "Move copy - " << *data << endl;
}

Move::Move(Move &&source)
    :data{source.data}
{
    cout << "Move constructor for : " << source.data << endl;
    source.data = nullptr;
}

void display_value(Move p)
{
    cout << "In display func for : " << p.get_data() << endl;
}

int main()
{
    Move yu(Move(move(move(17))));
    
    Move obj(7);
    
    display_value(obj);
    display_value(Move{11111});
    
    vector <Move> vec;
    
    vec.push_back(Move(77));
    
    cout << "After calling display_value func " << endl;
    
    Move obj2(obj);
    cout << "After copying to obj2" << endl;
    
    cout << endl;
}










