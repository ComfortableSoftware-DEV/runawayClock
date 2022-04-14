#!/usr/bin/env /usr/bin/python


import importlib


_thisModule_ = "import1"
_nextModule_ = "import2"
globals()[_thisModule_] = {}
MOD2 = importlib.import_module(_nextModule_)

print(f"""
locals :
{locals()}

globals:
{globals()[_nextModule_]}

""")

globals()[_thisModule_].update(**MOD2)

print(f"""
locals :
{locals()}

globals:
{globals()}

""")

# print(f"""SILLINESS {SILLINESS}""")
