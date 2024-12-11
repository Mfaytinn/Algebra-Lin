
#include <vector>

template<typename T>
class Vector {
private:
    std::vector<T> data;
    
public:
    Vector(int s);
    double& operator[](int i);
    int size();

}