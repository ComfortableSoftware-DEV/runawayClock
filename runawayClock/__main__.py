

import PySimpleGUI as SG
from CSCF.SUBM_D import (
    _00_TIME_DT as CF_DT,
    _00_SCREEN as CF_SCN,
    )
from CSCF.CONST_D import _00_COLORS as CF_COL


DEFAULT_X_MARGIN = 0
DEFAULT_Y_MARGIN = 16


CLOSE_DISTANCE = 20
COLOR_BACKGROUND = CF_COL.COLOR_H_BACKGROUND_DKR_PURPLE
COLOR_TEXT = CF_COL.COLOR_H_CLOCK_RED
CURRENT_HIDE = False
CURRENT_MOUSE_LOCATION = (0, 0)
CURRENT_MOUSE_STATUS = CF_SCN.POSITION_NONE
CURRENT_SCREEN_SIZE = (0, 0)
CURRENT_WINDOW_LOCATION = (1500, -DEFAULT_Y_MARGIN)
CURRENT_WINDOW_SIZE = (0, 0)
CURRENTLY_OVER = False
DEFAULT_WINDOW_LOCATION = (1500, -DEFAULT_Y_MARGIN)
FONT_DEFAULT = "Source Code Pro"
FONT_SIZE = 25
HIDE = True
HIDE_LENGTH = 3.0
HIDE_TIMER = 0.0
MAINFRAME = None
MOVE_DISTANCE = 50
MOVE_INTERVAL = 0.30
MOVE_NEXT_TIME = 0
RUNAWAY = False
SIZE_PAD_ALL = ((1, 1), (1, 1))
TIME_C_FLOAT = 0
TIME_C_TEXT = ""
TIME_INCREMENT = 0.2
TIMEOUT = 10
TITLE_CLOCK = "CLOCK ONLY"


EVENTS = ["hide", "runaway", "HIDE", "RUNAWAY", "CANCEL"]
RIGHT_CLICK_ALWAYS_MENU = [
    "QUIT",
    "CANCEL",
]
RIGHT_CLICK_MENU = [
    "HIDE",
    "RUNAWAY",
    ]
RIGHT_CLICK_MENU.sort()
RIGHT_CLICK_MENU = RIGHT_CLICK_ALWAYS_MENU


FONTSZ_CLOCKS_TIME_S_CLOCK = (
    FONT_DEFAULT,
    FONT_SIZE,
)


TEXT_CLOCK = {
    "tooltip": "Tue_March(03)_10_1964",
    "background_color": COLOR_BACKGROUND,
    "enable_events": True,
    "font": FONTSZ_CLOCKS_TIME_S_CLOCK,
    "justification": "center",
    "pad": SIZE_PAD_ALL,
    "size": (8, 1),
    "text": "00:00:00",
    "text_color": COLOR_TEXT,
    "key": "__clock__",
}


COLUMN_MAIN = [
    [
        SG.Text(
            **TEXT_CLOCK
        ),
    ],
]


LAYOUT_MAIN = [
    [
        SG.Column(
            layout=COLUMN_MAIN,
            pad=SIZE_PAD_ALL,
        ),
    ]
]


WINDOW_MAIN = {
    "background_color": COLOR_BACKGROUND,
    "border_depth": 0,
    "element_padding": SIZE_PAD_ALL,
    "force_toplevel": None,
    "grab_anywhere": True,
    "keep_on_top": True,
    "layout": LAYOUT_MAIN,
    "margins": (0, 0),
    "no_titlebar": True,
    "right_click_menu": [[], RIGHT_CLICK_MENU],
    "title": TITLE_CLOCK,
}


def readWindow():
  global MAINFRAME
  return MAINFRAME.Read(timeout=TIMEOUT)


def checkMouse():
  global \
      CURRENT_MOUSE_LOCATION, \
      CURRENT_MOUSE_STATUS, \
      CURRENT_WINDOW_LOCATION
  CURRENT_MOUSE_STATUS = CF_SCN.POSITION_NONE
  return


