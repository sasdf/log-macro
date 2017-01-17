#include "pprint.h"
int main(int argc, char *argv[])
{
    INF("%s %d", "Test", 1);
    INFStart();
    for(int i=0;i<3;i++)
        INFRaw("%d ", i);
    INFEnd();
    OPT("Test");
    ACK("Test");
    DBG("Test");
    ERR("Test");
    return 0;
}
