#!/usr/bin/env /usr/bin/python


from CF.SUBM_D import _00_OS as CF_OS


__all__ = []
DS_init = {
    "K_VERSION": 0,
    "K_DEFAULT": 1,
    "K_LAST": 0,
}
_modulesList_ = CF_OS.globFilePiecesNumsList(CF_OS.DIR_NAME(__file__) + "/*", goodExtList_=[".py"])
MODULES = {}


for __thisEntry__ in _modulesList_:
  __thisFile__ = __thisEntry__[2]
  if (
      (__thisFile__ != "__init__.py")
  ):
    __all__.append(__thisFile__)