def changeMenu(eventIn_):
  global \
      CURRENT_HIDE, \
      HIDE, \
      MAINFRAME, \
      RIGHT_CLICK_MENU, \
      RUNAWAY
  if (
      (eventIn_ not in EVENTS)
  ):
    return
  elif (
      (eventIn_ == "HIDE") or
      (eventIn_ == "hide")
  ):
    HIDE = not HIDE
    if (
        (HIDE) and
        (RUNAWAY)
    ):
      RUNAWAY = False
  elif (
      (eventIn_ == "RUNAWAY") or
      (eventIn_ == "runaway")
  ):
    RUNAWAY = not RUNAWAY
    if (
        (HIDE) and
        (RUNAWAY)
    ):
      HIDE = False
      MAINFRAME.un_hide()
      CURRENT_HIDE = False
  _newMenu_ = []
  if (
      (HIDE)
  ):
    _newMenu_.append("HIDE")
  else:
    _newMenu_.append("hide")
  if (
      (RUNAWAY)
  ):
    _newMenu_.append("RUNAWAY")
  else:
    _newMenu_.append("runaway")
  RIGHT_CLICK_MENU = _newMenu_ + RIGHT_CLICK_ALWAYS_MENU
  MAINFRAME.Element("__clock__").set_right_click_menu([[], RIGHT_CLICK_MENU])
  __dummy__ = readWindow()


def hideWindow():
  global \
      CURRENT_HIDE, \
      CURRENTLY_OVER, \
      HIDE_TIMER, \
      HIDE
  _currentTime_ = CF_DT.timestampTrim()
  if (
      (not HIDE) and
      (CURRENT_HIDE)
  ):
    MAINFRAME.un_hide()
    CURRENT_HIDE = False
    return
  if (
      (CURRENT_MOUSE_STATUS != CF_SCN.POSITION_OVER) and
      (not CURRENT_HIDE)
  ):
    CURRENTLY_OVER = False
    return
  if (
      (CURRENT_MOUSE_STATUS != CF_SCN.POSITION_OVER) and
      (CURRENT_HIDE)
  ):
    MAINFRAME.un_hide()
    CURRENT_HIDE = False
    return
  if (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_OVER) and
      (CURRENT_HIDE) and
      (_currentTime_ >= HIDE_TIMER)
  ):
    MAINFRAME.un_hide()
    CURRENT_HIDE = False
    CURRENTLY_OVER = True
    return
  if (
      (HIDE) and
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_OVER) and
      (not CURRENTLY_OVER) and
      (not CURRENT_HIDE)
  ):
    HIDE_TIMER = _currentTime_ + HIDE_LENGTH
    MAINFRAME.hide()
    CURRENT_HIDE = True
    CURRENTLY_OVER = True
    return


