cmake_minimum_required(VERSION 3.10)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "Vita toolchain")
  endif()
endif()

project(AindaEmTransitoNative C CXX)
include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(VITA_APP_NAME "Ainda em Transito")
set(VITA_TITLEID "AITRN0001")
set(VITA_VERSION "01.00")

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME}
  SDL2_ttf
  SDL2
  freetype
  png
  z
  bz2

  vitaGL
  vitashark
  SceShaccCgExt
  mathneon

  taihen_stub
  SceAppMgr_stub
  SceAudio_stub
  SceAudioIn_stub
  SceCtrl_stub
  SceCommonDialog_stub
  SceDisplay_stub
  SceKernelDmacMgr_stub
  SceGxm_stub
  SceShaccCg_stub
  SceSysmodule_stub
  ScePower_stub
  SceTouch_stub
  SceMotion_stub
  SceIme_stub
  SceHid_stub

  m
)

vita_create_self(eboot.bin ${PROJECT_NAME})

vita_create_vpk(Ainda_em_Transito_Native.vpk ${VITA_TITLEID} eboot.bin
  VERSION ${VITA_VERSION}
  NAME ${VITA_APP_NAME}
  FILE assets/NanaPixel.ttf assets/NanaPixel.ttf
  FILE assets/icon0.png sce_sys/icon0.png
)
