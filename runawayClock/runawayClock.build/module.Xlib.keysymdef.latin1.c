/* Generated code for Python module 'Xlib.keysymdef.latin1'
 * created by Nuitka version 1.6rc9
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_Xlib$keysymdef$latin1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$keysymdef$latin1;
PyDictObject *moduledict_Xlib$keysymdef$latin1;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[395];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[395];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.keysymdef.latin1"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 395; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Xlib$keysymdef$latin1(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 395; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8314d7220d2a9fecbe8b0fb6eeb39b68;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_8314d7220d2a9fecbe8b0fb6eeb39b68 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[393], mod_consts[393], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_Xlib$keysymdef$latin1[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_Xlib$keysymdef$latin1;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_Xlib$keysymdef$latin1) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_Xlib$keysymdef$latin1[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_Xlib$keysymdef$latin1,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_Xlib$keysymdef$latin1(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.keysymdef.latin1");

    // Store the module for future use.
    module_Xlib$keysymdef$latin1 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.keysymdef.latin1: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.keysymdef.latin1: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.keysymdef.latin1: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$keysymdef$latin1\n");

    moduledict_Xlib$keysymdef$latin1 = MODULE_DICT(module_Xlib$keysymdef$latin1);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$keysymdef$latin1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$keysymdef$latin1,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[394]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$keysymdef$latin1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$keysymdef$latin1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$keysymdef$latin1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$keysymdef$latin1);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$keysymdef$latin1);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8314d7220d2a9fecbe8b0fb6eeb39b68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_8314d7220d2a9fecbe8b0fb6eeb39b68 = MAKE_MODULE_FRAME(codeobj_8314d7220d2a9fecbe8b0fb6eeb39b68, module_Xlib$keysymdef$latin1);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8314d7220d2a9fecbe8b0fb6eeb39b68);
    assert(Py_REFCNT(frame_8314d7220d2a9fecbe8b0fb6eeb39b68) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8314d7220d2a9fecbe8b0fb6eeb39b68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8314d7220d2a9fecbe8b0fb6eeb39b68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8314d7220d2a9fecbe8b0fb6eeb39b68, exception_lineno);
    }



    assertFrameObject(frame_8314d7220d2a9fecbe8b0fb6eeb39b68);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_198);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.keysymdef.latin1", false);

    Py_INCREF(module_Xlib$keysymdef$latin1);
    return module_Xlib$keysymdef$latin1;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$keysymdef$latin1, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$keysymdef$latin1", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}