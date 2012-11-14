#include "stdio.h"
#include "windows.h"
#include "algorithm/algorithm.hpp"
#include "container/container.hpp"
#include "algorithm/stringmatch.hpp"

int main()
{
    const BYTE pp[] = {"124"};
    //cout << hex <<  zl::ExCRC32(pp, 3) << endl;
    printf("%08x", zl::ExCRC32(pp, 3));
    
    
    const char *pp2 = {"124"};
    printf("%08x", zl::HashKey(pp2));
    printf("%08x", zl::HashKey(100));

    zl::Pair<int, int> p;
    p.key =1; p.value =2;
    zl::Pair<int, int> p2(p);
    printf("%d %d", p2.key, p2.value);

    zl::Bit b1(1), b2;
    printf("%d %d %d %d %d %d\n", b1, b2, b1<b2, b1&b2, b1|b2, b1^b2);
    //std::cout << b1 << std::endl;
    //<< " "<< b2 << " " << b1<b2 << " " << b1&b2 << " " << b1|b2 << " " << b1^b2 << std::endl;
    
    char source[100] = "what the fuck xxxx qqqqd fsds kevin sadsadeqw";
    char pattern[10] = "kevin";
    int ret = zl::SundayMatchString(source, strlen(source), pattern, strlen(pattern), 0);
    printf("%d\n",ret);
    getchar();
    return 0;
}