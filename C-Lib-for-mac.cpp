#include <Foundation/Foundation.h>

int main()
{
    // Disable notifications
    [[NSUserNotificationCenter defaultUserNotificationCenter] setDelegate:nil];
    
    printf("Notifications disabled successfully.\n");
    
    return 0;
}