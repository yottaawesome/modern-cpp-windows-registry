# Source code for "Use Modern C++ to Access the Windows Registry"

## Introduction

This is an unofficial source code repository for [Giovanni Dicanio's](https://github.com/GiovanniDicanio) May 2017 MSDN article on using modern C++ to read and write to the Windows Registry: [Use Modern C++ to Access the Windows Registry](https://docs.microsoft.com/en-us/archive/msdn-magazine/2017/may/c-use-modern-c-to-access-the-windows-registry). The code is consolidated here for my own reference and convenience, and remains the copyright of Giovanni Dicanio.

## Using this repository

You can simply clone this repo and open the SLN file `ModernCppWinReg.sln` located in the `src` directory with any version of Visual Studio 2019. You'll need the _Desktop Development with C++_ Visual Studio workload to be able to run the sample, which will just lookup from the Windows Registry the current version of Firefox installed on your machine (the sample will generate an exception and print an error message if you don't have Firefox installed).

The relevant code is all contained in the `Registry.hpp` header. It's strongly recommended you read through the actual [MSDN article](https://docs.microsoft.com/en-us/archive/msdn-magazine/2017/may/c-use-modern-c-to-access-the-windows-registry) to understand how it's put together and what the contained functions actually do.

## Additional resources

* Giovanni Dicanio's [GitHub account](https://github.com/GiovanniDicanio)
* Giovanni Dicanio's [WinReg library](https://github.com/GiovanniDicanio/WinReg)
