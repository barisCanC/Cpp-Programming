#include <iostream>

using namespace std;

class Shallow{
private:
    int *data;
public:
    Shallow(const Shallow &source);
    Shallow(int val);
    ~Shallow();
    
};

Shallow::Shallow(int val)
{
    data = new int;         //allocates storage
    *data = val;
}

Shallow::~Shallow()
{
    delete data;                //free storage
    cout << "Destructor freeing memory" << endl;
}

Shallow::Shallow(const Shallow &source)
//    :Shallow(*source.data)
    :data(source.data)
{
    cout << "Shallow copy - " << *data << endl;
}

void display_value(Shallow p)
{
    cout << "In display func " << endl;
}

int main()
{
    Shallow obj(7);
    
    display_value(obj);
    
    cout << "After calling display_value func " << endl;
    
    Shallow obj2(obj);
    cout << "After copying to obj2" << endl;
    
    cout << endl;
}










