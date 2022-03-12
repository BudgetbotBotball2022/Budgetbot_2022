//Wombat Controller Robot
#include <kipr/wombat.h>
int main()
{
int counter=0;
create_connect();
do
{
while (get_create_rbump() == 0)
{
create_drive_direct(100, 100);
}
create_stop();
counter = counter + 1;
msleep(100);
create_drive_direct(-100, -100);
msleep(400);
create_drive_direct(100, -100);
msleep(3300);
create_stop();
}while(counter < 3);
create_disconnect();
return 0;
}
