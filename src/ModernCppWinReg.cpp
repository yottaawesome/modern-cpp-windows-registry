#include <iostream>
#include "Registry.hpp"

int main(int argc, char** args)
{
    try
    {
        std::wcout
            << L"Your current version of Mozilla Firefox is (drumroll): "
            << win32::RegGetString(HKEY_CURRENT_USER, L"Software\\Mozilla\\Mozilla Firefox", L"CurrentVersion")
            << std::endl;
    }
    catch (const win32::RegistryError& ex)
    {
        std::wcout
            << L"An error occurred, but this is probably because you don't have Firefox installed."
            << std::endl
            << L"Error information: "
            << ex.what()
            << std::endl;
    }

    return 0;
}
