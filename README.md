# Ordinary Water Thermodynamic Properties

[![Build status](https://ci.appveyor.com/api/projects/status/rrr2gbi0pw2dkynv?svg=true)](https://ci.appveyor.com/project/jonathan-rizk/owtp)

Ordinary Water Thermodynamic Properties (OWTP) is an open-source C library that calculates the thermodynamic properties of ordinary water, which is based on release R7-97 from the International Association for the Properties of Water and Steam (IAPWS R7-97).

## Project Goals

1. Provide a thoroughly-tested, lightweight library that provides conventional steam tables functionality.
2. Encourage the proliferation of applications that would require the use of conventional steam tables.
3. Provide relatively easy interop with other languages.

## Compilation

Right now, only building with Windows is supported. The next step of this project will be to add Linux support, but this may take some time for me to set up properly because I don't have a Linux box and I'm new to Linux.

To compile the code into a shared library:

1. Clone the repo to a directory.
2. Cmake is the build generator, so the following commands should allow you to build the library.

`mkdir build`

`cmake -Bbuild -H. -DCMAKE_CONFIGURATION_TYPES=Release`

`cmake --build build --config Release`

   This should build a shared library named `OWTP.dll` in the following folder: `./build/src/bin/`

## Contact

If you need help or want to contribute, then please feel free to come into the discord server.

Invite link: https://discord.gg/S2cz7r
