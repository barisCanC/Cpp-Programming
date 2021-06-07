#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    char *str;              // pointer to a char[] that holds a C - style string
public:
    Mystring();                                         //No - args constructor
    Mystring(const Mystring &source);                   //Overloaded constructor
    Mystring(const char *s);                            //Copy constructor
    Mystring(Mystring &&source);              //Move ctor
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);           //Copy assignment operator
    
    void display() const;
    int get_length() const;                             //getters
    const char *get_str() const;

};

#endif // _MYSTRING_H_








