
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

#if 65 > 0
static unsigned char *bytecode_data[65];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_CSCF(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CLASSES_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CLASSES_D$_01_PKL_C(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CONST_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$CONST_D$_00_PATHLIB_KEYS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_OS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_OS_VARS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_SIMPLE_REPR(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_VALS_IN(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_00_WHO_WHERE(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_CSCF$SUBM_D$_01_LISTS(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_runawayClock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_runawayClock$CLOCKS_D(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
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
    {"CSCF.CLASSES_D", modulecode_CSCF$CLASSES_D, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CLASSES_D/__init__.py"
#endif
},
    {"CSCF.CLASSES_D._01_PKL_C", modulecode_CSCF$CLASSES_D$_01_PKL_C, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CLASSES_D/_01_PKL_C.py"
#endif
},
    {"CSCF.CONST_D", modulecode_CSCF$CONST_D, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/CONST_D/__init__.py"
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
    {"CSCF.SUBM_D._00_SIMPLE_REPR", modulecode_CSCF$SUBM_D$_00_SIMPLE_REPR, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-development/0-python/CSCF/CSCF/SUBM_D/_00_SIMPLE_REPR.py"
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
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-utils/0-desktop/runawayClock/runawayClock/__main__.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/rcr/0-sourceCode/0-utils/0-desktop/runawayClock/runawayClock/__main__.py"
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
    {"hashlib", NULL, 24, 12320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/hashlib.py"
#endif
},
    {"hmac", NULL, 25, 11454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/hmac.py"
#endif
},
    {"http", NULL, 26, 8715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/__init__.py"
#endif
},
    {"http.client", NULL, 27, 60035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/http/client.py"
#endif
},
    {"multiprocessing", NULL, 28, 1093, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
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
    {"multiprocessing.connection", NULL, 29, 48491, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 30, 19537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 31, 6222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 32, 3957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 33, 17013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 34, 14666, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 35, 73513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 36, 47350, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 37, 4343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 38, 4322, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 39, 4399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 40, 19114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 41, 19984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 42, 14965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 43, 9963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 44, 11393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 45, 24524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 46, 12048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 47, 12507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 48, 22156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 49, 20365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/multiprocessing/util.py"
#endif
},
    {"queue", NULL, 50, 16437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/queue.py"
#endif
},
    {"runawayClock", modulecode_runawayClock, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/runawayClock/__init__.py"
#endif
},
    {"runawayClock.CLOCKS_D", modulecode_runawayClock$CLOCKS_D, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/liam/.local/lib/python3.11/site-packages/runawayClock/CLOCKS_D/__init__.py"
#endif
},
    {"runpy", NULL, 51, 16100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/runpy.py"
#endif
},
    {"secrets", NULL, 52, 2846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/secrets.py"
#endif
},
    {"selectors", NULL, 53, 28329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/selectors.py"
#endif
},
    {"site", NULL, 54, 29814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/site.py"
#endif
},
    {"socket", NULL, 55, 45461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/socket.py"
#endif
},
    {"ssl", NULL, 56, 72343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/ssl.py"
#endif
},
    {"subprocess", NULL, 57, 82700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/subprocess.py"
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
    {"urllib", NULL, 58, 131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/__init__.py"
#endif
},
    {"urllib.parse", NULL, 59, 53177, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/urllib/parse.py"
#endif
},
    {"xml", NULL, 60, 708, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/__init__.py"
#endif
},
    {"xml.parsers", NULL, 61, 318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/parsers/__init__.py"
#endif
},
    {"xml.parsers.expat", NULL, 62, 400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xml/parsers/expat.py"
#endif
},
    {"xmlrpc", NULL, 63, 131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.11/xmlrpc/__init__.py"
#endif
},
    {"xmlrpc.client", NULL, 64, 56933, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
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

