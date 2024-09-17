#include<unistd.h>
int main()
{
    char buff[20];
    read(0, buff, 10);  // 0 is the file descriptor for standard input (keyboard), read 10 bytes
    write(1, buff, 10);  // 0 is the file descriptor for standard output (screen), print 10 bytes
}