def runaway(doRunaway_=None):
  global \
      CURRENT_MOUSE_STATUS, \
      CURRENT_WINDOW_LOCATION, \
      MAINFRAME, \
      MOVE_NEXT_TIME, \
      RUNAWAY
  _currentTime_ = CF_DT.timestampTrim()
  if (
      (doRunaway_ is None)
  ):
    doRunaway_ = RUNAWAY
  _newLocation_ = CURRENT_WINDOW_LOCATION
  if (
      (doRunaway_ is False) or
      (CURRENT_MOUSE_STATUS not in CF_SCN.CLOSE_LOCATIONS_LIST) or
      (_currentTime_ < MOVE_NEXT_TIME)
  ):
    return
  if (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_E)
  ):
    _newLocation_ = (_newLocation_[0] - MOVE_DISTANCE, _newLocation_[1])
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_N)
  ):
    _newLocation_ = (_newLocation_[0], _newLocation_[1] + MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_NE)
  ):
    _newLocation_ = (_newLocation_[0] - MOVE_DISTANCE, _newLocation_[1] + MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_NW)
  ):
    _newLocation_ = (_newLocation_[0] + MOVE_DISTANCE, _newLocation_[1] + MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_S)
  ):
    _newLocation_ = (_newLocation_[0], _newLocation_[1] - MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_SE)
  ):
    _newLocation_ = (_newLocation_[0] - MOVE_DISTANCE, _newLocation_[1] - MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_SW)
  ):
    _newLocation_ = (_newLocation_[0] + MOVE_DISTANCE, _newLocation_[1] - MOVE_DISTANCE)
  elif (
      (CURRENT_MOUSE_STATUS == CF_SCN.POSITION_CLOSE_W)
  ):
    _newLocation_ = (_newLocation_[0] + MOVE_DISTANCE, _newLocation_[1])
  else:
    return

  if (
      (_newLocation_[0] < (0 - DEFAULT_X_MARGIN))
  ):
    _newLocation_ = (-DEFAULT_X_MARGIN, _newLocation_[1])
  if (
      (_newLocation_[0] > (CURRENT_SCREEN_SIZE[0] - CURRENT_WINDOW_SIZE[0] + DEFAULT_X_MARGIN))
  ):
    _newLocation_ = (CURRENT_SCREEN_SIZE[0] - CURRENT_WINDOW_SIZE[0] + DEFAULT_X_MARGIN, _newLocation_[1])

  if (
      (_newLocation_[1] < (0 - DEFAULT_Y_MARGIN))
  ):
    _newLocation_ = (_newLocation_[0], -DEFAULT_Y_MARGIN)
  if (
      (_newLocation_[1] > (CURRENT_SCREEN_SIZE[1] - CURRENT_WINDOW_SIZE[1] + DEFAULT_Y_MARGIN))
  ):
    _newLocation_ = (_newLocation_[0], CURRENT_SCREEN_SIZE[1] - CURRENT_WINDOW_SIZE[1] + DEFAULT_Y_MARGIN)

  _currentTime_ = CF_DT.timestampTrim()
  _nextTime_ = _currentTime_ + MOVE_INTERVAL
  MOVE_NEXT_TIME = _nextTime_
  MAINFRAME.Move(*_newLocation_)
  __dummy__ = readWindow()
  CURRENT_WINDOW_LOCATION = MAINFRAME.CurrentLocation()


def main():
  global \
      CURRENT_HIDE, \
      CURRENT_SCREEN_SIZE, \
      CURRENT_WINDOW_LOCATION, \
      CURRENT_WINDOW_SIZE, \
      CURRENTLY_OVER, \
      HIDE_TIMER, \
      MAINFRAME
  _currentTime_ = CF_DT.timestampTrim()
  _nextTime_ = CF_DT.timestampTrim() + TIME_INCREMENT
  _thisTimeHMS_ = CF_DT.nowStrHMS()
  _today_ = CF_DT.todayStrFull()
  MAINFRAME = SG.Window(**WINDOW_MAIN).finalize()
  MAINFRAME.bind("<Enter>", "__OVER__")
  MAINFRAME.bind("<Leave>", "__NOT_OVER__")
  MAINFRAME.Element("__clock__").SetTooltip(_today_)
  CURRENT_WINDOW_SIZE = MAINFRAME.Size
  CURRENT_SCREEN_SIZE = MAINFRAME.GetScreenDimensions()
  _halfScreenSize_ = (CURRENT_SCREEN_SIZE[0] / 2, CURRENT_SCREEN_SIZE[1] / 2)
  _halfWindowSize_ = (CURRENT_WINDOW_SIZE[0] / 2, CURRENT_WINDOW_SIZE[1] / 2)
  MAINFRAME.Move(*CURRENT_WINDOW_LOCATION)
  __dummy__ = readWindow()
  changeMenu("CANCEL")
  while True:
    _currentTime_ = CF_DT.timestampTrim()
    if (
        (_currentTime_ >= _nextTime_)
    ):
      _thisTimeHMS_ = CF_DT.nowStrHMS()
      _nextTooltip_ = CF_DT.todayStrFull()
      if (
          (_nextTooltip_ != _today_)
      ):
        _today_ = _nextTooltip_
        MAINFRAME.Element("__clock__").SetTooltip(_today_)
      MAINFRAME["__clock__"].update(value=_thisTimeHMS_)
      _nextTime_ = CF_DT.timestampTrim() + TIME_INCREMENT
    checkMouse()
    runaway()
    hideWindow()
    CURRENT_WINDOW_LOCATION = MAINFRAME.CurrentLocation()
    _event_, _values_ = readWindow()
    if (
        (_event_ == "QUIT")
    ):
      break
    elif (
        (_event_ in EVENTS)
    ):
      changeMenu(_event_)
  return "K_QUIT"


main()


