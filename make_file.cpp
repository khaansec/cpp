//Includes the code necessary for creating a file on the desktop,
//while also reporting on errors

#include <iostream>
#include <windows.h>
#include <fileapi.h>
#include <errhandlingapi.h>


int main()
{
    HANDLE hFile = INVALID_HANDLE_VALUE;

    LPCWSTR filePath = L"C:\\Users\\User\\Desktop\\file.txt";

    hFile = CreateFileW(filePath, GENERIC_ALL, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

    if (hFile == INVALID_HANDLE_VALUE) {
        printf("[-] CreateFileW Api Function Failed With Error : %d\n", GetLastError());
        return -1;
    }
}
