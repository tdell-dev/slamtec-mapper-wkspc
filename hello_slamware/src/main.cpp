#include <rpos/robot_platforms/slamware_core_platform.h>
#include <iostream>

using namespace std;
using namespace rpos::robot_platforms;

int main(int argc, char * argv[]) {
    SlamwareCorePlatform platform = SlamwareCorePlatform::connect("192.168.11.200", 1445);
    cout << "Base version: " << platform.getSDPVersion() << endl;
    return 0;
}
