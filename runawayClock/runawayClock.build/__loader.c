
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 83 > 0
static unsigned char *bytecode_data[83];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_CSCF(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CONST_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CONST_D$_00_COLORS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CONST_D$_00_PATHLIB_KEYS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_OS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_OS_VARS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_SCREEN(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_SIMPLE_REPR(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_TIME_DT(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_VALS_IN(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_WHO_WHERE(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_01_LISTS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PySimpleGUI(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PySimpleGUI$PySimpleGUI(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$X(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$XK(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$Xatom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$Xutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$composite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$damage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$dpms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$ge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$nvcontrol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$randr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$res(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$screensaver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$security(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xfixes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xinerama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xinput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xtest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$apl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$arabic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$cyrillic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$greek(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$hebrew(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$katakana(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$korean(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$miscellany(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$publishing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$technical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$thai(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xf86(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xk3270(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xkb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$rq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$structs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$connect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$unix_connect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xauth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$colormap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$cursor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$drawable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$fontable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$icccm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$resource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_datedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_dist_ver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_monitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_tqdm_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$std(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"CSCF", modulecode_CSCF, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/__init__.py"
#endif
},
    {"CSCF.CONST_D", modulecode_CSCF$CONST_D, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CONST_D/__init__.py"
#endif
},
    {"CSCF.CONST_D._00_COLORS", modulecode_CSCF$CONST_D$_00_COLORS, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CONST_D/_00_COLORS.py"
#endif
},
    {"CSCF.CONST_D._00_PATHLIB_KEYS", modulecode_CSCF$CONST_D$_00_PATHLIB_KEYS, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CONST_D/_00_PATHLIB_KEYS.py"
#endif
},
    {"CSCF.SUBM_D", modulecode_CSCF$SUBM_D, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/__init__.py"
#endif
},
    {"CSCF.SUBM_D._00_OS", modulecode_CSCF$SUBM_D$_00_OS, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_OS.py"
#endif
},
    {"CSCF.SUBM_D._00_OS_VARS", modulecode_CSCF$SUBM_D$_00_OS_VARS, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_OS_VARS.py"
#endif
},
    {"CSCF.SUBM_D._00_SCREEN", modulecode_CSCF$SUBM_D$_00_SCREEN, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_SCREEN.py"
#endif
},
    {"CSCF.SUBM_D._00_SIMPLE_REPR", modulecode_CSCF$SUBM_D$_00_SIMPLE_REPR, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_SIMPLE_REPR.py"
#endif
},
    {"CSCF.SUBM_D._00_TIME_DT", modulecode_CSCF$SUBM_D$_00_TIME_DT, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_TIME_DT.py"
#endif
},
    {"CSCF.SUBM_D._00_VALS_IN", modulecode_CSCF$SUBM_D$_00_VALS_IN, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_VALS_IN.py"
#endif
},
    {"CSCF.SUBM_D._00_WHO_WHERE", modulecode_CSCF$SUBM_D$_00_WHO_WHERE, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_WHO_WHERE.py"
#endif
},
    {"CSCF.SUBM_D._01_LISTS", modulecode_CSCF$SUBM_D$_01_LISTS, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_01_LISTS.py"
#endif
},
    {"PySimpleGUI", modulecode_PySimpleGUI, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/PySimpleGUI/__init__.py"
#endif
},
    {"PySimpleGUI.PySimpleGUI", modulecode_PySimpleGUI$PySimpleGUI, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/PySimpleGUI/PySimpleGUI.py"
#endif
},
    {"Xlib", modulecode_Xlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/__init__.py"
#endif
},
    {"Xlib.X", modulecode_Xlib$X, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/X.py"
#endif
},
    {"Xlib.XK", modulecode_Xlib$XK, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/XK.py"
#endif
},
    {"Xlib.Xatom", modulecode_Xlib$Xatom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/Xatom.py"
#endif
},
    {"Xlib.Xutil", modulecode_Xlib$Xutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/Xutil.py"
#endif
},
    {"Xlib.display", modulecode_Xlib$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/display.py"
#endif
},
    {"Xlib.error", modulecode_Xlib$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/error.py"
#endif
},
    {"Xlib.ext", modulecode_Xlib$ext, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/__init__.py"
#endif
},
    {"Xlib.ext.composite", modulecode_Xlib$ext$composite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/composite.py"
#endif
},
    {"Xlib.ext.damage", modulecode_Xlib$ext$damage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/damage.py"
#endif
},
    {"Xlib.ext.dpms", modulecode_Xlib$ext$dpms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/dpms.py"
#endif
},
    {"Xlib.ext.ge", modulecode_Xlib$ext$ge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/ge.py"
#endif
},
    {"Xlib.ext.nvcontrol", modulecode_Xlib$ext$nvcontrol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/nvcontrol.py"
#endif
},
    {"Xlib.ext.randr", modulecode_Xlib$ext$randr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/randr.py"
#endif
},
    {"Xlib.ext.record", modulecode_Xlib$ext$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/record.py"
#endif
},
    {"Xlib.ext.res", modulecode_Xlib$ext$res, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/res.py"
#endif
},
    {"Xlib.ext.screensaver", modulecode_Xlib$ext$screensaver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/screensaver.py"
#endif
},
    {"Xlib.ext.security", modulecode_Xlib$ext$security, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/security.py"
#endif
},
    {"Xlib.ext.shape", modulecode_Xlib$ext$shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/shape.py"
#endif
},
    {"Xlib.ext.xfixes", modulecode_Xlib$ext$xfixes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/xfixes.py"
#endif
},
    {"Xlib.ext.xinerama", modulecode_Xlib$ext$xinerama, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/xinerama.py"
#endif
},
    {"Xlib.ext.xinput", modulecode_Xlib$ext$xinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/xinput.py"
#endif
},
    {"Xlib.ext.xtest", modulecode_Xlib$ext$xtest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/ext/xtest.py"
#endif
},
    {"Xlib.keysymdef", modulecode_Xlib$keysymdef, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/__init__.py"
#endif
},
    {"Xlib.keysymdef.apl", modulecode_Xlib$keysymdef$apl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/apl.py"
#endif
},
    {"Xlib.keysymdef.arabic", modulecode_Xlib$keysymdef$arabic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/arabic.py"
#endif
},
    {"Xlib.keysymdef.cyrillic", modulecode_Xlib$keysymdef$cyrillic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/cyrillic.py"
#endif
},
    {"Xlib.keysymdef.greek", modulecode_Xlib$keysymdef$greek, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/greek.py"
#endif
},
    {"Xlib.keysymdef.hebrew", modulecode_Xlib$keysymdef$hebrew, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/hebrew.py"
#endif
},
    {"Xlib.keysymdef.katakana", modulecode_Xlib$keysymdef$katakana, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/katakana.py"
#endif
},
    {"Xlib.keysymdef.korean", modulecode_Xlib$keysymdef$korean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/korean.py"
#endif
},
    {"Xlib.keysymdef.latin1", modulecode_Xlib$keysymdef$latin1, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/latin1.py"
#endif
},
    {"Xlib.keysymdef.latin2", modulecode_Xlib$keysymdef$latin2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/latin2.py"
#endif
},
    {"Xlib.keysymdef.latin3", modulecode_Xlib$keysymdef$latin3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/latin3.py"
#endif
},
    {"Xlib.keysymdef.latin4", modulecode_Xlib$keysymdef$latin4, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/latin4.py"
#endif
},
    {"Xlib.keysymdef.miscellany", modulecode_Xlib$keysymdef$miscellany, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/miscellany.py"
#endif
},
    {"Xlib.keysymdef.publishing", modulecode_Xlib$keysymdef$publishing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/publishing.py"
#endif
},
    {"Xlib.keysymdef.special", modulecode_Xlib$keysymdef$special, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/special.py"
#endif
},
    {"Xlib.keysymdef.technical", modulecode_Xlib$keysymdef$technical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/technical.py"
#endif
},
    {"Xlib.keysymdef.thai", modulecode_Xlib$keysymdef$thai, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/thai.py"
#endif
},
    {"Xlib.keysymdef.xf86", modulecode_Xlib$keysymdef$xf86, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/xf86.py"
#endif
},
    {"Xlib.keysymdef.xk3270", modulecode_Xlib$keysymdef$xk3270, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/xk3270.py"
#endif
},
    {"Xlib.keysymdef.xkb", modulecode_Xlib$keysymdef$xkb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/keysymdef/xkb.py"
#endif
},
    {"Xlib.protocol", modulecode_Xlib$protocol, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/__init__.py"
#endif
},
    {"Xlib.protocol.display", modulecode_Xlib$protocol$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/display.py"
#endif
},
    {"Xlib.protocol.event", modulecode_Xlib$protocol$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/event.py"
#endif
},
    {"Xlib.protocol.request", modulecode_Xlib$protocol$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/request.py"
#endif
},
    {"Xlib.protocol.rq", modulecode_Xlib$protocol$rq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/rq.py"
#endif
},
    {"Xlib.protocol.structs", modulecode_Xlib$protocol$structs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/protocol/structs.py"
#endif
},
    {"Xlib.support", modulecode_Xlib$support, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/support/__init__.py"
#endif
},
    {"Xlib.support.connect", modulecode_Xlib$support$connect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/support/connect.py"
#endif
},
    {"Xlib.support.lock", modulecode_Xlib$support$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/support/lock.py"
#endif
},
    {"Xlib.support.unix_connect", modulecode_Xlib$support$unix_connect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/support/unix_connect.py"
#endif
},
    {"Xlib.xauth", modulecode_Xlib$xauth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xauth.py"
#endif
},
    {"Xlib.xobject", modulecode_Xlib$xobject, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/__init__.py"
#endif
},
    {"Xlib.xobject.colormap", modulecode_Xlib$xobject$colormap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/colormap.py"
#endif
},
    {"Xlib.xobject.cursor", modulecode_Xlib$xobject$cursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/cursor.py"
#endif
},
    {"Xlib.xobject.drawable", modulecode_Xlib$xobject$drawable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/drawable.py"
#endif
},
    {"Xlib.xobject.fontable", modulecode_Xlib$xobject$fontable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/fontable.py"
#endif
},
    {"Xlib.xobject.icccm", modulecode_Xlib$xobject$icccm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/icccm.py"
#endif
},
    {"Xlib.xobject.resource", modulecode_Xlib$xobject$resource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/Xlib/xobject/resource.py"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-utils/0-desktop/runawayClock/runawayClock/runawayClock.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-utils/0-desktop/runawayClock/runawayClock/runawayClock.py"
#endif
},
    {"_pydecimal", NULL, 0, 244242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/_pydecimal.py"
#endif
},
    {"ctypes", NULL, 1, 26783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/ctypes/__init__.py"
#endif
},
    {"ctypes._endian", NULL, 2, 3964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/ctypes/_endian.py"
#endif
},
    {"datedelta", modulecode_datedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/datedelta.py"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/__init__.py"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/_common.py"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/_version.py"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/easter.py"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/parser/__init__.py"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/parser/_parser.py"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/parser/isoparser.py"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/relativedelta.py"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/rrule.py"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/tz/__init__.py"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/tz/_common.py"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/tz/_factories.py"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/tz/tz.py"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/tz/win.py"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/dateutil/zoneinfo/__init__.py"
#endif
},
    {"decimal", NULL, 3, 525, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/decimal.py"
#endif
},
    {"email", NULL, 4, 2092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/__init__.py"
#endif
},
    {"email._encoded_words", NULL, 5, 9099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/_encoded_words.py"
#endif
},
    {"email._header_value_parser", NULL, 6, 149449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/_header_value_parser.py"
#endif
},
    {"email._parseaddr", NULL, 7, 24282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/_parseaddr.py"
#endif
},
    {"email._policybase", NULL, 8, 19221, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/_policybase.py"
#endif
},
    {"email.base64mime", NULL, 9, 4333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/base64mime.py"
#endif
},
    {"email.charset", NULL, 10, 16003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/charset.py"
#endif
},
    {"email.contentmanager", NULL, 11, 13812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/contentmanager.py"
#endif
},
    {"email.encoders", NULL, 12, 2368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/encoders.py"
#endif
},
    {"email.errors", NULL, 13, 8427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/errors.py"
#endif
},
    {"email.feedparser", NULL, 14, 21445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/feedparser.py"
#endif
},
    {"email.generator", NULL, 15, 21581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/generator.py"
#endif
},
    {"email.header", NULL, 16, 26958, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/header.py"
#endif
},
    {"email.headerregistry", NULL, 17, 33735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/headerregistry.py"
#endif
},
    {"email.iterators", NULL, 18, 3145, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/iterators.py"
#endif
},
    {"email.message", NULL, 19, 58877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/message.py"
#endif
},
    {"email.parser", NULL, 20, 7366, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/parser.py"
#endif
},
    {"email.policy", NULL, 21, 12415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/policy.py"
#endif
},
    {"email.quoprimime", NULL, 22, 11219, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/quoprimime.py"
#endif
},
    {"email.utils", NULL, 23, 15420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/email/utils.py"
#endif
},
    {"fractions", NULL, 24, 29215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/fractions.py"
#endif
},
    {"hashlib", NULL, 25, 12320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/hashlib.py"
#endif
},
    {"hmac", NULL, 26, 11454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/hmac.py"
#endif
},
    {"http", NULL, 27, 8715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/__init__.py"
#endif
},
    {"http.client", NULL, 28, 60035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/client.py"
#endif
},
    {"http.cookiejar", NULL, 29, 88125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/cookiejar.py"
#endif
},
    {"http.server", NULL, 30, 59291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/server.py"
#endif
},
    {"multiprocessing", NULL, 31, 1093, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/__init__.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/multiprocessing-preLoad.py"
#endif
},
    {"multiprocessing.connection", NULL, 32, 48491, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 33, 19537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 34, 6222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 35, 3957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 36, 17013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 37, 14666, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 38, 73513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 39, 47350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 40, 4343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 41, 4322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 42, 4399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 43, 19114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 44, 19984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 45, 14965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 46, 9963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 47, 11393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 48, 24524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 49, 12048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 50, 12507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 51, 22156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 52, 20365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/util.py"
#endif
},
    {"pydoc", NULL, 53, 152482, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/pydoc.py"
#endif
},
    {"queue", NULL, 54, 16437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/queue.py"
#endif
},
    {"runpy", NULL, 55, 16100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/runpy.py"
#endif
},
    {"secrets", NULL, 56, 2846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/secrets.py"
#endif
},
    {"selectors", NULL, 57, 28329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/selectors.py"
#endif
},
    {"site", NULL, 58, 29814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/site.py"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/six.py"
#endif
},
    {"socket", NULL, 59, 45461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/socket.py"
#endif
},
    {"ssl", NULL, 60, 72343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/ssl.py"
#endif
},
    {"subprocess", NULL, 61, 82700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/subprocess.py"
#endif
},
    {"tkinter", NULL, 62, 258305, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/__init__.py"
#endif
},
    {"tkinter.colorchooser", NULL, 63, 3010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/colorchooser.py"
#endif
},
    {"tkinter.commondialog", NULL, 64, 2104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/commondialog.py"
#endif
},
    {"tkinter.constants", NULL, 65, 1922, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/constants.py"
#endif
},
    {"tkinter.dialog", NULL, 66, 2343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/dialog.py"
#endif
},
    {"tkinter.filedialog", NULL, 67, 24703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/filedialog.py"
#endif
},
    {"tkinter.font", NULL, 68, 11783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/font.py"
#endif
},
    {"tkinter.messagebox", NULL, 69, 4720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/messagebox.py"
#endif
},
    {"tkinter.simpledialog", NULL, 70, 19427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/simpledialog.py"
#endif
},
    {"tkinter.ttk", NULL, 71, 78791, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/tkinter/ttk.py"
#endif
},
    {"tqdm", modulecode_tqdm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/__init__.py"
#endif
},
    {"tqdm._dist_ver", modulecode_tqdm$_dist_ver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/_dist_ver.py"
#endif
},
    {"tqdm._monitor", modulecode_tqdm$_monitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/_monitor.py"
#endif
},
    {"tqdm._tqdm_pandas", modulecode_tqdm$_tqdm_pandas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/_tqdm_pandas.py"
#endif
},
    {"tqdm.cli", modulecode_tqdm$cli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/cli.py"
#endif
},
    {"tqdm.gui", modulecode_tqdm$gui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/gui.py"
#endif
},
    {"tqdm.std", modulecode_tqdm$std, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/std.py"
#endif
},
    {"tqdm.utils", modulecode_tqdm$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/utils.py"
#endif
},
    {"tqdm.version", modulecode_tqdm$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/tqdm/version.py"
#endif
},
    {"urllib", NULL, 72, 131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/__init__.py"
#endif
},
    {"urllib.error", NULL, 73, 3866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/error.py"
#endif
},
    {"urllib.parse", NULL, 74, 53177, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/parse.py"
#endif
},
    {"urllib.request", NULL, 75, 126473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/request.py"
#endif
},
    {"urllib.response", NULL, 76, 5174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/response.py"
#endif
},
    {"uuid", NULL, 77, 33052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/uuid.py"
#endif
},
    {"xml", NULL, 78, 708, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/__init__.py"
#endif
},
    {"xml.parsers", NULL, 79, 318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/parsers/__init__.py"
#endif
},
    {"xml.parsers.expat", NULL, 80, 400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/parsers/expat.py"
#endif
},
    {"xmlrpc", NULL, 81, 131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xmlrpc/__init__.py"
#endif
},
    {"xmlrpc.client", NULL, 82, 56933, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xmlrpc/client.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

