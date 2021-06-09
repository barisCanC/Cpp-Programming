#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:
    Deep(const Deep &source);
    Deep(int val = 5);
    ~Deep();
    int get_data(){return *data;}
};

Deep::Deep(int val)
{
    data = new int;         //allocates storage
    *data = val;
}

Deep::~Deep()
{
    delete data;                //free storage
    cout << "Destructor freeing memory" << endl;
}

Deep::Deep(const Deep &source)
    :Deep(*source.data)
{
    cout << "Deep copy - " << *data << endl;
}

void display_value(Deep p)
{
    cout << "In display func " << endl;
}

int main()
{
    Deep object;
    
    cout << object.get_data() << endl;
    
    Deep obj(7);
    
    display_value(obj);
    
    cout << "After calling display_value func " << endl;
    
    Deep obj2(obj);
    cout << "After copying to obj2" << endl;
    
    cout << endl;
}










