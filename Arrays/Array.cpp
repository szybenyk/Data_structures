#include <iostream>
#include <cassert>

class Array
{
private:
    int m_size{};
    int* m_data{};

public:

    explicit Array(int size);
    Array(const Array& array);

    ~Array();

    int size() const;
    int& operator[](int index) const;
    Array& operator=(const Array& array);
};

Array::Array(int size) : m_size{ size }
{
    m_data = new int[m_size];
}

Array::Array(const Array& array)
{
    if (this == &array)
        //return *this;
    
    if (m_size != array.size())
    {
        delete[] m_data;
        m_data = nullptr;
        m_size = 0;
        m_data = new int[array.size()];
        m_size = array.size();
    }
    for(int i{ 0 }; i < m_size; ++i)
    {
        m_data[i] = array[i];
    }
}

Array::~Array()
{
    delete[] m_data;
}

int Array::size() const
{
    return m_size;
}

int& Array::operator[](int index) const
{
    assert( index < m_size );
    return m_data[index];
}

Array& Array::operator=(const Array& array)
{
    if (this == &array)
        return *this;
    
    if (m_size != array.size())
    {
        delete[] m_data;
        m_data = nullptr;
        m_size = 0;
        m_data = new int[array.size()];
        m_size = array.size();
    }
    for(int i{ 0 }; i < m_size; ++i)
    {
        m_data[i] = array[i];
    }
    return *this;
}


int main()
{
    Array myarr{ Array(5) };
    std::cout << "MY array size is: " <<  myarr.size() << '\n';
    myarr[0] = 23;
    myarr[1] = 56;
    for(int counter{ 0 }; counter < myarr.size(); ++counter)
    {
        std::cout << myarr[counter] << '\t';
    }
    std::cout << '\n';
    
    return 0;
}
