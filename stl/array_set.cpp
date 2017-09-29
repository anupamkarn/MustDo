#include <set>
#include <vector>

int main()
{
        std::vector < std::set<int> > entry(32); // std::vector constructor makes 32 calls to std::set<int> constructor
        entry[0].insert(23);
        // std::vector destructor makes 32 calls to std::set<int> destructor
}
