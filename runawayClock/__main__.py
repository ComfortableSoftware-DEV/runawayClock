#!/usr/bin/env /usr/bin/python


from CF.CLASSES_D import _01_PKL_C as CF_PKL
from CF.SUBM_D import (
    _00_OS as CF_OS,
    _00_OS_VARS as CF_OSV,
)
from sys import argv
import importlib


locals().update(CF_OSV.ALL_THE_KEYS)
PKL_DIR = CF_OS.HOME + "/.config/PKL_D/runawayClock"
PKL_NAME = "runawayClock.pkl"
PKL_URL = f"""{PKL_DIR}/{PKL_NAME}"""


DS_MAIN = {
    K_VERSION: 0,
    K_DEFAULT: "_01_CLOCK",
    K_LAST: "",
}


MODULES = {}
THIS_MODULE = ""


def getModules():
  global MODULES
  _modulesList_ = CF_OS.globPythonModulesList(
      source_=__file__)
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  for __thisEntry__ in _modulesList_:
    MODULES[__thisEntry__[0]] = {}
    MODULES[__thisEntry__[0]][K_DIR] = __thisEntry__[1]
    MODULES[__thisEntry__[0]][K_WHOLE_FILENAME] = __thisEntry__[2]
    MODULES[__thisEntry__[0]][K_JUST_FILENAME] = __thisEntry__[3]
    MODULES[__thisEntry__[0]][K_EXTENSION] = __thisEntry__[4]
    MODULES[__thisEntry__[0]][K_NUMS] = __thisEntry__[5]
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1


def checkPklDir():
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  if (
      (CF_OS.EXISTS(PKL_DIR) is False)
  ):
    CF_OS.MKDIRS(PKL_DIR)
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1


def moduleExists(moduleToCheck_):
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  try:
    _TNum_ = int(moduleToCheck_)
  # ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱ ⟰1⟱
  except ValueError:
    _TNum_ = 0
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  for __key__, __value__ in MODULES.items():
    # 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱
    if (
        (MODULES[__key__][K_JUST_FILENAME] == moduleToCheck_) or
        ((MODULES[__key__][K_NUMS] == _TNum_) and
        (TNum_ != 0))
    ):
      return True
    # ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1
  return False


def callModule(moduleToCall_):
  global DS_MAIN
  _pack_ = "CLOCKS_D"
  CLOCKS_D = importlib.import_module("." + _pack_, package="runawayClock")
  _myModule_ = importlib.import_module("." + _pack_ + '.' + moduleToCall_, package="runawayClock")
  DS_MAIN[K_LAST] = moduleToCall_
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  while True:
    __returnStatus__ = _myModule_.CLOCK()
    # 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱
    if (
        (__returnStatus__ == K_QUIT)
    ):
      break
    # ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1


def __main__():
  global THIS_MODULE, DS_MAIN
  getModules()
  checkPklDir()
  # 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱ 1⟱
  with CF_PKL.PKL_C(PKL_URL, DS_MAIN):
    # 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱ 2⟱
    if (
        (len(argv) == 2)
    ):
      # 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱
      if (
          (moduleExists(argv[1]) is True)
      ):
        THIS_MODULE = argv[1]
      # ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱
      else:
        THIS_MODULE = DS_MAIN[K_DEFAULT]
      # ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3
    # ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱ ⟰2⟱
    else:
      # 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱ 3⟱
      if (
          (DS_MAIN[K_LAST] == "")
      ):
        THIS_MODULE = DS_MAIN[K_DEFAULT]
      # ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱ ⟰3⟱
      else:
        THIS_MODULE = DS_MAIN[K_LAST]
      # ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3 ⟰3
    # ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2 ⟰2
    callModule(THIS_MODULE)
  # ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1 ⟰1


__main__()
