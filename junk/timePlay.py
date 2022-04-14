#!/usr/bin/env /usr/bin.python


from CF.SUBM_D import _00_TIME_DT as CF_DT


_timeStamp_ = CF_DT.timestampTrim(CF_DT.TMTSS(CF_DT.now()))
print(f"""nowstr {CF_DT.nowStr()} _timeStamp_ {_timeStamp_}""")
for __TI1__ in range(0, 100):
  _newTimestamp_ = CF_DT.timestampTrim(CF_DT.TMTSS(CF_DT.now()))
  while (_newTimestamp_ == _timeStamp_):
    _newTimestamp_ = CF_DT.timestampTrim(CF_DT.TMTSS(CF_DT.now()))
  _timeStamp_ = CF_DT.timestampTrim(CF_DT.TMTSS(CF_DT.now()))
  print(f"""nowstr {CF_DT.nowStr()} _timeStamp_ {_timeStamp_}""")
