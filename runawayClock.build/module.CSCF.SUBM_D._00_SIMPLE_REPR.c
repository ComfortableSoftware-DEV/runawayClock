/* Generated code for Python module 'CSCF.SUBM_D._00_SIMPLE_REPR'
 * created by Nuitka version 1.6
 *
 * This code is in part copyright 2023 Kay Hayen.
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

/* The "module_CSCF$SUBM_D$_00_SIMPLE_REPR" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_CSCF$SUBM_D$_00_SIMPLE_REPR;
PyDictObject *moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[58];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[58];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("CSCF.SUBM_D._00_SIMPLE_REPR"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 58; i++) {
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
void checkModuleConstants_CSCF$SUBM_D$_00_SIMPLE_REPR(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 58; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2b57374988dd9ecc97160dd1380acdd3;
static PyCodeObject *codeobj_f4be1313f4e0bcd6b9be1c6d548f8b4d;
static PyCodeObject *codeobj_dd455d01391ad0c4a7131a006fdd538e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[54]); CHECK_OBJECT(module_filename_obj);
    codeobj_2b57374988dd9ecc97160dd1380acdd3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[55], mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_f4be1313f4e0bcd6b9be1c6d548f8b4d = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[56], NULL, 0, 5, 0);
    codeobj_dd455d01391ad0c4a7131a006fdd538e = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[53], mod_consts[57], NULL, 0, 3, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_indents_ = python_pars[0];
    PyObject *par_name_ = python_pars[1];
    PyObject *par_objectToStr_ = python_pars[2];
    PyObject *par_printUnkType_ = python_pars[3];
    PyObject *par_recursive_ = python_pars[4];
    PyObject *var__thisType_ = NULL;
    PyObject *var__strToRtn_ = NULL;
    PyObject *var__thisKey_ = NULL;
    PyObject *var__thisValue_ = NULL;
    PyObject *var__isCallable_ = NULL;
    PyObject *var___DUMMY__ = NULL;
    nuitka_bool var__isIterable_ = NUITKA_BOOL_UNASSIGNED;
    PyObject *var__TStr1_ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f4be1313f4e0bcd6b9be1c6d548f8b4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_objectToStr_);
        tmp_type_arg_1 = par_objectToStr_;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var__thisType_ == NULL);
        var__thisType_ = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d)) {
        Py_XDECREF(cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d = MAKE_FUNCTION_FRAME(codeobj_f4be1313f4e0bcd6b9be1c6d548f8b4d, module_CSCF$SUBM_D$_00_SIMPLE_REPR, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_type_description == NULL);
    frame_f4be1313f4e0bcd6b9be1c6d548f8b4d = cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4be1313f4e0bcd6b9be1c6d548f8b4d);
    assert(Py_REFCNT(frame_f4be1313f4e0bcd6b9be1c6d548f8b4d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_1 != NULL);
        tmp_tuple_element_1 = mod_consts[1];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_objectToStr_);
            tmp_operand_value_1 = par_objectToStr_;
            tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_1 = var__thisType_;
        tmp_cmp_expr_right_1 = (PyObject *)&PyBool_Type;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_format_spec_2;
        tmp_iadd_expr_left_1 = mod_consts[2];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_2 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 29;
        tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_format_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_2 = mod_consts[2];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        Py_DECREF(tmp_format_value_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(10);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_3 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 29;
            tmp_format_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_4 = var__thisType_;
            tmp_format_spec_4 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
            CHECK_OBJECT(par_name_);
            tmp_format_value_5 = par_name_;
            tmp_format_spec_5 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_2);
            CHECK_OBJECT(par_objectToStr_);
            tmp_format_value_6 = par_objectToStr_;
            tmp_format_spec_6 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 7, tmp_tuple_element_2);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_4 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 29;
            tmp_format_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_7 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 8, tmp_tuple_element_2);
            tmp_format_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_8 == NULL)) {
                tmp_format_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_8 = mod_consts[2];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 9, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_iadd_expr_right_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_1);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_2 = var__thisType_;
        tmp_cmp_expr_right_2 = (PyObject *)&PyDict_Type;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_recursive_);
        tmp_cmp_expr_left_3 = par_recursive_;
        tmp_cmp_expr_right_3 = Py_True;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_format_spec_9;
        tmp_iadd_expr_left_2 = mod_consts[2];
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_5 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 39;
        tmp_format_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_format_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_9 = mod_consts[2];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
        Py_DECREF(tmp_format_value_9);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(13);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_format_spec_10;
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyObject *tmp_format_value_12;
            PyObject *tmp_format_spec_12;
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyObject *tmp_format_value_14;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_format_spec_14;
            PyObject *tmp_format_value_15;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyObject *tmp_format_value_17;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_6 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 39;
            tmp_format_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            if (tmp_format_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_10 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            Py_DECREF(tmp_format_value_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_11 = var__thisType_;
            tmp_format_spec_11 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
            CHECK_OBJECT(par_name_);
            tmp_format_value_12 = par_name_;
            tmp_format_spec_12 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_12, tmp_format_spec_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 6, tmp_tuple_element_3);
            tmp_format_value_13 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_13 == NULL)) {
                tmp_format_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_13 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 7, tmp_tuple_element_3);
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_1 = par_indents_;
            tmp_add_expr_right_1 = mod_consts[10];
            tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 39;
            tmp_format_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_format_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_14 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 8, tmp_tuple_element_3);
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_2 = par_indents_;
            tmp_add_expr_right_2 = mod_consts[10];
            tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 39;
            tmp_format_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_format_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_15 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_15, tmp_format_spec_15);
            Py_DECREF(tmp_format_value_15);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 9, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 10, tmp_tuple_element_3);
            tmp_format_value_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_format_value_16 == NULL)) {
                tmp_format_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_format_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_16 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 11, tmp_tuple_element_3);
            tmp_format_value_17 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_17 == NULL)) {
                tmp_format_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_17 = mod_consts[2];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_17, tmp_format_spec_17);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 12, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_iadd_expr_right_2 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_2);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_3 = tmp_iadd_expr_left_2;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_objectToStr_);
        tmp_expression_value_1 = par_objectToStr_;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 40;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooobo";
                exception_lineno = 40;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooobo";
            exception_lineno = 40;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooobo";
            exception_lineno = 40;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooobo";
                    exception_lineno = 40;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooobo";
            exception_lineno = 40;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var__thisKey_;
            var__thisKey_ = tmp_assign_source_9;
            Py_INCREF(var__thisKey_);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var__thisValue_;
            var__thisValue_ = tmp_assign_source_10;
            Py_INCREF(var__thisValue_);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 42;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var__strToRtn_;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_3 = par_indents_;
        tmp_add_expr_right_3 = mod_consts[10];
        tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var__thisKey_);
        tmp_kw_call_value_1_1 = var__thisKey_;
        CHECK_OBJECT(var__thisValue_);
        tmp_kw_call_value_2_1 = var__thisValue_;
        tmp_kw_call_value_3_1 = Py_True;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 42;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_3;
        var__strToRtn_ = tmp_assign_source_11;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;
        type_description_1 = "ooooooooooobo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_format_value_18;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_format_spec_18;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = var__strToRtn_;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 49;
        tmp_format_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_9);
        if (tmp_format_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_18 = mod_consts[2];
        tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_18, tmp_format_spec_18);
        Py_DECREF(tmp_format_value_18);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_19;
            PyObject *tmp_format_spec_19;
            PyObject *tmp_format_value_20;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_format_spec_20;
            PyObject *tmp_format_value_21;
            PyObject *tmp_format_spec_21;
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_format_value_19 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_format_value_19 == NULL)) {
                tmp_format_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_format_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_19 = mod_consts[2];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_19, tmp_format_spec_19);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            if (par_indents_ == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }

            tmp_args_element_value_10 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 49;
            tmp_format_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_10);
            if (tmp_format_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_20 = mod_consts[2];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_20, tmp_format_spec_20);
            Py_DECREF(tmp_format_value_20);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
            tmp_format_value_21 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_21 == NULL)) {
                tmp_format_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_21 = mod_consts[2];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_21, tmp_format_spec_21);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 5, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_iadd_expr_right_4 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_iadd_expr_left_4;
        var__strToRtn_ = tmp_assign_source_12;

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_format_value_22;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_format_spec_22;
        tmp_iadd_expr_left_5 = mod_consts[2];
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_11 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 53;
        tmp_format_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_11);
        if (tmp_format_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_22 = mod_consts[2];
        tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_22, tmp_format_spec_22);
        Py_DECREF(tmp_format_value_22);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_23;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_format_spec_23;
            PyObject *tmp_format_value_24;
            PyObject *tmp_format_spec_24;
            PyObject *tmp_format_value_25;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_format_spec_25;
            PyObject *tmp_format_value_26;
            PyObject *tmp_format_spec_26;
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(par_objectToStr_);
            tmp_type_arg_2 = par_objectToStr_;
            tmp_format_value_23 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_format_value_23 == NULL));
            tmp_format_spec_23 = mod_consts[2];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_23, tmp_format_spec_23);
            Py_DECREF(tmp_format_value_23);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
            CHECK_OBJECT(par_name_);
            tmp_format_value_24 = par_name_;
            tmp_format_spec_24 = mod_consts[2];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_24, tmp_format_spec_24);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 4, tmp_tuple_element_5);
            CHECK_OBJECT(par_objectToStr_);
            tmp_len_arg_1 = par_objectToStr_;
            tmp_format_value_25 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_format_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_25 = mod_consts[2];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_25, tmp_format_spec_25);
            Py_DECREF(tmp_format_value_25);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 5, tmp_tuple_element_5);
            tmp_format_value_26 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_26 == NULL)) {
                tmp_format_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_26 = mod_consts[2];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_26, tmp_format_spec_26);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 6, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_iadd_expr_right_5 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_5);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        assert(!(tmp_result == false));
        tmp_assign_source_13 = tmp_iadd_expr_left_5;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_13;
    }
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_4 = var__thisType_;
        tmp_cmp_expr_right_4 = (PyObject *)&PyFloat_Type;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_format_value_27;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_format_spec_27;
        tmp_iadd_expr_left_6 = mod_consts[2];
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_12 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 60;
        tmp_format_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_12);
        if (tmp_format_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_27 = mod_consts[2];
        tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_27, tmp_format_spec_27);
        Py_DECREF(tmp_format_value_27);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(10);
        {
            PyObject *tmp_format_value_28;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_format_spec_28;
            PyObject *tmp_format_value_29;
            PyObject *tmp_format_spec_29;
            PyObject *tmp_format_value_30;
            PyObject *tmp_format_spec_30;
            PyObject *tmp_format_value_31;
            PyObject *tmp_format_spec_31;
            PyObject *tmp_format_value_32;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_format_spec_32;
            PyObject *tmp_format_value_33;
            PyObject *tmp_format_spec_33;
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_13 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 60;
            tmp_format_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_13);
            if (tmp_format_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_28 = mod_consts[2];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_28, tmp_format_spec_28);
            Py_DECREF(tmp_format_value_28);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_29 = var__thisType_;
            tmp_format_spec_29 = mod_consts[2];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_29, tmp_format_spec_29);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 4, tmp_tuple_element_6);
            CHECK_OBJECT(par_name_);
            tmp_format_value_30 = par_name_;
            tmp_format_spec_30 = mod_consts[2];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_30, tmp_format_spec_30);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 6, tmp_tuple_element_6);
            CHECK_OBJECT(par_objectToStr_);
            tmp_format_value_31 = par_objectToStr_;
            tmp_format_spec_31 = mod_consts[19];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_31, tmp_format_spec_31);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 7, tmp_tuple_element_6);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_14 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 60;
            tmp_format_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_14);
            if (tmp_format_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_32 = mod_consts[2];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_32, tmp_format_spec_32);
            Py_DECREF(tmp_format_value_32);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 8, tmp_tuple_element_6);
            tmp_format_value_33 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_33 == NULL)) {
                tmp_format_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_33 = mod_consts[2];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_33, tmp_format_spec_33);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 9, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_iadd_expr_right_6 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_iadd_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_6);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        assert(!(tmp_result == false));
        tmp_assign_source_14 = tmp_iadd_expr_left_6;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_14;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_5 = var__thisType_;
        tmp_cmp_expr_right_5 = (PyObject *)&PyLong_Type;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_format_value_34;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_format_spec_34;
        tmp_iadd_expr_left_7 = mod_consts[2];
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_15 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 66;
        tmp_format_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_15);
        if (tmp_format_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_34 = mod_consts[2];
        tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_34, tmp_format_spec_34);
        Py_DECREF(tmp_format_value_34);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(10);
        {
            PyObject *tmp_format_value_35;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_format_spec_35;
            PyObject *tmp_format_value_36;
            PyObject *tmp_format_spec_36;
            PyObject *tmp_format_value_37;
            PyObject *tmp_format_spec_37;
            PyObject *tmp_format_value_38;
            PyObject *tmp_format_spec_38;
            PyObject *tmp_format_value_39;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_format_spec_39;
            PyObject *tmp_format_value_40;
            PyObject *tmp_format_spec_40;
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_16 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 66;
            tmp_format_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_16);
            if (tmp_format_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_35 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_35, tmp_format_spec_35);
            Py_DECREF(tmp_format_value_35);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_36 = var__thisType_;
            tmp_format_spec_36 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_36, tmp_format_spec_36);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 4, tmp_tuple_element_7);
            CHECK_OBJECT(par_name_);
            tmp_format_value_37 = par_name_;
            tmp_format_spec_37 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_37, tmp_format_spec_37);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 5, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 6, tmp_tuple_element_7);
            CHECK_OBJECT(par_objectToStr_);
            tmp_format_value_38 = par_objectToStr_;
            tmp_format_spec_38 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_38, tmp_format_spec_38);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 7, tmp_tuple_element_7);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_17 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 66;
            tmp_format_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_17);
            if (tmp_format_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_39 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_39, tmp_format_spec_39);
            Py_DECREF(tmp_format_value_39);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 8, tmp_tuple_element_7);
            tmp_format_value_40 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_40 == NULL)) {
                tmp_format_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_40 = mod_consts[2];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_40, tmp_format_spec_40);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 9, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_iadd_expr_right_7 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_iadd_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_7);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        Py_DECREF(tmp_iadd_expr_right_7);
        assert(!(tmp_result == false));
        tmp_assign_source_15 = tmp_iadd_expr_left_7;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_15;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_6 = var__thisType_;
        tmp_cmp_expr_right_6 = (PyObject *)&PyList_Type;
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_recursive_);
        tmp_cmp_expr_left_7 = par_recursive_;
        tmp_cmp_expr_right_7 = Py_True;
        tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_format_value_41;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_format_spec_41;
        tmp_iadd_expr_left_8 = mod_consts[2];
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_18 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 76;
        tmp_format_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_18);
        if (tmp_format_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_41 = mod_consts[2];
        tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_41, tmp_format_spec_41);
        Py_DECREF(tmp_format_value_41);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(13);
        {
            PyObject *tmp_format_value_42;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_format_spec_42;
            PyObject *tmp_format_value_43;
            PyObject *tmp_format_spec_43;
            PyObject *tmp_format_value_44;
            PyObject *tmp_format_spec_44;
            PyObject *tmp_format_value_45;
            PyObject *tmp_format_spec_45;
            PyObject *tmp_format_value_46;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_format_spec_46;
            PyObject *tmp_format_value_47;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyObject *tmp_format_spec_47;
            PyObject *tmp_format_value_48;
            PyObject *tmp_format_spec_48;
            PyObject *tmp_format_value_49;
            PyObject *tmp_format_spec_49;
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_19 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 76;
            tmp_format_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_19);
            if (tmp_format_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_42 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_42, tmp_format_spec_42);
            Py_DECREF(tmp_format_value_42);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_43 = var__thisType_;
            tmp_format_spec_43 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_43, tmp_format_spec_43);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 4, tmp_tuple_element_8);
            CHECK_OBJECT(par_name_);
            tmp_format_value_44 = par_name_;
            tmp_format_spec_44 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_44, tmp_format_spec_44);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 5, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 6, tmp_tuple_element_8);
            tmp_format_value_45 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_45 == NULL)) {
                tmp_format_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_45 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_45, tmp_format_spec_45);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 7, tmp_tuple_element_8);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_4 = par_indents_;
            tmp_add_expr_right_4 = mod_consts[10];
            tmp_args_element_value_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 76;
            tmp_format_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_format_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_46 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_46, tmp_format_spec_46);
            Py_DECREF(tmp_format_value_46);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 8, tmp_tuple_element_8);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_5 = par_indents_;
            tmp_add_expr_right_5 = mod_consts[10];
            tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 76;
            tmp_format_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_format_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_47 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_47, tmp_format_spec_47);
            Py_DECREF(tmp_format_value_47);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 9, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 10, tmp_tuple_element_8);
            tmp_format_value_48 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_format_value_48 == NULL)) {
                tmp_format_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
            }

            if (tmp_format_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_48 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_48, tmp_format_spec_48);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 11, tmp_tuple_element_8);
            tmp_format_value_49 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_49 == NULL)) {
                tmp_format_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_49 = mod_consts[2];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_49, tmp_format_spec_49);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 12, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_iadd_expr_right_8 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_iadd_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_8);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        Py_DECREF(tmp_iadd_expr_right_8);
        assert(!(tmp_result == false));
        tmp_assign_source_16 = tmp_iadd_expr_left_8;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(par_objectToStr_);
        tmp_iter_arg_3 = par_objectToStr_;
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooobo";
                exception_lineno = 77;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_19 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var__thisValue_;
            var__thisValue_ = tmp_assign_source_19;
            Py_INCREF(var__thisValue_);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_9 = var__strToRtn_;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }

        tmp_add_expr_left_6 = par_indents_;
        tmp_add_expr_right_6 = mod_consts[10];
        tmp_kw_call_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_1_2 = mod_consts[2];
        CHECK_OBJECT(var__thisValue_);
        tmp_kw_call_value_2_2 = var__thisValue_;
        tmp_kw_call_value_3_2 = Py_True;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 79;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

            tmp_iadd_expr_right_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_iadd_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        Py_DECREF(tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_5;
        }
        tmp_assign_source_20 = tmp_iadd_expr_left_9;
        var__strToRtn_ = tmp_assign_source_20;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 77;
        type_description_1 = "ooooooooooobo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_format_value_50;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_format_spec_50;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_10 = var__strToRtn_;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 87;
        tmp_format_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_22);
        if (tmp_format_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_50 = mod_consts[2];
        tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_50, tmp_format_spec_50);
        Py_DECREF(tmp_format_value_50);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_51;
            PyObject *tmp_format_spec_51;
            PyObject *tmp_format_value_52;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_format_spec_52;
            PyObject *tmp_format_value_53;
            PyObject *tmp_format_spec_53;
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
            tmp_format_value_51 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_format_value_51 == NULL)) {
                tmp_format_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
            }

            if (tmp_format_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_51 = mod_consts[2];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_51, tmp_format_spec_51);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 3, tmp_tuple_element_9);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            if (par_indents_ == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }

            tmp_args_element_value_23 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 87;
            tmp_format_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_23);
            if (tmp_format_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_52 = mod_consts[2];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_52, tmp_format_spec_52);
            Py_DECREF(tmp_format_value_52);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 4, tmp_tuple_element_9);
            tmp_format_value_53 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_53 == NULL)) {
                tmp_format_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_53 = mod_consts[2];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_53, tmp_format_spec_53);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 5, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_iadd_expr_right_10 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_iadd_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        Py_DECREF(tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_iadd_expr_left_10;
        var__strToRtn_ = tmp_assign_source_21;

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_format_value_54;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_format_spec_54;
        tmp_iadd_expr_left_11 = mod_consts[2];
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_24 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 91;
        tmp_format_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_24);
        if (tmp_format_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_54 = mod_consts[2];
        tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_54, tmp_format_spec_54);
        Py_DECREF(tmp_format_value_54);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_55;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_format_spec_55;
            PyObject *tmp_format_value_56;
            PyObject *tmp_format_spec_56;
            PyObject *tmp_format_value_57;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_format_spec_57;
            PyObject *tmp_format_value_58;
            PyObject *tmp_format_spec_58;
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 0, tmp_tuple_element_10);
            CHECK_OBJECT(par_objectToStr_);
            tmp_type_arg_3 = par_objectToStr_;
            tmp_format_value_55 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_format_value_55 == NULL));
            tmp_format_spec_55 = mod_consts[2];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_55, tmp_format_spec_55);
            Py_DECREF(tmp_format_value_55);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(par_name_);
            tmp_format_value_56 = par_name_;
            tmp_format_spec_56 = mod_consts[2];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_56, tmp_format_spec_56);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 3, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 4, tmp_tuple_element_10);
            CHECK_OBJECT(par_objectToStr_);
            tmp_len_arg_2 = par_objectToStr_;
            tmp_format_value_57 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_format_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_57 = mod_consts[2];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_57, tmp_format_spec_57);
            Py_DECREF(tmp_format_value_57);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 5, tmp_tuple_element_10);
            tmp_format_value_58 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_58 == NULL)) {
                tmp_format_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_58 = mod_consts[2];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_58, tmp_format_spec_58);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 6, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_string_concat_values_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_iadd_expr_right_11 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_iadd_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_11);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        Py_DECREF(tmp_iadd_expr_right_11);
        assert(!(tmp_result == false));
        tmp_assign_source_22 = tmp_iadd_expr_left_11;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_22;
    }
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_8 = var__thisType_;
        tmp_cmp_expr_right_8 = (PyObject *)&PyUnicode_Type;
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_format_value_59;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_format_spec_59;
        tmp_iadd_expr_left_12 = mod_consts[2];
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_25 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 98;
        tmp_format_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_25);
        if (tmp_format_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_59 = mod_consts[2];
        tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_59, tmp_format_spec_59);
        Py_DECREF(tmp_format_value_59);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(12);
        {
            PyObject *tmp_format_value_60;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_format_spec_60;
            PyObject *tmp_format_value_61;
            PyObject *tmp_format_spec_61;
            PyObject *tmp_format_value_62;
            PyObject *tmp_format_spec_62;
            PyObject *tmp_format_value_63;
            PyObject *tmp_format_spec_63;
            PyObject *tmp_format_value_64;
            PyObject *tmp_format_spec_64;
            PyObject *tmp_format_value_65;
            PyObject *tmp_format_spec_65;
            PyObject *tmp_format_value_66;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_format_spec_66;
            PyObject *tmp_format_value_67;
            PyObject *tmp_format_spec_67;
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 0, tmp_tuple_element_11);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_26 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 98;
            tmp_format_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_26);
            if (tmp_format_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_60 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_60, tmp_format_spec_60);
            Py_DECREF(tmp_format_value_60);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 2, tmp_tuple_element_11);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_61 = var__thisType_;
            tmp_format_spec_61 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_61, tmp_format_spec_61);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 3, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 4, tmp_tuple_element_11);
            CHECK_OBJECT(par_name_);
            tmp_format_value_62 = par_name_;
            tmp_format_spec_62 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_62, tmp_format_spec_62);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 5, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 6, tmp_tuple_element_11);
            tmp_format_value_63 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_format_value_63 == NULL)) {
                tmp_format_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_format_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_63 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_63, tmp_format_spec_63);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 7, tmp_tuple_element_11);
            CHECK_OBJECT(par_objectToStr_);
            tmp_format_value_64 = par_objectToStr_;
            tmp_format_spec_64 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_64, tmp_format_spec_64);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 8, tmp_tuple_element_11);
            tmp_format_value_65 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_format_value_65 == NULL)) {
                tmp_format_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_format_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_65 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_65, tmp_format_spec_65);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 9, tmp_tuple_element_11);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_27 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 98;
            tmp_format_value_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_27);
            if (tmp_format_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_66 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_66, tmp_format_spec_66);
            Py_DECREF(tmp_format_value_66);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 10, tmp_tuple_element_11);
            tmp_format_value_67 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_67 == NULL)) {
                tmp_format_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_67 = mod_consts[2];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_67, tmp_format_spec_67);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 11, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_string_concat_values_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_iadd_expr_right_12 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_iadd_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_12);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        Py_DECREF(tmp_iadd_expr_right_12);
        assert(!(tmp_result == false));
        tmp_assign_source_23 = tmp_iadd_expr_left_12;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_23;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var__thisType_);
        tmp_cmp_expr_left_9 = var__thisType_;
        tmp_cmp_expr_right_9 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_recursive_);
        tmp_cmp_expr_left_10 = par_recursive_;
        tmp_cmp_expr_right_10 = Py_True;
        tmp_condition_result_10 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_format_value_68;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_format_spec_68;
        tmp_iadd_expr_left_13 = mod_consts[2];
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_28 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 108;
        tmp_format_value_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_28);
        if (tmp_format_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_68 = mod_consts[2];
        tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_68, tmp_format_spec_68);
        Py_DECREF(tmp_format_value_68);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(13);
        {
            PyObject *tmp_format_value_69;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_format_spec_69;
            PyObject *tmp_format_value_70;
            PyObject *tmp_format_spec_70;
            PyObject *tmp_format_value_71;
            PyObject *tmp_format_spec_71;
            PyObject *tmp_format_value_72;
            PyObject *tmp_format_spec_72;
            PyObject *tmp_format_value_73;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyObject *tmp_format_spec_73;
            PyObject *tmp_format_value_74;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_format_spec_74;
            PyObject *tmp_format_value_75;
            PyObject *tmp_format_spec_75;
            PyObject *tmp_format_value_76;
            PyObject *tmp_format_spec_76;
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 0, tmp_tuple_element_12);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_29 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 108;
            tmp_format_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_29);
            if (tmp_format_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_69 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_69, tmp_format_spec_69);
            Py_DECREF(tmp_format_value_69);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 2, tmp_tuple_element_12);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_70 = var__thisType_;
            tmp_format_spec_70 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_70, tmp_format_spec_70);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 3, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 4, tmp_tuple_element_12);
            CHECK_OBJECT(par_name_);
            tmp_format_value_71 = par_name_;
            tmp_format_spec_71 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_71, tmp_format_spec_71);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 5, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 6, tmp_tuple_element_12);
            tmp_format_value_72 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_72 == NULL)) {
                tmp_format_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_72 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_72, tmp_format_spec_72);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 7, tmp_tuple_element_12);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_7 = par_indents_;
            tmp_add_expr_right_7 = mod_consts[10];
            tmp_args_element_value_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 108;
            tmp_format_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_format_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_73 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_73, tmp_format_spec_73);
            Py_DECREF(tmp_format_value_73);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 8, tmp_tuple_element_12);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            CHECK_OBJECT(par_indents_);
            tmp_add_expr_left_8 = par_indents_;
            tmp_add_expr_right_8 = mod_consts[10];
            tmp_args_element_value_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 108;
            tmp_format_value_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_format_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_74 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_74, tmp_format_spec_74);
            Py_DECREF(tmp_format_value_74);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 9, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 10, tmp_tuple_element_12);
            tmp_format_value_75 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_format_value_75 == NULL)) {
                tmp_format_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_format_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_75 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_75, tmp_format_spec_75);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 11, tmp_tuple_element_12);
            tmp_format_value_76 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_76 == NULL)) {
                tmp_format_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_76 = mod_consts[2];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_76, tmp_format_spec_76);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 12, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_string_concat_values_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_iadd_expr_right_13 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_iadd_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_13);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        Py_DECREF(tmp_iadd_expr_right_13);
        assert(!(tmp_result == false));
        tmp_assign_source_24 = tmp_iadd_expr_left_13;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(par_objectToStr_);
        tmp_iter_arg_4 = par_objectToStr_;
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooobo";
                exception_lineno = 109;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_27 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var__thisValue_;
            var__thisValue_ = tmp_assign_source_27;
            Py_INCREF(var__thisValue_);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        PyObject *tmp_called_value_35;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_14 = var__strToRtn_;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_9 = par_indents_;
        tmp_add_expr_right_9 = mod_consts[10];
        tmp_kw_call_value_0_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }
        if (par_name_ == NULL) {
            Py_DECREF(tmp_kw_call_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }

        tmp_kw_call_value_1_3 = par_name_;
        CHECK_OBJECT(var__thisValue_);
        tmp_kw_call_value_2_3 = var__thisValue_;
        tmp_kw_call_value_3_3 = Py_True;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 110;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3};

            tmp_iadd_expr_right_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_iadd_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        Py_DECREF(tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_6;
        }
        tmp_assign_source_28 = tmp_iadd_expr_left_14;
        var__strToRtn_ = tmp_assign_source_28;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 109;
        type_description_1 = "ooooooooooobo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_format_value_77;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_format_spec_77;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_15 = var__strToRtn_;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        if (par_indents_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 116;
        tmp_format_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_32);
        if (tmp_format_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_77 = mod_consts[2];
        tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_77, tmp_format_spec_77);
        Py_DECREF(tmp_format_value_77);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_13 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_78;
            PyObject *tmp_format_spec_78;
            PyObject *tmp_format_value_79;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_format_spec_79;
            PyObject *tmp_format_value_80;
            PyObject *tmp_format_spec_80;
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 1, tmp_tuple_element_13);
            tmp_format_value_78 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_format_value_78 == NULL)) {
                tmp_format_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_format_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            tmp_format_spec_78 = mod_consts[2];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_78, tmp_format_spec_78);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 2, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 3, tmp_tuple_element_13);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            if (par_indents_ == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }

            tmp_args_element_value_33 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 116;
            tmp_format_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_33);
            if (tmp_format_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            tmp_format_spec_79 = mod_consts[2];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_79, tmp_format_spec_79);
            Py_DECREF(tmp_format_value_79);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 4, tmp_tuple_element_13);
            tmp_format_value_80 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_80 == NULL)) {
                tmp_format_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            tmp_format_spec_80 = mod_consts[2];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_80, tmp_format_spec_80);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 5, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_string_concat_values_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_iadd_expr_right_15 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_iadd_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        Py_DECREF(tmp_iadd_expr_right_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = tmp_iadd_expr_left_15;
        var__strToRtn_ = tmp_assign_source_29;

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iadd_expr_left_16;
        PyObject *tmp_iadd_expr_right_16;
        PyObject *tmp_string_concat_values_14;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_format_value_81;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_format_spec_81;
        tmp_iadd_expr_left_16 = mod_consts[2];
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_34 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 120;
        tmp_format_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_34);
        if (tmp_format_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_81 = mod_consts[2];
        tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_81, tmp_format_spec_81);
        Py_DECREF(tmp_format_value_81);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_14 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_82;
            PyObject *tmp_type_arg_4;
            PyObject *tmp_format_spec_82;
            PyObject *tmp_format_value_83;
            PyObject *tmp_format_spec_83;
            PyObject *tmp_format_value_84;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_format_spec_84;
            PyObject *tmp_format_value_85;
            PyObject *tmp_format_spec_85;
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 0, tmp_tuple_element_14);
            CHECK_OBJECT(par_objectToStr_);
            tmp_type_arg_4 = par_objectToStr_;
            tmp_format_value_82 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_format_value_82 == NULL));
            tmp_format_spec_82 = mod_consts[2];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_82, tmp_format_spec_82);
            Py_DECREF(tmp_format_value_82);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 2, tmp_tuple_element_14);
            CHECK_OBJECT(par_name_);
            tmp_format_value_83 = par_name_;
            tmp_format_spec_83 = mod_consts[2];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_83, tmp_format_spec_83);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 3, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 4, tmp_tuple_element_14);
            CHECK_OBJECT(par_objectToStr_);
            tmp_len_arg_3 = par_objectToStr_;
            tmp_format_value_84 = BUILTIN_LEN(tmp_len_arg_3);
            if (tmp_format_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            tmp_format_spec_84 = mod_consts[2];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_84, tmp_format_spec_84);
            Py_DECREF(tmp_format_value_84);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 5, tmp_tuple_element_14);
            tmp_format_value_85 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_85 == NULL)) {
                tmp_format_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            tmp_format_spec_85 = mod_consts[2];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_85, tmp_format_spec_85);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 6, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_string_concat_values_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_iadd_expr_right_16 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_14);
        Py_DECREF(tmp_string_concat_values_14);
        if (tmp_iadd_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_16);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
        Py_DECREF(tmp_iadd_expr_right_16);
        assert(!(tmp_result == false));
        tmp_assign_source_30 = tmp_iadd_expr_left_16;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_30;
    }
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_39 = LOOKUP_BUILTIN(mod_consts[26]);
        assert(tmp_called_value_39 != NULL);
        CHECK_OBJECT(par_objectToStr_);
        tmp_args_element_value_35 = par_objectToStr_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 125;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_35);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert(var__isCallable_ == NULL);
        var__isCallable_ = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(par_objectToStr_);
        tmp_iter_arg_5 = par_objectToStr_;
        tmp_assign_source_32 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooobo";
            goto try_except_handler_7;
        }
        assert(var___DUMMY__ == NULL);
        var___DUMMY__ = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_assign_source_33;
        tmp_assign_source_33 = NUITKA_BOOL_TRUE;
        var__isIterable_ = tmp_assign_source_33;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_f4be1313f4e0bcd6b9be1c6d548f8b4d, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_f4be1313f4e0bcd6b9be1c6d548f8b4d, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_11 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_assign_source_34;
        tmp_assign_source_34 = NUITKA_BOOL_FALSE;
        var__isIterable_ = tmp_assign_source_34;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 126;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame) frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooobo";
    goto try_except_handler_8;
    branch_end_11:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_printUnkType_);
        tmp_cmp_expr_left_12 = par_printUnkType_;
        tmp_cmp_expr_right_12 = Py_True;
        tmp_condition_result_12 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = mod_consts[27];
        tmp_string_concat_values_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_86;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_format_spec_86;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 0, tmp_tuple_element_15);
            CHECK_OBJECT(par_objectToStr_);
            tmp_operand_value_2 = par_objectToStr_;
            tmp_format_value_86 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
            if (tmp_format_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_15;
            }
            tmp_format_spec_86 = mod_consts[2];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tmp_format_value_86, tmp_format_spec_86);
            Py_DECREF(tmp_format_value_86);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_string_concat_values_15);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_assign_source_35 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        assert(var__TStr1_ == NULL);
        var__TStr1_ = tmp_assign_source_35;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[2];
        assert(var__TStr1_ == NULL);
        Py_INCREF(tmp_assign_source_36);
        var__TStr1_ = tmp_assign_source_36;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iadd_expr_left_17;
        PyObject *tmp_iadd_expr_right_17;
        PyObject *tmp_string_concat_values_16;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_format_value_87;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_format_spec_87;
        tmp_iadd_expr_left_17 = mod_consts[2];
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_indents_);
        tmp_args_element_value_36 = par_indents_;
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 139;
        tmp_format_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_36);
        if (tmp_format_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_87 = mod_consts[2];
        tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_87, tmp_format_spec_87);
        Py_DECREF(tmp_format_value_87);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_16 = MAKE_TUPLE_EMPTY(15);
        {
            PyObject *tmp_format_value_88;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_format_spec_88;
            PyObject *tmp_format_value_89;
            PyObject *tmp_format_spec_89;
            PyObject *tmp_format_value_90;
            PyObject *tmp_format_spec_90;
            PyObject *tmp_format_value_91;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_format_spec_91;
            PyObject *tmp_format_value_92;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_format_spec_92;
            PyObject *tmp_format_value_93;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_format_spec_93;
            PyObject *tmp_format_value_94;
            PyObject *tmp_format_spec_94;
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 0, tmp_tuple_element_16);
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_37 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 139;
            tmp_format_value_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_37);
            if (tmp_format_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            tmp_format_spec_88 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_88, tmp_format_spec_88);
            Py_DECREF(tmp_format_value_88);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 2, tmp_tuple_element_16);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_89 = var__thisType_;
            tmp_format_spec_89 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_89, tmp_format_spec_89);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 3, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 4, tmp_tuple_element_16);
            CHECK_OBJECT(par_name_);
            tmp_format_value_90 = par_name_;
            tmp_format_spec_90 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_90, tmp_format_spec_90);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 5, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 6, tmp_tuple_element_16);
            CHECK_OBJECT(var__isCallable_);
            tmp_operand_value_3 = var__isCallable_;
            tmp_format_value_91 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            if (tmp_format_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            tmp_format_spec_91 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_91, tmp_format_spec_91);
            Py_DECREF(tmp_format_value_91);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 7, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 8, tmp_tuple_element_16);
            assert(var__isIterable_ != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_value_4 = (var__isIterable_ == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_format_value_92 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
            assert(!(tmp_format_value_92 == NULL));
            tmp_format_spec_92 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_92, tmp_format_spec_92);
            Py_DECREF(tmp_format_value_92);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 9, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 10, tmp_tuple_element_16);
            CHECK_OBJECT(var__TStr1_);
            tmp_tuple_element_16 = var__TStr1_;
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 11, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 12, tmp_tuple_element_16);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            CHECK_OBJECT(par_indents_);
            tmp_args_element_value_38 = par_indents_;
            frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 139;
            tmp_format_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_38);
            if (tmp_format_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            tmp_format_spec_93 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_93, tmp_format_spec_93);
            Py_DECREF(tmp_format_value_93);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 13, tmp_tuple_element_16);
            tmp_format_value_94 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_format_value_94 == NULL)) {
                tmp_format_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_format_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            tmp_format_spec_94 = mod_consts[2];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_94, tmp_format_spec_94);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooooooooobo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 14, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_string_concat_values_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_iadd_expr_right_17 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_16);
        Py_DECREF(tmp_string_concat_values_16);
        if (tmp_iadd_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_iadd_expr_left_17);
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_17, tmp_iadd_expr_right_17);
        Py_DECREF(tmp_iadd_expr_right_17);
        assert(!(tmp_result == false));
        tmp_assign_source_37 = tmp_iadd_expr_left_17;
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_37;
    }
    branch_end_9:;
    branch_end_8:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(var__strToRtn_);
        tmp_expression_value_2 = var__strToRtn_;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[31];
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 142;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_called_value_43);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooobo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__strToRtn_;
            assert(old != NULL);
            var__strToRtn_ = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4be1313f4e0bcd6b9be1c6d548f8b4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4be1313f4e0bcd6b9be1c6d548f8b4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4be1313f4e0bcd6b9be1c6d548f8b4d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4be1313f4e0bcd6b9be1c6d548f8b4d,
        type_description_1,
        par_indents_,
        par_name_,
        par_objectToStr_,
        par_printUnkType_,
        par_recursive_,
        var__thisType_,
        var__strToRtn_,
        var__thisKey_,
        var__thisValue_,
        var__isCallable_,
        var___DUMMY__,
        (int)var__isIterable_,
        var__TStr1_
    );


    // Release cached frame if used for exception.
    if (frame_f4be1313f4e0bcd6b9be1c6d548f8b4d == cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d);
        cache_frame_f4be1313f4e0bcd6b9be1c6d548f8b4d = NULL;
    }

    assertFrameObject(frame_f4be1313f4e0bcd6b9be1c6d548f8b4d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__strToRtn_);
    tmp_return_value = var__strToRtn_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__thisType_);
    Py_DECREF(var__thisType_);
    var__thisType_ = NULL;
    CHECK_OBJECT(var__strToRtn_);
    Py_DECREF(var__strToRtn_);
    var__strToRtn_ = NULL;
    Py_XDECREF(var__thisKey_);
    var__thisKey_ = NULL;
    Py_XDECREF(var__thisValue_);
    var__thisValue_ = NULL;
    Py_XDECREF(var__isCallable_);
    var__isCallable_ = NULL;
    Py_XDECREF(var___DUMMY__);
    var___DUMMY__ = NULL;
    var__isIterable_ = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var__TStr1_);
    var__TStr1_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var__thisType_);
    Py_DECREF(var__thisType_);
    var__thisType_ = NULL;
    Py_XDECREF(var__strToRtn_);
    var__strToRtn_ = NULL;
    Py_XDECREF(var__thisKey_);
    var__thisKey_ = NULL;
    Py_XDECREF(var__thisValue_);
    var__thisValue_ = NULL;
    Py_XDECREF(var__isCallable_);
    var__isCallable_ = NULL;
    Py_XDECREF(var___DUMMY__);
    var___DUMMY__ = NULL;
    var__isIterable_ = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var__TStr1_);
    var__TStr1_ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_indents_);
    Py_DECREF(par_indents_);
    CHECK_OBJECT(par_name_);
    Py_DECREF(par_name_);
    CHECK_OBJECT(par_objectToStr_);
    Py_DECREF(par_objectToStr_);
    CHECK_OBJECT(par_printUnkType_);
    Py_DECREF(par_printUnkType_);
    CHECK_OBJECT(par_recursive_);
    Py_DECREF(par_recursive_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_indents_);
    Py_DECREF(par_indents_);
    CHECK_OBJECT(par_name_);
    Py_DECREF(par_name_);
    CHECK_OBJECT(par_objectToStr_);
    Py_DECREF(par_objectToStr_);
    CHECK_OBJECT(par_printUnkType_);
    Py_DECREF(par_printUnkType_);
    CHECK_OBJECT(par_recursive_);
    Py_DECREF(par_recursive_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_objectToStr_ = python_pars[0];
    PyObject *par_printUnkType_ = python_pars[1];
    PyObject *par_recursive_ = python_pars[2];
    PyObject *var__strToRtn_ = NULL;
    PyObject *var__thisAttr_ = NULL;
    PyObject *var__thisObj_ = NULL;
    PyObject *var__thisType_ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dd455d01391ad0c4a7131a006fdd538e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd455d01391ad0c4a7131a006fdd538e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[2];
        assert(var__strToRtn_ == NULL);
        Py_INCREF(tmp_assign_source_1);
        var__strToRtn_ = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_dd455d01391ad0c4a7131a006fdd538e)) {
        Py_XDECREF(cache_frame_dd455d01391ad0c4a7131a006fdd538e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd455d01391ad0c4a7131a006fdd538e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd455d01391ad0c4a7131a006fdd538e = MAKE_FUNCTION_FRAME(codeobj_dd455d01391ad0c4a7131a006fdd538e, module_CSCF$SUBM_D$_00_SIMPLE_REPR, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd455d01391ad0c4a7131a006fdd538e->m_type_description == NULL);
    frame_dd455d01391ad0c4a7131a006fdd538e = cache_frame_dd455d01391ad0c4a7131a006fdd538e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd455d01391ad0c4a7131a006fdd538e);
    assert(Py_REFCNT(frame_dd455d01391ad0c4a7131a006fdd538e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dir_arg_1;
        CHECK_OBJECT(par_objectToStr_);
        tmp_dir_arg_1 = par_objectToStr_;
        tmp_iter_arg_1 = PyObject_Dir(tmp_dir_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 154;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__thisAttr_;
            var__thisAttr_ = tmp_assign_source_4;
            Py_INCREF(var__thisAttr_);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_objectToStr_);
        tmp_getattr_target_1 = par_objectToStr_;
        CHECK_OBJECT(var__thisAttr_);
        tmp_getattr_attr_1 = var__thisAttr_;
        tmp_assign_source_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var__thisObj_;
            var__thisObj_ = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(var__thisObj_);
        tmp_type_arg_1 = var__thisObj_;
        tmp_assign_source_6 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_6 == NULL));
        {
            PyObject *old = var__thisType_;
            var__thisType_ = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var__thisAttr_);
        tmp_expression_value_1 = var__thisAttr_;
        tmp_subscript_value_1 = mod_consts[32];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[33];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var__strToRtn_;
        CHECK_OBJECT(var__thisAttr_);
        tmp_format_value_1 = var__thisAttr_;
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var__thisType_);
            tmp_format_value_2 = var__thisType_;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_iadd_expr_right_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_1;
        var__strToRtn_ = tmp_assign_source_7;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (var__strToRtn_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var__strToRtn_;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var__thisObj_);
        tmp_kw_call_value_0_1 = var__thisObj_;
        if (par_printUnkType_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_1_1 = par_printUnkType_;
        if (par_recursive_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_2_1 = par_recursive_;
        frame_dd455d01391ad0c4a7131a006fdd538e->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[37]);
        }

        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_2;
        var__strToRtn_ = tmp_assign_source_8;

    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var__strToRtn_ == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 169;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var__strToRtn_;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd455d01391ad0c4a7131a006fdd538e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd455d01391ad0c4a7131a006fdd538e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd455d01391ad0c4a7131a006fdd538e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd455d01391ad0c4a7131a006fdd538e,
        type_description_1,
        par_objectToStr_,
        par_printUnkType_,
        par_recursive_,
        var__strToRtn_,
        var__thisAttr_,
        var__thisObj_,
        var__thisType_
    );


    // Release cached frame if used for exception.
    if (frame_dd455d01391ad0c4a7131a006fdd538e == cache_frame_dd455d01391ad0c4a7131a006fdd538e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd455d01391ad0c4a7131a006fdd538e);
        cache_frame_dd455d01391ad0c4a7131a006fdd538e = NULL;
    }

    assertFrameObject(frame_dd455d01391ad0c4a7131a006fdd538e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__strToRtn_);
    var__strToRtn_ = NULL;
    Py_XDECREF(var__thisAttr_);
    var__thisAttr_ = NULL;
    Py_XDECREF(var__thisObj_);
    var__thisObj_ = NULL;
    Py_XDECREF(var__thisType_);
    var__thisType_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__strToRtn_);
    var__strToRtn_ = NULL;
    Py_XDECREF(var__thisAttr_);
    var__thisAttr_ = NULL;
    Py_XDECREF(var__thisObj_);
    var__thisObj_ = NULL;
    Py_XDECREF(var__thisType_);
    var__thisType_ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_objectToStr_);
    Py_DECREF(par_objectToStr_);
    CHECK_OBJECT(par_printUnkType_);
    Py_DECREF(par_printUnkType_);
    CHECK_OBJECT(par_recursive_);
    Py_DECREF(par_recursive_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_objectToStr_);
    Py_DECREF(par_objectToStr_);
    CHECK_OBJECT(par_printUnkType_);
    Py_DECREF(par_printUnkType_);
    CHECK_OBJECT(par_recursive_);
    Py_DECREF(par_recursive_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4be1313f4e0bcd6b9be1c6d548f8b4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_SIMPLE_REPR,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd455d01391ad0c4a7131a006fdd538e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_CSCF$SUBM_D$_00_SIMPLE_REPR,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_CSCF$SUBM_D$_00_SIMPLE_REPR[] = {
    impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject,
    impl_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject,
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

    function_impl_code *current = functable_CSCF$SUBM_D$_00_SIMPLE_REPR;
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

    if (offset > sizeof(functable_CSCF$SUBM_D$_00_SIMPLE_REPR) || offset < 0) {
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
        functable_CSCF$SUBM_D$_00_SIMPLE_REPR[offset],
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
        module_CSCF$SUBM_D$_00_SIMPLE_REPR,
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
PyObject *modulecode_CSCF$SUBM_D$_00_SIMPLE_REPR(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("CSCF.SUBM_D._00_SIMPLE_REPR");

    // Store the module for future use.
    module_CSCF$SUBM_D$_00_SIMPLE_REPR = module;

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
        PRINT_STRING("CSCF.SUBM_D._00_SIMPLE_REPR: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CSCF.SUBM_D._00_SIMPLE_REPR: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CSCF.SUBM_D._00_SIMPLE_REPR: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initCSCF$SUBM_D$_00_SIMPLE_REPR\n");

    moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR = MODULE_DICT(module_CSCF$SUBM_D$_00_SIMPLE_REPR);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_CSCF$SUBM_D$_00_SIMPLE_REPR);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_CSCF$SUBM_D$_00_SIMPLE_REPR);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_2b57374988dd9ecc97160dd1380acdd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    frame_2b57374988dd9ecc97160dd1380acdd3 = MAKE_MODULE_FRAME(codeobj_2b57374988dd9ecc97160dd1380acdd3, module_CSCF$SUBM_D$_00_SIMPLE_REPR);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b57374988dd9ecc97160dd1380acdd3);
    assert(Py_REFCNT(frame_2b57374988dd9ecc97160dd1380acdd3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[44];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[45];
        tmp_level_value_1 = mod_consts[32];
        frame_2b57374988dd9ecc97160dd1380acdd3->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR,
                mod_consts[46],
                mod_consts[32]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_4);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = (PyObject *)moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        frame_2b57374988dd9ecc97160dd1380acdd3->m_frame.f_lineno = 6;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b57374988dd9ecc97160dd1380acdd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b57374988dd9ecc97160dd1380acdd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b57374988dd9ecc97160dd1380acdd3, exception_lineno);
    }



    assertFrameObject(frame_2b57374988dd9ecc97160dd1380acdd3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[50]);


        tmp_assign_source_5 = MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__1_strAnObject(tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_1;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[51]);
        tmp_annotations_1 = DICT_COPY(mod_consts[52]);


        tmp_assign_source_6 = MAKE_FUNCTION_CSCF$SUBM_D$_00_SIMPLE_REPR$$$function__2_strWholeObject(tmp_kw_defaults_2, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("CSCF.SUBM_D._00_SIMPLE_REPR", false);

    Py_INCREF(module_CSCF$SUBM_D$_00_SIMPLE_REPR);
    return module_CSCF$SUBM_D$_00_SIMPLE_REPR;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_SIMPLE_REPR, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("CSCF$SUBM_D$_00_SIMPLE_REPR", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
