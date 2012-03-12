# This Toolchain file is used to cross compile the ps3
# version of Hatari under linux using powerpc64-ps3
# use : cmake -DCMAKE_TOOLCHAIN_FILE=tc-ps3.cmake

# this one is important
SET(CMAKE_SYSTEM_NAME Generic)
#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)

SET(CMAKE_SYSTEM_PROCESSOR powerpc64)

SET(PS3DEV /usr/local/ps3dev)
SET(PSL1GHT ${PS3DEV})

# specify the cross compiler
SET(CMAKE_C_COMPILER powerpc64-ps3-elf-gcc)
SET(CMAKE_CXX_COMPILER powerpc64-ps3-elf-g++)
SET(CMAKE_C_FLAGS "-mcpu=cell -I${PSL1GHT}/ppu/include -I${PS3DEV}/portlibs/ppu/include")
SET(CMAKE_CXX_FLAGS "-mcpu=cell -I${PSL1GHT}/ppu/include -I${PS3DEV}/portlibs/ppu/include")

# where is the target environment 
SET(CMAKE_FIND_ROOT_PATH ${PS3DEV}/ppu ${PSL1GHT}/ppu ${PS3DEV}/portlibs/ppu )

# FindSDL.cmake doesn't search correctly in CMAKE_FIND_ROOT_PATH
# so we force SDLDIR here
set ( ENV{SDLDIR} ${PS3DEV}/portlibs/ppu )

SET(ZLIB_INCLUDE_DIRS "${PS3DEV}/portlibs/ppu/include")
SET(ZLIB_LIBRARIES    "${PS3DEV}/portlibs/ppu/lib")

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
