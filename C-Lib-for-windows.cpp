#include <windows.h>

int main()
{
    // Disable balloon notifications
    BOOL result = SystemParametersInfo(SPI_SETBEEP, 0, NULL, SPIF_SENDCHANGE | SPIF_UPDATEINIFILE);
    
    if (result)
    {
        printf("Notifications disabled successfully.\n");
    }
    else
    {
        printf("Error disabling notifications.\n");
    }
    
    return 0;
}