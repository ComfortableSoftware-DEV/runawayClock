/* Generated code for Python module 'CSCF.SUBM_D._00_OS_VARS'
 * created by Nuitka version 1.6rc8
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

/* The "module_CSCF$SUBM_D$_00_OS_VARS" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_CSCF$SUBM_D$_00_OS_VARS;
PyDictObject *moduledict_CSCF$SUBM_D$_00_OS_VARS;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[256];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[256];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("CSCF.SUBM_D._00_OS_VARS"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 256; i++) {
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
void checkModuleConstants_CSCF$SUBM_D$_00_OS_VARS(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 256; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6e5cd40e78e93b13a53db3842d809b51;
static PyCodeObject *codeobj_7c044649a0a4a1eaa84614831e642204;
static PyCodeObject *codeobj_821610e6d5f852d409892a5a467f7b3b;
static PyCodeObject *codeobj_08bb6ed523e87165897176f2fce775c6;
static PyCodeObject *codeobj_7adef9d8d35bbb2fd29fbabfa1909e2d;
static PyCodeObject *codeobj_ae27539faffc169a303425bc2f42a550;
static PyCodeObject *codeobj_7f170bf5aa8ff30ea82fdae19c609423;
static PyCodeObject *codeobj_4ff9827439ecfcefdd654c5b4e4d161c;
static PyCodeObject *codeobj_02cbd4cf025d940eea82a0e416eaef83;
static PyCodeObject *codeobj_7eb69cf223eab69729e5c213043d35af;
static PyCodeObject *codeobj_4de638d796927bac9bd99e3a4bf29f72;
static PyCodeObject *codeobj_f6997110989cca73b31a9c0c2b522630;
static PyCodeObject *codeobj_218a2243c5337ac9eb79310ce3dab57e;
static PyCodeObject *codeobj_1d56747fc1f8f73fc85b82b0ec9b7e8d;
static PyCodeObject *codeobj_3451f82bc6acc2cf2e1784c9333eec9a;
static PyCodeObject *codeobj_f0d8ea7e50b82bef235586866d220182;
static PyCodeObject *codeobj_c769601a8aaea8ea903b4b14ebf8b070;
static PyCodeObject *codeobj_5c51f6cd70a915d7f0f557c240649566;
static PyCodeObject *codeobj_360464301ba44ab17f9eb915aaf18412;
static PyCodeObject *codeobj_5b9420b0f38f126b93b77ad13daa4d65;
static PyCodeObject *codeobj_12743ebaffc135e47719afbe8f005b7f;
static PyCodeObject *codeobj_98cf8ff0d36c1e87f59056462f625c63;
static PyCodeObject *codeobj_3494c05db052ee46f5bda63293932a8b;
static PyCodeObject *codeobj_bb2503cbc850b21cae62b146948a6b19;
static PyCodeObject *codeobj_f19da16dd5e75345e90424dc7cf067f7;
static PyCodeObject *codeobj_08d7542f309ceb4aa990353dc12f96ac;
static PyCodeObject *codeobj_439dc702b6b4d443c1b84330addc4653;
static PyCodeObject *codeobj_83e584a16e7e3c2daada639aacf6ecd6;
static PyCodeObject *codeobj_34496747f20201dd1faebcffee0be565;
static PyCodeObject *codeobj_d4b90513d4b96818c7c5deddfa7f4dae;
static PyCodeObject *codeobj_f85387dd22c129e7bd1f474685a0b6a6;
static PyCodeObject *codeobj_81faa84ffd9e5f0080adec0fa6c35f2f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[47]; CHECK_OBJECT(module_filename_obj);
    codeobj_6e5cd40e78e93b13a53db3842d809b51 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[248], NULL, 1, 0, 0);
    codeobj_7c044649a0a4a1eaa84614831e642204 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[248], NULL, 1, 0, 0);
    codeobj_821610e6d5f852d409892a5a467f7b3b = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[248], NULL, 1, 0, 0);
    codeobj_08bb6ed523e87165897176f2fce775c6 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[248], NULL, 1, 0, 0);
    codeobj_7adef9d8d35bbb2fd29fbabfa1909e2d = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[248], NULL, 1, 0, 0);
    codeobj_ae27539faffc169a303425bc2f42a550 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_7f170bf5aa8ff30ea82fdae19c609423 = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_4ff9827439ecfcefdd654c5b4e4d161c = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_02cbd4cf025d940eea82a0e416eaef83 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_7eb69cf223eab69729e5c213043d35af = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_4de638d796927bac9bd99e3a4bf29f72 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_f6997110989cca73b31a9c0c2b522630 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_218a2243c5337ac9eb79310ce3dab57e = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_1d56747fc1f8f73fc85b82b0ec9b7e8d = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_3451f82bc6acc2cf2e1784c9333eec9a = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_f0d8ea7e50b82bef235586866d220182 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_c769601a8aaea8ea903b4b14ebf8b070 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_5c51f6cd70a915d7f0f557c240649566 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_360464301ba44ab17f9eb915aaf18412 = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_5b9420b0f38f126b93b77ad13daa4d65 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[218], mod_consts[218], mod_consts[249], NULL, 1, 0, 0);
    codeobj_12743ebaffc135e47719afbe8f005b7f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[250], mod_consts[250], NULL, NULL, 0, 0, 0);
    codeobj_98cf8ff0d36c1e87f59056462f625c63 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_3494c05db052ee46f5bda63293932a8b = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_bb2503cbc850b21cae62b146948a6b19 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_f19da16dd5e75345e90424dc7cf067f7 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    codeobj_08d7542f309ceb4aa990353dc12f96ac = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], NULL, NULL, 0, 0, 0);
    codeobj_439dc702b6b4d443c1b84330addc4653 = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[235], mod_consts[235], mod_consts[251], NULL, 0, 2, 0);
    codeobj_83e584a16e7e3c2daada639aacf6ecd6 = MAKE_CODE_OBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[240], mod_consts[240], mod_consts[252], NULL, 0, 3, 0);
    codeobj_34496747f20201dd1faebcffee0be565 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[238], mod_consts[238], mod_consts[253], NULL, 0, 1, 0);
    codeobj_d4b90513d4b96818c7c5deddfa7f4dae = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[241], mod_consts[241], mod_consts[254], NULL, 0, 2, 0);
    codeobj_f85387dd22c129e7bd1f474685a0b6a6 = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[242], mod_consts[242], mod_consts[254], NULL, 0, 2, 0);
    codeobj_81faa84ffd9e5f0080adec0fa6c35f2f = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[183], mod_consts[183], mod_consts[255], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT(PyObject *annotations);


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_08d7542f309ceb4aa990353dc12f96ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08d7542f309ceb4aa990353dc12f96ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08d7542f309ceb4aa990353dc12f96ac)) {
        Py_XDECREF(cache_frame_08d7542f309ceb4aa990353dc12f96ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08d7542f309ceb4aa990353dc12f96ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08d7542f309ceb4aa990353dc12f96ac = MAKE_FUNCTION_FRAME(codeobj_08d7542f309ceb4aa990353dc12f96ac, module_CSCF$SUBM_D$_00_OS_VARS, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08d7542f309ceb4aa990353dc12f96ac->m_type_description == NULL);
    frame_08d7542f309ceb4aa990353dc12f96ac = cache_frame_08d7542f309ceb4aa990353dc12f96ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08d7542f309ceb4aa990353dc12f96ac);
    assert(Py_REFCNT(frame_08d7542f309ceb4aa990353dc12f96ac) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08d7542f309ceb4aa990353dc12f96ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08d7542f309ceb4aa990353dc12f96ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08d7542f309ceb4aa990353dc12f96ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08d7542f309ceb4aa990353dc12f96ac,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_08d7542f309ceb4aa990353dc12f96ac == cache_frame_08d7542f309ceb4aa990353dc12f96ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08d7542f309ceb4aa990353dc12f96ac);
        cache_frame_08d7542f309ceb4aa990353dc12f96ac = NULL;
    }

    assertFrameObject(frame_08d7542f309ceb4aa990353dc12f96ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *var_y;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_locals *generator_heap = (struct CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_y = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6e5cd40e78e93b13a53db3842d809b51, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 63;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 63;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 63;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 63;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 63;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_y;
            generator_heap->var_y = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_y);
        tmp_tuple_element_1 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 63;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator_heap->var_y
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_context,
        module_CSCF$SUBM_D$_00_OS_VARS,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        mod_consts[3],
#endif
        codeobj_6e5cd40e78e93b13a53db3842d809b51,
        closure,
        1,
        sizeof(struct CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_f19da16dd5e75345e90424dc7cf067f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f19da16dd5e75345e90424dc7cf067f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f19da16dd5e75345e90424dc7cf067f7)) {
        Py_XDECREF(cache_frame_f19da16dd5e75345e90424dc7cf067f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f19da16dd5e75345e90424dc7cf067f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f19da16dd5e75345e90424dc7cf067f7 = MAKE_FUNCTION_FRAME(codeobj_f19da16dd5e75345e90424dc7cf067f7, module_CSCF$SUBM_D$_00_OS_VARS, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f19da16dd5e75345e90424dc7cf067f7->m_type_description == NULL);
    frame_f19da16dd5e75345e90424dc7cf067f7 = cache_frame_f19da16dd5e75345e90424dc7cf067f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f19da16dd5e75345e90424dc7cf067f7);
    assert(Py_REFCNT(frame_f19da16dd5e75345e90424dc7cf067f7) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f19da16dd5e75345e90424dc7cf067f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f19da16dd5e75345e90424dc7cf067f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f19da16dd5e75345e90424dc7cf067f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f19da16dd5e75345e90424dc7cf067f7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f19da16dd5e75345e90424dc7cf067f7 == cache_frame_f19da16dd5e75345e90424dc7cf067f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f19da16dd5e75345e90424dc7cf067f7);
        cache_frame_f19da16dd5e75345e90424dc7cf067f7 = NULL;
    }

    assertFrameObject(frame_f19da16dd5e75345e90424dc7cf067f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *var_y;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_locals *generator_heap = (struct CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_y = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7c044649a0a4a1eaa84614831e642204, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 106;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 106;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 106;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 106;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 106;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_y;
            generator_heap->var_y = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_y);
        tmp_tuple_element_1 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 106;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator_heap->var_y
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_context,
        module_CSCF$SUBM_D$_00_OS_VARS,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        mod_consts[5],
#endif
        codeobj_7c044649a0a4a1eaa84614831e642204,
        closure,
        1,
        sizeof(struct CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_98cf8ff0d36c1e87f59056462f625c63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_98cf8ff0d36c1e87f59056462f625c63 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_98cf8ff0d36c1e87f59056462f625c63)) {
        Py_XDECREF(cache_frame_98cf8ff0d36c1e87f59056462f625c63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98cf8ff0d36c1e87f59056462f625c63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98cf8ff0d36c1e87f59056462f625c63 = MAKE_FUNCTION_FRAME(codeobj_98cf8ff0d36c1e87f59056462f625c63, module_CSCF$SUBM_D$_00_OS_VARS, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98cf8ff0d36c1e87f59056462f625c63->m_type_description == NULL);
    frame_98cf8ff0d36c1e87f59056462f625c63 = cache_frame_98cf8ff0d36c1e87f59056462f625c63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_98cf8ff0d36c1e87f59056462f625c63);
    assert(Py_REFCNT(frame_98cf8ff0d36c1e87f59056462f625c63) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98cf8ff0d36c1e87f59056462f625c63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98cf8ff0d36c1e87f59056462f625c63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98cf8ff0d36c1e87f59056462f625c63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98cf8ff0d36c1e87f59056462f625c63,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_98cf8ff0d36c1e87f59056462f625c63 == cache_frame_98cf8ff0d36c1e87f59056462f625c63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98cf8ff0d36c1e87f59056462f625c63);
        cache_frame_98cf8ff0d36c1e87f59056462f625c63 = NULL;
    }

    assertFrameObject(frame_98cf8ff0d36c1e87f59056462f625c63);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *var_y;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_locals *generator_heap = (struct CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_y = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_821610e6d5f852d409892a5a467f7b3b, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 143;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 143;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_y;
            generator_heap->var_y = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_y);
        tmp_tuple_element_1 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 143;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator_heap->var_y
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_context,
        module_CSCF$SUBM_D$_00_OS_VARS,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        mod_consts[7],
#endif
        codeobj_821610e6d5f852d409892a5a467f7b3b,
        closure,
        1,
        sizeof(struct CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_3494c05db052ee46f5bda63293932a8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3494c05db052ee46f5bda63293932a8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3494c05db052ee46f5bda63293932a8b)) {
        Py_XDECREF(cache_frame_3494c05db052ee46f5bda63293932a8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3494c05db052ee46f5bda63293932a8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3494c05db052ee46f5bda63293932a8b = MAKE_FUNCTION_FRAME(codeobj_3494c05db052ee46f5bda63293932a8b, module_CSCF$SUBM_D$_00_OS_VARS, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3494c05db052ee46f5bda63293932a8b->m_type_description == NULL);
    frame_3494c05db052ee46f5bda63293932a8b = cache_frame_3494c05db052ee46f5bda63293932a8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3494c05db052ee46f5bda63293932a8b);
    assert(Py_REFCNT(frame_3494c05db052ee46f5bda63293932a8b) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3494c05db052ee46f5bda63293932a8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3494c05db052ee46f5bda63293932a8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3494c05db052ee46f5bda63293932a8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3494c05db052ee46f5bda63293932a8b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_3494c05db052ee46f5bda63293932a8b == cache_frame_3494c05db052ee46f5bda63293932a8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3494c05db052ee46f5bda63293932a8b);
        cache_frame_3494c05db052ee46f5bda63293932a8b = NULL;
    }

    assertFrameObject(frame_3494c05db052ee46f5bda63293932a8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *var_y;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_locals *generator_heap = (struct CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_y = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_08bb6ed523e87165897176f2fce775c6, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 156;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 156;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_y;
            generator_heap->var_y = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_y);
        tmp_tuple_element_1 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 156;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator_heap->var_y
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_context,
        module_CSCF$SUBM_D$_00_OS_VARS,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_08bb6ed523e87165897176f2fce775c6,
        closure,
        1,
        sizeof(struct CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_bb2503cbc850b21cae62b146948a6b19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bb2503cbc850b21cae62b146948a6b19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb2503cbc850b21cae62b146948a6b19)) {
        Py_XDECREF(cache_frame_bb2503cbc850b21cae62b146948a6b19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb2503cbc850b21cae62b146948a6b19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb2503cbc850b21cae62b146948a6b19 = MAKE_FUNCTION_FRAME(codeobj_bb2503cbc850b21cae62b146948a6b19, module_CSCF$SUBM_D$_00_OS_VARS, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb2503cbc850b21cae62b146948a6b19->m_type_description == NULL);
    frame_bb2503cbc850b21cae62b146948a6b19 = cache_frame_bb2503cbc850b21cae62b146948a6b19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb2503cbc850b21cae62b146948a6b19);
    assert(Py_REFCNT(frame_bb2503cbc850b21cae62b146948a6b19) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_iter_arg_1 == NULL)) {
                tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dict_seq_1 = MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb2503cbc850b21cae62b146948a6b19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb2503cbc850b21cae62b146948a6b19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb2503cbc850b21cae62b146948a6b19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb2503cbc850b21cae62b146948a6b19,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_bb2503cbc850b21cae62b146948a6b19 == cache_frame_bb2503cbc850b21cae62b146948a6b19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb2503cbc850b21cae62b146948a6b19);
        cache_frame_bb2503cbc850b21cae62b146948a6b19 = NULL;
    }

    assertFrameObject(frame_bb2503cbc850b21cae62b146948a6b19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *var_y;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_locals *generator_heap = (struct CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_y = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7adef9d8d35bbb2fd29fbabfa1909e2d, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 171;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 171;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 171;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 171;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 171;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_y;
            generator_heap->var_y = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_y);
        tmp_tuple_element_1 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 171;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator_heap->var_y
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_context,
        module_CSCF$SUBM_D$_00_OS_VARS,
        mod_consts[2],
#if PYTHON_VERSION >= 0x350
        mod_consts[11],
#endif
        codeobj_7adef9d8d35bbb2fd29fbabfa1909e2d,
        closure,
        1,
        sizeof(struct CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_listIn_ = python_pars[0];
    PyObject *var__listToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_81faa84ffd9e5f0080adec0fa6c35f2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f)) {
        Py_XDECREF(cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f = MAKE_FUNCTION_FRAME(codeobj_81faa84ffd9e5f0080adec0fa6c35f2f, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f->m_type_description == NULL);
    frame_81faa84ffd9e5f0080adec0fa6c35f2f = cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81faa84ffd9e5f0080adec0fa6c35f2f);
    assert(Py_REFCNT(frame_81faa84ffd9e5f0080adec0fa6c35f2f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_set_arg_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[12]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_listIn_);
        tmp_set_arg_1 = par_listIn_;
        tmp_args_element_value_1 = PySet_New(tmp_set_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_81faa84ffd9e5f0080adec0fa6c35f2f->m_frame.f_lineno = 222;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81faa84ffd9e5f0080adec0fa6c35f2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81faa84ffd9e5f0080adec0fa6c35f2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81faa84ffd9e5f0080adec0fa6c35f2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81faa84ffd9e5f0080adec0fa6c35f2f,
        type_description_1,
        par_listIn_,
        var__listToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_81faa84ffd9e5f0080adec0fa6c35f2f == cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f);
        cache_frame_81faa84ffd9e5f0080adec0fa6c35f2f = NULL;
    }

    assertFrameObject(frame_81faa84ffd9e5f0080adec0fa6c35f2f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__listToRtn_);
    tmp_return_value = var__listToRtn_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_listIn_);
    Py_DECREF(par_listIn_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_listIn_);
    Py_DECREF(par_listIn_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_ae27539faffc169a303425bc2f42a550;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae27539faffc169a303425bc2f42a550 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae27539faffc169a303425bc2f42a550)) {
        Py_XDECREF(cache_frame_ae27539faffc169a303425bc2f42a550);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae27539faffc169a303425bc2f42a550 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae27539faffc169a303425bc2f42a550 = MAKE_FUNCTION_FRAME(codeobj_ae27539faffc169a303425bc2f42a550, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae27539faffc169a303425bc2f42a550->m_type_description == NULL);
    frame_ae27539faffc169a303425bc2f42a550 = cache_frame_ae27539faffc169a303425bc2f42a550;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae27539faffc169a303425bc2f42a550);
    assert(Py_REFCNT(frame_ae27539faffc169a303425bc2f42a550) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[13];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae27539faffc169a303425bc2f42a550, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae27539faffc169a303425bc2f42a550->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae27539faffc169a303425bc2f42a550, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae27539faffc169a303425bc2f42a550,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_ae27539faffc169a303425bc2f42a550 == cache_frame_ae27539faffc169a303425bc2f42a550) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae27539faffc169a303425bc2f42a550);
        cache_frame_ae27539faffc169a303425bc2f42a550 = NULL;
    }

    assertFrameObject(frame_ae27539faffc169a303425bc2f42a550);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_7f170bf5aa8ff30ea82fdae19c609423;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f170bf5aa8ff30ea82fdae19c609423 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f170bf5aa8ff30ea82fdae19c609423)) {
        Py_XDECREF(cache_frame_7f170bf5aa8ff30ea82fdae19c609423);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f170bf5aa8ff30ea82fdae19c609423 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f170bf5aa8ff30ea82fdae19c609423 = MAKE_FUNCTION_FRAME(codeobj_7f170bf5aa8ff30ea82fdae19c609423, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f170bf5aa8ff30ea82fdae19c609423->m_type_description == NULL);
    frame_7f170bf5aa8ff30ea82fdae19c609423 = cache_frame_7f170bf5aa8ff30ea82fdae19c609423;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f170bf5aa8ff30ea82fdae19c609423);
    assert(Py_REFCNT(frame_7f170bf5aa8ff30ea82fdae19c609423) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[14];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f170bf5aa8ff30ea82fdae19c609423, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f170bf5aa8ff30ea82fdae19c609423->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f170bf5aa8ff30ea82fdae19c609423, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f170bf5aa8ff30ea82fdae19c609423,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_7f170bf5aa8ff30ea82fdae19c609423 == cache_frame_7f170bf5aa8ff30ea82fdae19c609423) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f170bf5aa8ff30ea82fdae19c609423);
        cache_frame_7f170bf5aa8ff30ea82fdae19c609423 = NULL;
    }

    assertFrameObject(frame_7f170bf5aa8ff30ea82fdae19c609423);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_4ff9827439ecfcefdd654c5b4e4d161c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ff9827439ecfcefdd654c5b4e4d161c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ff9827439ecfcefdd654c5b4e4d161c)) {
        Py_XDECREF(cache_frame_4ff9827439ecfcefdd654c5b4e4d161c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ff9827439ecfcefdd654c5b4e4d161c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ff9827439ecfcefdd654c5b4e4d161c = MAKE_FUNCTION_FRAME(codeobj_4ff9827439ecfcefdd654c5b4e4d161c, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ff9827439ecfcefdd654c5b4e4d161c->m_type_description == NULL);
    frame_4ff9827439ecfcefdd654c5b4e4d161c = cache_frame_4ff9827439ecfcefdd654c5b4e4d161c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ff9827439ecfcefdd654c5b4e4d161c);
    assert(Py_REFCNT(frame_4ff9827439ecfcefdd654c5b4e4d161c) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[15];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ff9827439ecfcefdd654c5b4e4d161c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ff9827439ecfcefdd654c5b4e4d161c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ff9827439ecfcefdd654c5b4e4d161c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ff9827439ecfcefdd654c5b4e4d161c,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_4ff9827439ecfcefdd654c5b4e4d161c == cache_frame_4ff9827439ecfcefdd654c5b4e4d161c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ff9827439ecfcefdd654c5b4e4d161c);
        cache_frame_4ff9827439ecfcefdd654c5b4e4d161c = NULL;
    }

    assertFrameObject(frame_4ff9827439ecfcefdd654c5b4e4d161c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_02cbd4cf025d940eea82a0e416eaef83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02cbd4cf025d940eea82a0e416eaef83 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02cbd4cf025d940eea82a0e416eaef83)) {
        Py_XDECREF(cache_frame_02cbd4cf025d940eea82a0e416eaef83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02cbd4cf025d940eea82a0e416eaef83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02cbd4cf025d940eea82a0e416eaef83 = MAKE_FUNCTION_FRAME(codeobj_02cbd4cf025d940eea82a0e416eaef83, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02cbd4cf025d940eea82a0e416eaef83->m_type_description == NULL);
    frame_02cbd4cf025d940eea82a0e416eaef83 = cache_frame_02cbd4cf025d940eea82a0e416eaef83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02cbd4cf025d940eea82a0e416eaef83);
    assert(Py_REFCNT(frame_02cbd4cf025d940eea82a0e416eaef83) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[16];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02cbd4cf025d940eea82a0e416eaef83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02cbd4cf025d940eea82a0e416eaef83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02cbd4cf025d940eea82a0e416eaef83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02cbd4cf025d940eea82a0e416eaef83,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_02cbd4cf025d940eea82a0e416eaef83 == cache_frame_02cbd4cf025d940eea82a0e416eaef83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02cbd4cf025d940eea82a0e416eaef83);
        cache_frame_02cbd4cf025d940eea82a0e416eaef83 = NULL;
    }

    assertFrameObject(frame_02cbd4cf025d940eea82a0e416eaef83);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_7eb69cf223eab69729e5c213043d35af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7eb69cf223eab69729e5c213043d35af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7eb69cf223eab69729e5c213043d35af)) {
        Py_XDECREF(cache_frame_7eb69cf223eab69729e5c213043d35af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7eb69cf223eab69729e5c213043d35af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7eb69cf223eab69729e5c213043d35af = MAKE_FUNCTION_FRAME(codeobj_7eb69cf223eab69729e5c213043d35af, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7eb69cf223eab69729e5c213043d35af->m_type_description == NULL);
    frame_7eb69cf223eab69729e5c213043d35af = cache_frame_7eb69cf223eab69729e5c213043d35af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7eb69cf223eab69729e5c213043d35af);
    assert(Py_REFCNT(frame_7eb69cf223eab69729e5c213043d35af) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[17];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7eb69cf223eab69729e5c213043d35af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7eb69cf223eab69729e5c213043d35af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7eb69cf223eab69729e5c213043d35af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7eb69cf223eab69729e5c213043d35af,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_7eb69cf223eab69729e5c213043d35af == cache_frame_7eb69cf223eab69729e5c213043d35af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7eb69cf223eab69729e5c213043d35af);
        cache_frame_7eb69cf223eab69729e5c213043d35af = NULL;
    }

    assertFrameObject(frame_7eb69cf223eab69729e5c213043d35af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_4de638d796927bac9bd99e3a4bf29f72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4de638d796927bac9bd99e3a4bf29f72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4de638d796927bac9bd99e3a4bf29f72)) {
        Py_XDECREF(cache_frame_4de638d796927bac9bd99e3a4bf29f72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4de638d796927bac9bd99e3a4bf29f72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4de638d796927bac9bd99e3a4bf29f72 = MAKE_FUNCTION_FRAME(codeobj_4de638d796927bac9bd99e3a4bf29f72, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4de638d796927bac9bd99e3a4bf29f72->m_type_description == NULL);
    frame_4de638d796927bac9bd99e3a4bf29f72 = cache_frame_4de638d796927bac9bd99e3a4bf29f72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4de638d796927bac9bd99e3a4bf29f72);
    assert(Py_REFCNT(frame_4de638d796927bac9bd99e3a4bf29f72) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[18];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4de638d796927bac9bd99e3a4bf29f72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4de638d796927bac9bd99e3a4bf29f72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4de638d796927bac9bd99e3a4bf29f72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4de638d796927bac9bd99e3a4bf29f72,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_4de638d796927bac9bd99e3a4bf29f72 == cache_frame_4de638d796927bac9bd99e3a4bf29f72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4de638d796927bac9bd99e3a4bf29f72);
        cache_frame_4de638d796927bac9bd99e3a4bf29f72 = NULL;
    }

    assertFrameObject(frame_4de638d796927bac9bd99e3a4bf29f72);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_f6997110989cca73b31a9c0c2b522630;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6997110989cca73b31a9c0c2b522630 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6997110989cca73b31a9c0c2b522630)) {
        Py_XDECREF(cache_frame_f6997110989cca73b31a9c0c2b522630);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6997110989cca73b31a9c0c2b522630 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6997110989cca73b31a9c0c2b522630 = MAKE_FUNCTION_FRAME(codeobj_f6997110989cca73b31a9c0c2b522630, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6997110989cca73b31a9c0c2b522630->m_type_description == NULL);
    frame_f6997110989cca73b31a9c0c2b522630 = cache_frame_f6997110989cca73b31a9c0c2b522630;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6997110989cca73b31a9c0c2b522630);
    assert(Py_REFCNT(frame_f6997110989cca73b31a9c0c2b522630) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[19];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6997110989cca73b31a9c0c2b522630, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6997110989cca73b31a9c0c2b522630->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6997110989cca73b31a9c0c2b522630, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6997110989cca73b31a9c0c2b522630,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_f6997110989cca73b31a9c0c2b522630 == cache_frame_f6997110989cca73b31a9c0c2b522630) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6997110989cca73b31a9c0c2b522630);
        cache_frame_f6997110989cca73b31a9c0c2b522630 = NULL;
    }

    assertFrameObject(frame_f6997110989cca73b31a9c0c2b522630);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_218a2243c5337ac9eb79310ce3dab57e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_218a2243c5337ac9eb79310ce3dab57e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_218a2243c5337ac9eb79310ce3dab57e)) {
        Py_XDECREF(cache_frame_218a2243c5337ac9eb79310ce3dab57e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_218a2243c5337ac9eb79310ce3dab57e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_218a2243c5337ac9eb79310ce3dab57e = MAKE_FUNCTION_FRAME(codeobj_218a2243c5337ac9eb79310ce3dab57e, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_218a2243c5337ac9eb79310ce3dab57e->m_type_description == NULL);
    frame_218a2243c5337ac9eb79310ce3dab57e = cache_frame_218a2243c5337ac9eb79310ce3dab57e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_218a2243c5337ac9eb79310ce3dab57e);
    assert(Py_REFCNT(frame_218a2243c5337ac9eb79310ce3dab57e) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[20];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_218a2243c5337ac9eb79310ce3dab57e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_218a2243c5337ac9eb79310ce3dab57e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_218a2243c5337ac9eb79310ce3dab57e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_218a2243c5337ac9eb79310ce3dab57e,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_218a2243c5337ac9eb79310ce3dab57e == cache_frame_218a2243c5337ac9eb79310ce3dab57e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_218a2243c5337ac9eb79310ce3dab57e);
        cache_frame_218a2243c5337ac9eb79310ce3dab57e = NULL;
    }

    assertFrameObject(frame_218a2243c5337ac9eb79310ce3dab57e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_1d56747fc1f8f73fc85b82b0ec9b7e8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d)) {
        Py_XDECREF(cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d = MAKE_FUNCTION_FRAME(codeobj_1d56747fc1f8f73fc85b82b0ec9b7e8d, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d->m_type_description == NULL);
    frame_1d56747fc1f8f73fc85b82b0ec9b7e8d = cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d56747fc1f8f73fc85b82b0ec9b7e8d);
    assert(Py_REFCNT(frame_1d56747fc1f8f73fc85b82b0ec9b7e8d) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[21];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d56747fc1f8f73fc85b82b0ec9b7e8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d56747fc1f8f73fc85b82b0ec9b7e8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d56747fc1f8f73fc85b82b0ec9b7e8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d56747fc1f8f73fc85b82b0ec9b7e8d,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_1d56747fc1f8f73fc85b82b0ec9b7e8d == cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d);
        cache_frame_1d56747fc1f8f73fc85b82b0ec9b7e8d = NULL;
    }

    assertFrameObject(frame_1d56747fc1f8f73fc85b82b0ec9b7e8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_3451f82bc6acc2cf2e1784c9333eec9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3451f82bc6acc2cf2e1784c9333eec9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3451f82bc6acc2cf2e1784c9333eec9a)) {
        Py_XDECREF(cache_frame_3451f82bc6acc2cf2e1784c9333eec9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3451f82bc6acc2cf2e1784c9333eec9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3451f82bc6acc2cf2e1784c9333eec9a = MAKE_FUNCTION_FRAME(codeobj_3451f82bc6acc2cf2e1784c9333eec9a, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3451f82bc6acc2cf2e1784c9333eec9a->m_type_description == NULL);
    frame_3451f82bc6acc2cf2e1784c9333eec9a = cache_frame_3451f82bc6acc2cf2e1784c9333eec9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3451f82bc6acc2cf2e1784c9333eec9a);
    assert(Py_REFCNT(frame_3451f82bc6acc2cf2e1784c9333eec9a) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[22];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3451f82bc6acc2cf2e1784c9333eec9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3451f82bc6acc2cf2e1784c9333eec9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3451f82bc6acc2cf2e1784c9333eec9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3451f82bc6acc2cf2e1784c9333eec9a,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_3451f82bc6acc2cf2e1784c9333eec9a == cache_frame_3451f82bc6acc2cf2e1784c9333eec9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3451f82bc6acc2cf2e1784c9333eec9a);
        cache_frame_3451f82bc6acc2cf2e1784c9333eec9a = NULL;
    }

    assertFrameObject(frame_3451f82bc6acc2cf2e1784c9333eec9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_f0d8ea7e50b82bef235586866d220182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0d8ea7e50b82bef235586866d220182 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0d8ea7e50b82bef235586866d220182)) {
        Py_XDECREF(cache_frame_f0d8ea7e50b82bef235586866d220182);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0d8ea7e50b82bef235586866d220182 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0d8ea7e50b82bef235586866d220182 = MAKE_FUNCTION_FRAME(codeobj_f0d8ea7e50b82bef235586866d220182, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0d8ea7e50b82bef235586866d220182->m_type_description == NULL);
    frame_f0d8ea7e50b82bef235586866d220182 = cache_frame_f0d8ea7e50b82bef235586866d220182;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0d8ea7e50b82bef235586866d220182);
    assert(Py_REFCNT(frame_f0d8ea7e50b82bef235586866d220182) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[23];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0d8ea7e50b82bef235586866d220182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0d8ea7e50b82bef235586866d220182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d8ea7e50b82bef235586866d220182, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0d8ea7e50b82bef235586866d220182,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_f0d8ea7e50b82bef235586866d220182 == cache_frame_f0d8ea7e50b82bef235586866d220182) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0d8ea7e50b82bef235586866d220182);
        cache_frame_f0d8ea7e50b82bef235586866d220182 = NULL;
    }

    assertFrameObject(frame_f0d8ea7e50b82bef235586866d220182);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_c769601a8aaea8ea903b4b14ebf8b070;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c769601a8aaea8ea903b4b14ebf8b070 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c769601a8aaea8ea903b4b14ebf8b070)) {
        Py_XDECREF(cache_frame_c769601a8aaea8ea903b4b14ebf8b070);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c769601a8aaea8ea903b4b14ebf8b070 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c769601a8aaea8ea903b4b14ebf8b070 = MAKE_FUNCTION_FRAME(codeobj_c769601a8aaea8ea903b4b14ebf8b070, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c769601a8aaea8ea903b4b14ebf8b070->m_type_description == NULL);
    frame_c769601a8aaea8ea903b4b14ebf8b070 = cache_frame_c769601a8aaea8ea903b4b14ebf8b070;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c769601a8aaea8ea903b4b14ebf8b070);
    assert(Py_REFCNT(frame_c769601a8aaea8ea903b4b14ebf8b070) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[24];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c769601a8aaea8ea903b4b14ebf8b070, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c769601a8aaea8ea903b4b14ebf8b070->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c769601a8aaea8ea903b4b14ebf8b070, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c769601a8aaea8ea903b4b14ebf8b070,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_c769601a8aaea8ea903b4b14ebf8b070 == cache_frame_c769601a8aaea8ea903b4b14ebf8b070) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c769601a8aaea8ea903b4b14ebf8b070);
        cache_frame_c769601a8aaea8ea903b4b14ebf8b070 = NULL;
    }

    assertFrameObject(frame_c769601a8aaea8ea903b4b14ebf8b070);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_5c51f6cd70a915d7f0f557c240649566;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c51f6cd70a915d7f0f557c240649566 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c51f6cd70a915d7f0f557c240649566)) {
        Py_XDECREF(cache_frame_5c51f6cd70a915d7f0f557c240649566);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c51f6cd70a915d7f0f557c240649566 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c51f6cd70a915d7f0f557c240649566 = MAKE_FUNCTION_FRAME(codeobj_5c51f6cd70a915d7f0f557c240649566, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c51f6cd70a915d7f0f557c240649566->m_type_description == NULL);
    frame_5c51f6cd70a915d7f0f557c240649566 = cache_frame_5c51f6cd70a915d7f0f557c240649566;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c51f6cd70a915d7f0f557c240649566);
    assert(Py_REFCNT(frame_5c51f6cd70a915d7f0f557c240649566) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[25];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c51f6cd70a915d7f0f557c240649566, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c51f6cd70a915d7f0f557c240649566->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c51f6cd70a915d7f0f557c240649566, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c51f6cd70a915d7f0f557c240649566,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_5c51f6cd70a915d7f0f557c240649566 == cache_frame_5c51f6cd70a915d7f0f557c240649566) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c51f6cd70a915d7f0f557c240649566);
        cache_frame_5c51f6cd70a915d7f0f557c240649566 = NULL;
    }

    assertFrameObject(frame_5c51f6cd70a915d7f0f557c240649566);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_360464301ba44ab17f9eb915aaf18412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_360464301ba44ab17f9eb915aaf18412 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_360464301ba44ab17f9eb915aaf18412)) {
        Py_XDECREF(cache_frame_360464301ba44ab17f9eb915aaf18412);

#if _DEBUG_REFCOUNTS
        if (cache_frame_360464301ba44ab17f9eb915aaf18412 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_360464301ba44ab17f9eb915aaf18412 = MAKE_FUNCTION_FRAME(codeobj_360464301ba44ab17f9eb915aaf18412, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_360464301ba44ab17f9eb915aaf18412->m_type_description == NULL);
    frame_360464301ba44ab17f9eb915aaf18412 = cache_frame_360464301ba44ab17f9eb915aaf18412;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_360464301ba44ab17f9eb915aaf18412);
    assert(Py_REFCNT(frame_360464301ba44ab17f9eb915aaf18412) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[26];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_360464301ba44ab17f9eb915aaf18412, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_360464301ba44ab17f9eb915aaf18412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_360464301ba44ab17f9eb915aaf18412, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_360464301ba44ab17f9eb915aaf18412,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_360464301ba44ab17f9eb915aaf18412 == cache_frame_360464301ba44ab17f9eb915aaf18412) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_360464301ba44ab17f9eb915aaf18412);
        cache_frame_360464301ba44ab17f9eb915aaf18412 = NULL;
    }

    assertFrameObject(frame_360464301ba44ab17f9eb915aaf18412);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___MODE__ = python_pars[0];
    struct Nuitka_FrameObject *frame_5b9420b0f38f126b93b77ad13daa4d65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b9420b0f38f126b93b77ad13daa4d65 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b9420b0f38f126b93b77ad13daa4d65)) {
        Py_XDECREF(cache_frame_5b9420b0f38f126b93b77ad13daa4d65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b9420b0f38f126b93b77ad13daa4d65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b9420b0f38f126b93b77ad13daa4d65 = MAKE_FUNCTION_FRAME(codeobj_5b9420b0f38f126b93b77ad13daa4d65, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b9420b0f38f126b93b77ad13daa4d65->m_type_description == NULL);
    frame_5b9420b0f38f126b93b77ad13daa4d65 = cache_frame_5b9420b0f38f126b93b77ad13daa4d65;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b9420b0f38f126b93b77ad13daa4d65);
    assert(Py_REFCNT(frame_5b9420b0f38f126b93b77ad13daa4d65) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par___MODE__);
        tmp_and_left_value_1 = par___MODE__;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = mod_consts[27];
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b9420b0f38f126b93b77ad13daa4d65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b9420b0f38f126b93b77ad13daa4d65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b9420b0f38f126b93b77ad13daa4d65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b9420b0f38f126b93b77ad13daa4d65,
        type_description_1,
        par___MODE__
    );


    // Release cached frame if used for exception.
    if (frame_5b9420b0f38f126b93b77ad13daa4d65 == cache_frame_5b9420b0f38f126b93b77ad13daa4d65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b9420b0f38f126b93b77ad13daa4d65);
        cache_frame_5b9420b0f38f126b93b77ad13daa4d65 = NULL;
    }

    assertFrameObject(frame_5b9420b0f38f126b93b77ad13daa4d65);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___MODE__);
    Py_DECREF(par___MODE__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_details_ = python_pars[0];
    PyObject *par_message_ = python_pars[1];
    PyObject *var__listToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_439dc702b6b4d443c1b84330addc4653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_439dc702b6b4d443c1b84330addc4653 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_439dc702b6b4d443c1b84330addc4653)) {
        Py_XDECREF(cache_frame_439dc702b6b4d443c1b84330addc4653);

#if _DEBUG_REFCOUNTS
        if (cache_frame_439dc702b6b4d443c1b84330addc4653 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_439dc702b6b4d443c1b84330addc4653 = MAKE_FUNCTION_FRAME(codeobj_439dc702b6b4d443c1b84330addc4653, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_439dc702b6b4d443c1b84330addc4653->m_type_description == NULL);
    frame_439dc702b6b4d443c1b84330addc4653 = cache_frame_439dc702b6b4d443c1b84330addc4653;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_439dc702b6b4d443c1b84330addc4653);
    assert(Py_REFCNT(frame_439dc702b6b4d443c1b84330addc4653) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_details_);
        tmp_cmp_expr_left_1 = par_details_;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[31];
        tmp_assign_source_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_1;
            PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[32];
            PyList_SET_ITEM0(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[34];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyObject *tmp_format_value_3;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_format_spec_3;
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_message_);
                tmp_format_value_2 = par_message_;
                tmp_format_spec_2 = mod_consts[34];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_1;
                }
                tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
                Py_DECREF(tmp_expression_value_5);
                if (tmp_format_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_3 = mod_consts[34];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                Py_DECREF(tmp_format_value_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_list_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_2;
        tmp_list_element_2 = mod_consts[31];
        tmp_assign_source_2 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_string_concat_values_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_format_spec_7;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[35];
            PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[33]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_format_spec_4 = mod_consts[34];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_5;
                PyObject *tmp_format_spec_5;
                PyObject *tmp_format_value_6;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_format_spec_6;
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_message_);
                tmp_format_value_5 = par_message_;
                tmp_format_spec_5 = mod_consts[34];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_2;
                }
                tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[29]);
                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_2;
                }
                tmp_format_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_format_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_2;
                }
                tmp_format_spec_6 = mod_consts[34];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                Py_DECREF(tmp_format_value_6);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_string_concat_values_2);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_list_element_2 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 2, tmp_list_element_2);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[29]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[33]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_format_spec_7 = mod_consts[34];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_8;
                PyObject *tmp_format_spec_8;
                PyObject *tmp_format_value_9;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_format_spec_9;
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
                CHECK_OBJECT(par_details_);
                tmp_format_value_8 = par_details_;
                tmp_format_spec_8 = mod_consts[34];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_3;
                }
                tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[29]);
                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_3;
                }
                tmp_format_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_format_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_3;
                }
                tmp_format_spec_9 = mod_consts[34];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
                Py_DECREF(tmp_format_value_9);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "ooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_string_concat_values_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_list_element_2 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_3);
            Py_DECREF(tmp_string_concat_values_3);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_1 = "ooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 3, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_2;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_439dc702b6b4d443c1b84330addc4653, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_439dc702b6b4d443c1b84330addc4653->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_439dc702b6b4d443c1b84330addc4653, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_439dc702b6b4d443c1b84330addc4653,
        type_description_1,
        par_details_,
        par_message_,
        var__listToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_439dc702b6b4d443c1b84330addc4653 == cache_frame_439dc702b6b4d443c1b84330addc4653) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_439dc702b6b4d443c1b84330addc4653);
        cache_frame_439dc702b6b4d443c1b84330addc4653 = NULL;
    }

    assertFrameObject(frame_439dc702b6b4d443c1b84330addc4653);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__listToRtn_);
    tmp_return_value = var__listToRtn_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_details_);
    Py_DECREF(par_details_);
    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_details_);
    Py_DECREF(par_details_);
    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message_ = python_pars[0];
    PyObject *var__strToRtn_ = NULL;
    PyObject *var__listToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_34496747f20201dd1faebcffee0be565;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34496747f20201dd1faebcffee0be565 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_34496747f20201dd1faebcffee0be565)) {
        Py_XDECREF(cache_frame_34496747f20201dd1faebcffee0be565);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34496747f20201dd1faebcffee0be565 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34496747f20201dd1faebcffee0be565 = MAKE_FUNCTION_FRAME(codeobj_34496747f20201dd1faebcffee0be565, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34496747f20201dd1faebcffee0be565->m_type_description == NULL);
    frame_34496747f20201dd1faebcffee0be565 = cache_frame_34496747f20201dd1faebcffee0be565;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_34496747f20201dd1faebcffee0be565);
    assert(Py_REFCNT(frame_34496747f20201dd1faebcffee0be565) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[34];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_message_);
            tmp_format_value_2 = par_message_;
            tmp_format_spec_2 = mod_consts[34];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[34];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var__strToRtn_ == NULL);
        var__strToRtn_ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34496747f20201dd1faebcffee0be565, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34496747f20201dd1faebcffee0be565->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34496747f20201dd1faebcffee0be565, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34496747f20201dd1faebcffee0be565,
        type_description_1,
        par_message_,
        var__strToRtn_,
        var__listToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_34496747f20201dd1faebcffee0be565 == cache_frame_34496747f20201dd1faebcffee0be565) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34496747f20201dd1faebcffee0be565);
        cache_frame_34496747f20201dd1faebcffee0be565 = NULL;
    }

    assertFrameObject(frame_34496747f20201dd1faebcffee0be565);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[31];
        tmp_assign_source_2 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[36];
        PyList_SET_ITEM0(tmp_assign_source_2, 1, tmp_list_element_1);
        CHECK_OBJECT(var__strToRtn_);
        tmp_list_element_1 = var__strToRtn_;
        PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_2;
    }
    CHECK_OBJECT(var__listToRtn_);
    tmp_return_value = var__listToRtn_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__strToRtn_);
    Py_DECREF(var__strToRtn_);
    var__strToRtn_ = NULL;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_noLabel_ = python_pars[0];
    PyObject *par_message_ = python_pars[1];
    PyObject *par_yesLabel_ = python_pars[2];
    PyObject *var__listToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_83e584a16e7e3c2daada639aacf6ecd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83e584a16e7e3c2daada639aacf6ecd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_message_);
        tmp_cmp_expr_left_1 = par_message_;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[34];
        {
            PyObject *old = par_message_;
            assert(old != NULL);
            par_message_ = tmp_assign_source_1;
            Py_INCREF(par_message_);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_83e584a16e7e3c2daada639aacf6ecd6)) {
        Py_XDECREF(cache_frame_83e584a16e7e3c2daada639aacf6ecd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83e584a16e7e3c2daada639aacf6ecd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83e584a16e7e3c2daada639aacf6ecd6 = MAKE_FUNCTION_FRAME(codeobj_83e584a16e7e3c2daada639aacf6ecd6, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83e584a16e7e3c2daada639aacf6ecd6->m_type_description == NULL);
    frame_83e584a16e7e3c2daada639aacf6ecd6 = cache_frame_83e584a16e7e3c2daada639aacf6ecd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83e584a16e7e3c2daada639aacf6ecd6);
    assert(Py_REFCNT(frame_83e584a16e7e3c2daada639aacf6ecd6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[31];
        tmp_assign_source_2 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_string_concat_values_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_format_spec_7;
            PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
            tmp_tuple_element_1 = mod_consts[37];
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_format_value_1;
                PyObject *tmp_expression_value_1;
                PyObject *tmp_expression_value_2;
                PyObject *tmp_format_spec_1;
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyObject *tmp_format_value_3;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_format_spec_3;
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
                if (tmp_expression_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
                Py_DECREF(tmp_expression_value_1);
                if (tmp_format_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_1 = mod_consts[34];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
                Py_DECREF(tmp_format_value_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                CHECK_OBJECT(par_message_);
                tmp_format_value_2 = par_message_;
                tmp_format_spec_2 = mod_consts[34];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
                Py_DECREF(tmp_expression_value_3);
                if (tmp_format_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_3 = mod_consts[34];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
                Py_DECREF(tmp_format_value_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 483;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_list_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[38];
            PyList_SET_ITEM0(tmp_assign_source_2, 2, tmp_list_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[34];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_5;
                PyObject *tmp_format_spec_5;
                PyObject *tmp_format_value_6;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_format_spec_6;
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_noLabel_);
                tmp_format_value_5 = par_noLabel_;
                tmp_format_spec_5 = mod_consts[34];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                tmp_format_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[33]);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_format_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                tmp_format_spec_6 = mod_consts[34];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
                Py_DECREF(tmp_format_value_6);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_string_concat_values_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_list_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[39];
            PyList_SET_ITEM0(tmp_assign_source_2, 4, tmp_list_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[29]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_format_spec_7 = mod_consts[34];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_8;
                PyObject *tmp_format_spec_8;
                PyObject *tmp_format_value_9;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_format_spec_9;
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
                CHECK_OBJECT(par_yesLabel_);
                tmp_format_value_8 = par_yesLabel_;
                tmp_format_spec_8 = mod_consts[34];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[29]);
                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                tmp_format_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[33]);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_format_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                tmp_format_spec_9 = mod_consts[34];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
                Py_DECREF(tmp_format_value_9);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_string_concat_values_3);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_list_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_3);
            Py_DECREF(tmp_string_concat_values_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 5, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83e584a16e7e3c2daada639aacf6ecd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83e584a16e7e3c2daada639aacf6ecd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83e584a16e7e3c2daada639aacf6ecd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83e584a16e7e3c2daada639aacf6ecd6,
        type_description_1,
        par_noLabel_,
        par_message_,
        par_yesLabel_,
        var__listToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_83e584a16e7e3c2daada639aacf6ecd6 == cache_frame_83e584a16e7e3c2daada639aacf6ecd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83e584a16e7e3c2daada639aacf6ecd6);
        cache_frame_83e584a16e7e3c2daada639aacf6ecd6 = NULL;
    }

    assertFrameObject(frame_83e584a16e7e3c2daada639aacf6ecd6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__listToRtn_);
    tmp_return_value = var__listToRtn_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);
    par_message_ = NULL;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_message_);
    Py_DECREF(par_message_);
    par_message_ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_noLabel_);
    Py_DECREF(par_noLabel_);
    CHECK_OBJECT(par_yesLabel_);
    Py_DECREF(par_yesLabel_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_noLabel_);
    Py_DECREF(par_noLabel_);
    CHECK_OBJECT(par_yesLabel_);
    Py_DECREF(par_yesLabel_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename_ = python_pars[0];
    PyObject *par_rootDir_ = python_pars[1];
    PyObject *var__listToRtn_ = NULL;
    PyObject *var__dictToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_d4b90513d4b96818c7c5deddfa7f4dae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4b90513d4b96818c7c5deddfa7f4dae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d4b90513d4b96818c7c5deddfa7f4dae)) {
        Py_XDECREF(cache_frame_d4b90513d4b96818c7c5deddfa7f4dae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4b90513d4b96818c7c5deddfa7f4dae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4b90513d4b96818c7c5deddfa7f4dae = MAKE_FUNCTION_FRAME(codeobj_d4b90513d4b96818c7c5deddfa7f4dae, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4b90513d4b96818c7c5deddfa7f4dae->m_type_description == NULL);
    frame_d4b90513d4b96818c7c5deddfa7f4dae = cache_frame_d4b90513d4b96818c7c5deddfa7f4dae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4b90513d4b96818c7c5deddfa7f4dae);
    assert(Py_REFCNT(frame_d4b90513d4b96818c7c5deddfa7f4dae) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[40];
        tmp_assign_source_1 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
            CHECK_OBJECT(par_rootDir_);
            tmp_format_value_1 = par_rootDir_;
            tmp_format_spec_1 = mod_consts[34];
            tmp_list_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[42];
            PyList_SET_ITEM0(tmp_assign_source_1, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_1, 4, tmp_list_element_1);
            CHECK_OBJECT(par_filename_);
            tmp_format_value_2 = par_filename_;
            tmp_format_spec_2 = mod_consts[34];
            tmp_list_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 5, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4b90513d4b96818c7c5deddfa7f4dae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4b90513d4b96818c7c5deddfa7f4dae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4b90513d4b96818c7c5deddfa7f4dae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4b90513d4b96818c7c5deddfa7f4dae,
        type_description_1,
        par_filename_,
        par_rootDir_,
        var__listToRtn_,
        var__dictToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_d4b90513d4b96818c7c5deddfa7f4dae == cache_frame_d4b90513d4b96818c7c5deddfa7f4dae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4b90513d4b96818c7c5deddfa7f4dae);
        cache_frame_d4b90513d4b96818c7c5deddfa7f4dae = NULL;
    }

    assertFrameObject(frame_d4b90513d4b96818c7c5deddfa7f4dae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(mod_consts[44]);
        assert(var__dictToRtn_ == NULL);
        var__dictToRtn_ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var__listToRtn_);
        tmp_tuple_element_1 = var__listToRtn_;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var__dictToRtn_);
        tmp_tuple_element_1 = var__dictToRtn_;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    CHECK_OBJECT(var__dictToRtn_);
    Py_DECREF(var__dictToRtn_);
    var__dictToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename_);
    Py_DECREF(par_filename_);
    CHECK_OBJECT(par_rootDir_);
    Py_DECREF(par_rootDir_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename_);
    Py_DECREF(par_filename_);
    CHECK_OBJECT(par_rootDir_);
    Py_DECREF(par_rootDir_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename_ = python_pars[0];
    PyObject *par_rootDir_ = python_pars[1];
    PyObject *var__listToRtn_ = NULL;
    PyObject *var__dictToRtn_ = NULL;
    struct Nuitka_FrameObject *frame_f85387dd22c129e7bd1f474685a0b6a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f85387dd22c129e7bd1f474685a0b6a6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f85387dd22c129e7bd1f474685a0b6a6)) {
        Py_XDECREF(cache_frame_f85387dd22c129e7bd1f474685a0b6a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f85387dd22c129e7bd1f474685a0b6a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f85387dd22c129e7bd1f474685a0b6a6 = MAKE_FUNCTION_FRAME(codeobj_f85387dd22c129e7bd1f474685a0b6a6, module_CSCF$SUBM_D$_00_OS_VARS, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f85387dd22c129e7bd1f474685a0b6a6->m_type_description == NULL);
    frame_f85387dd22c129e7bd1f474685a0b6a6 = cache_frame_f85387dd22c129e7bd1f474685a0b6a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f85387dd22c129e7bd1f474685a0b6a6);
    assert(Py_REFCNT(frame_f85387dd22c129e7bd1f474685a0b6a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[40];
        tmp_assign_source_1 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
            CHECK_OBJECT(par_rootDir_);
            tmp_format_value_1 = par_rootDir_;
            tmp_format_spec_1 = mod_consts[34];
            tmp_list_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[41];
            PyList_SET_ITEM0(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[45];
            PyList_SET_ITEM0(tmp_assign_source_1, 3, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[43];
            PyList_SET_ITEM0(tmp_assign_source_1, 4, tmp_list_element_1);
            CHECK_OBJECT(par_filename_);
            tmp_format_value_2 = par_filename_;
            tmp_format_spec_2 = mod_consts[34];
            tmp_list_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 532;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 5, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var__listToRtn_ == NULL);
        var__listToRtn_ = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f85387dd22c129e7bd1f474685a0b6a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f85387dd22c129e7bd1f474685a0b6a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f85387dd22c129e7bd1f474685a0b6a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f85387dd22c129e7bd1f474685a0b6a6,
        type_description_1,
        par_filename_,
        par_rootDir_,
        var__listToRtn_,
        var__dictToRtn_
    );


    // Release cached frame if used for exception.
    if (frame_f85387dd22c129e7bd1f474685a0b6a6 == cache_frame_f85387dd22c129e7bd1f474685a0b6a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f85387dd22c129e7bd1f474685a0b6a6);
        cache_frame_f85387dd22c129e7bd1f474685a0b6a6 = NULL;
    }

    assertFrameObject(frame_f85387dd22c129e7bd1f474685a0b6a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(mod_consts[44]);
        assert(var__dictToRtn_ == NULL);
        var__dictToRtn_ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var__listToRtn_);
        tmp_tuple_element_1 = var__listToRtn_;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var__dictToRtn_);
        tmp_tuple_element_1 = var__dictToRtn_;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__listToRtn_);
    Py_DECREF(var__listToRtn_);
    var__listToRtn_ = NULL;
    CHECK_OBJECT(var__dictToRtn_);
    Py_DECREF(var__dictToRtn_);
    var__dictToRtn_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename_);
    Py_DECREF(par_filename_);
    CHECK_OBJECT(par_rootDir_);
    Py_DECREF(par_rootDir_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename_);
    Py_DECREF(par_filename_);
    CHECK_OBJECT(par_rootDir_);
    Py_DECREF(par_rootDir_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_02cbd4cf025d940eea82a0e416eaef83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7eb69cf223eab69729e5c213043d35af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4de638d796927bac9bd99e3a4bf29f72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6997110989cca73b31a9c0c2b522630,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_218a2243c5337ac9eb79310ce3dab57e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d56747fc1f8f73fc85b82b0ec9b7e8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3451f82bc6acc2cf2e1784c9333eec9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0d8ea7e50b82bef235586866d220182,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c769601a8aaea8ea903b4b14ebf8b070,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c51f6cd70a915d7f0f557c240649566,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08d7542f309ceb4aa990353dc12f96ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_360464301ba44ab17f9eb915aaf18412,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5b9420b0f38f126b93b77ad13daa4d65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_439dc702b6b4d443c1b84330addc4653,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34496747f20201dd1faebcffee0be565,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83e584a16e7e3c2daada639aacf6ecd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4b90513d4b96818c7c5deddfa7f4dae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f85387dd22c129e7bd1f474685a0b6a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f19da16dd5e75345e90424dc7cf067f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_98cf8ff0d36c1e87f59056462f625c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3494c05db052ee46f5bda63293932a8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb2503cbc850b21cae62b146948a6b19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81faa84ffd9e5f0080adec0fa6c35f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae27539faffc169a303425bc2f42a550,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f170bf5aa8ff30ea82fdae19c609423,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ff9827439ecfcefdd654c5b4e4d161c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CSCF$SUBM_D$_00_OS_VARS,
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

function_impl_code functable_CSCF$SUBM_D$_00_OS_VARS[] = {
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS,
    impl_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES,
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

    function_impl_code *current = functable_CSCF$SUBM_D$_00_OS_VARS;
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

    if (offset > sizeof(functable_CSCF$SUBM_D$_00_OS_VARS) || offset < 0) {
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
        functable_CSCF$SUBM_D$_00_OS_VARS[offset],
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
        module_CSCF$SUBM_D$_00_OS_VARS,
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
PyObject *modulecode_CSCF$SUBM_D$_00_OS_VARS(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("CSCF.SUBM_D._00_OS_VARS");

    // Store the module for future use.
    module_CSCF$SUBM_D$_00_OS_VARS = module;

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
        PRINT_STRING("CSCF.SUBM_D._00_OS_VARS: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CSCF.SUBM_D._00_OS_VARS: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CSCF.SUBM_D._00_OS_VARS: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initCSCF$SUBM_D$_00_OS_VARS\n");

    moduledict_CSCF$SUBM_D$_00_OS_VARS = MODULE_DICT(module_CSCF$SUBM_D$_00_OS_VARS);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_CSCF$SUBM_D$_00_OS_VARS,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_CSCF$SUBM_D$_00_OS_VARS,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[34]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_CSCF$SUBM_D$_00_OS_VARS,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_CSCF$SUBM_D$_00_OS_VARS,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_CSCF$SUBM_D$_00_OS_VARS,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_CSCF$SUBM_D$_00_OS_VARS);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_CSCF$SUBM_D$_00_OS_VARS);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_12743ebaffc135e47719afbe8f005b7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_2);
    }
    frame_12743ebaffc135e47719afbe8f005b7f = MAKE_MODULE_FRAME(codeobj_12743ebaffc135e47719afbe8f005b7f, module_CSCF$SUBM_D$_00_OS_VARS);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12743ebaffc135e47719afbe8f005b7f);
    assert(Py_REFCNT(frame_12743ebaffc135e47719afbe8f005b7f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[47];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[51], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_POSIXPATH();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[54];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[55];
        tmp_level_value_1 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS,
                mod_consts[54],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[58];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[60];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[62];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[65];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[67];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 12;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[70];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[71];
        tmp_level_value_7 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 16;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS,
                mod_consts[72],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[74];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[75];
        tmp_level_value_8 = mod_consts[56];
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 17;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS,
                mod_consts[76],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[76]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS,
                mod_consts[77],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[77]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS,
                mod_consts[79],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[79]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_17);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 25;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 26;
        tmp_assign_source_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[83]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[85]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[87]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[92]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_6;
        tmp_dict_key_1 = mod_consts[94];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[95]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_expression_value_7 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_expression_value_8 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[99]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[100];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[101]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_25);
    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_10;
        tmp_dict_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_dict_arg_value_1 == NULL)) {
            tmp_dict_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        assert(!(tmp_dict_arg_value_1 == NULL));
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[102]);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        Py_DECREF(tmp_iterable_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_11 = (PyObject *)moduledict_CSCF$SUBM_D$_00_OS_VARS;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[81]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 48;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_1);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_assign_source_26, 1, tmp_tuple_element_1);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_assign_source_26, 2, tmp_tuple_element_1);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_assign_source_26, 3, tmp_tuple_element_1);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_assign_source_26, 4, tmp_tuple_element_1);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_assign_source_26, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__1_E_SHORT_ENTRY();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_9);
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(37);
        {
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_tuple_element_45;
            PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_8);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_8);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_assign_source_28, 2, tmp_tuple_element_8);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_assign_source_28, 3, tmp_tuple_element_8);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_assign_source_28, 4, tmp_tuple_element_8);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_assign_source_28, 5, tmp_tuple_element_8);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_assign_source_28, 6, tmp_tuple_element_8);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_16);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_tuple_element_8);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_assign_source_28, 7, tmp_tuple_element_8);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_17);
            PyTuple_SET_ITEM(tmp_assign_source_28, 8, tmp_tuple_element_8);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_18);
            PyTuple_SET_ITEM(tmp_assign_source_28, 9, tmp_tuple_element_8);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_19);
            PyTuple_SET_ITEM(tmp_assign_source_28, 10, tmp_tuple_element_8);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_20);
            PyTuple_SET_ITEM(tmp_assign_source_28, 11, tmp_tuple_element_8);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_21);
            PyTuple_SET_ITEM(tmp_assign_source_28, 12, tmp_tuple_element_8);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_22);
            PyTuple_SET_ITEM(tmp_assign_source_28, 13, tmp_tuple_element_8);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_23);
            PyTuple_SET_ITEM(tmp_assign_source_28, 14, tmp_tuple_element_8);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_24);
            PyTuple_SET_ITEM(tmp_assign_source_28, 15, tmp_tuple_element_8);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_25);
            PyTuple_SET_ITEM(tmp_assign_source_28, 16, tmp_tuple_element_8);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_26);
            PyTuple_SET_ITEM(tmp_assign_source_28, 17, tmp_tuple_element_8);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_27);
            PyTuple_SET_ITEM(tmp_assign_source_28, 18, tmp_tuple_element_8);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_28);
            PyTuple_SET_ITEM(tmp_assign_source_28, 19, tmp_tuple_element_8);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[127]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_29);
            PyTuple_SET_ITEM(tmp_assign_source_28, 20, tmp_tuple_element_8);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_30);
            PyTuple_SET_ITEM(tmp_assign_source_28, 21, tmp_tuple_element_8);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_31);
            PyTuple_SET_ITEM(tmp_assign_source_28, 22, tmp_tuple_element_8);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_32);
            PyTuple_SET_ITEM(tmp_assign_source_28, 23, tmp_tuple_element_8);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_33);
            PyTuple_SET_ITEM(tmp_assign_source_28, 24, tmp_tuple_element_8);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[130]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_34);
            PyTuple_SET_ITEM(tmp_assign_source_28, 25, tmp_tuple_element_8);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_35);
            PyTuple_SET_ITEM(tmp_assign_source_28, 26, tmp_tuple_element_8);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_36);
            PyTuple_SET_ITEM(tmp_assign_source_28, 27, tmp_tuple_element_8);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[133]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_37);
            PyTuple_SET_ITEM(tmp_assign_source_28, 28, tmp_tuple_element_8);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_38);
            PyTuple_SET_ITEM(tmp_assign_source_28, 29, tmp_tuple_element_8);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[135]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_39);
            PyTuple_SET_ITEM(tmp_assign_source_28, 30, tmp_tuple_element_8);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_40);
            PyTuple_SET_ITEM(tmp_assign_source_28, 31, tmp_tuple_element_8);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_41);
            PyTuple_SET_ITEM(tmp_assign_source_28, 32, tmp_tuple_element_8);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[138]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_42);
            PyTuple_SET_ITEM(tmp_assign_source_28, 33, tmp_tuple_element_8);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_43);
            PyTuple_SET_ITEM(tmp_assign_source_28, 34, tmp_tuple_element_8);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_44);
            PyTuple_SET_ITEM(tmp_assign_source_28, 35, tmp_tuple_element_8);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_8, 1, tmp_tuple_element_45);
            PyTuple_SET_ITEM(tmp_assign_source_28, 36, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__2_E_PL_ENTRY();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_47);
        tmp_tuple_element_47 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_47);
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(31);
        {
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_46);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_48);
            PyTuple_SET_ITEM(tmp_assign_source_30, 1, tmp_tuple_element_46);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_49);
            PyTuple_SET_ITEM(tmp_assign_source_30, 2, tmp_tuple_element_46);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_50);
            PyTuple_SET_ITEM(tmp_assign_source_30, 3, tmp_tuple_element_46);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_51);
            PyTuple_SET_ITEM(tmp_assign_source_30, 4, tmp_tuple_element_46);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_52);
            PyTuple_SET_ITEM(tmp_assign_source_30, 5, tmp_tuple_element_46);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_53);
            PyTuple_SET_ITEM(tmp_assign_source_30, 6, tmp_tuple_element_46);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_tuple_element_46);
            goto tuple_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_assign_source_30, 7, tmp_tuple_element_46);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_55);
            PyTuple_SET_ITEM(tmp_assign_source_30, 8, tmp_tuple_element_46);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_56);
            PyTuple_SET_ITEM(tmp_assign_source_30, 9, tmp_tuple_element_46);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_57);
            PyTuple_SET_ITEM(tmp_assign_source_30, 10, tmp_tuple_element_46);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_58);
            PyTuple_SET_ITEM(tmp_assign_source_30, 11, tmp_tuple_element_46);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_59);
            PyTuple_SET_ITEM(tmp_assign_source_30, 12, tmp_tuple_element_46);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_60);
            PyTuple_SET_ITEM(tmp_assign_source_30, 13, tmp_tuple_element_46);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_61);
            PyTuple_SET_ITEM(tmp_assign_source_30, 14, tmp_tuple_element_46);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_62);
            PyTuple_SET_ITEM(tmp_assign_source_30, 15, tmp_tuple_element_46);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_63);
            PyTuple_SET_ITEM(tmp_assign_source_30, 16, tmp_tuple_element_46);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_64);
            PyTuple_SET_ITEM(tmp_assign_source_30, 17, tmp_tuple_element_46);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = mod_consts[143];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_65);
            PyTuple_SET_ITEM(tmp_assign_source_30, 18, tmp_tuple_element_46);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_66);
            PyTuple_SET_ITEM(tmp_assign_source_30, 19, tmp_tuple_element_46);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_67);
            PyTuple_SET_ITEM(tmp_assign_source_30, 20, tmp_tuple_element_46);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[127]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_68);
            PyTuple_SET_ITEM(tmp_assign_source_30, 21, tmp_tuple_element_46);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_69);
            PyTuple_SET_ITEM(tmp_assign_source_30, 22, tmp_tuple_element_46);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_70);
            PyTuple_SET_ITEM(tmp_assign_source_30, 23, tmp_tuple_element_46);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_71);
            PyTuple_SET_ITEM(tmp_assign_source_30, 24, tmp_tuple_element_46);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[130]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_72);
            PyTuple_SET_ITEM(tmp_assign_source_30, 25, tmp_tuple_element_46);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_73);
            PyTuple_SET_ITEM(tmp_assign_source_30, 26, tmp_tuple_element_46);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_74);
            PyTuple_SET_ITEM(tmp_assign_source_30, 27, tmp_tuple_element_46);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[133]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_75);
            PyTuple_SET_ITEM(tmp_assign_source_30, 28, tmp_tuple_element_46);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_76);
            PyTuple_SET_ITEM(tmp_assign_source_30, 29, tmp_tuple_element_46);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[135]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_46, 1, tmp_tuple_element_77);
            PyTuple_SET_ITEM(tmp_assign_source_30, 30, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__3_E_ENTRY();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_tuple_element_79;
        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_tuple_element_79 == NULL)) {
            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_tuple_element_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_79);
        tmp_tuple_element_79 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_79);
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_tuple_element_85;
            PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_78);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_80);
            PyTuple_SET_ITEM(tmp_assign_source_32, 1, tmp_tuple_element_78);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[147]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_81);
            tmp_tuple_element_81 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_81);
            PyTuple_SET_ITEM(tmp_assign_source_32, 2, tmp_tuple_element_78);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_82);
            PyTuple_SET_ITEM(tmp_assign_source_32, 3, tmp_tuple_element_78);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_83);
            PyTuple_SET_ITEM(tmp_assign_source_32, 4, tmp_tuple_element_78);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_84);
            PyTuple_SET_ITEM(tmp_assign_source_32, 5, tmp_tuple_element_78);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_78 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_tuple_element_78, 1, tmp_tuple_element_85);
            PyTuple_SET_ITEM(tmp_assign_source_32, 6, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_32);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__4_E_MEDIA();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_86;
        PyObject *tmp_tuple_element_87;
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_87 == NULL)) {
            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_tuple_element_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_87);
        tmp_tuple_element_87 = mod_consts[155];
        PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_87);
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_tuple_element_93;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_tuple_element_95;
            PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_86);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = mod_consts[157];
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_88);
            PyTuple_SET_ITEM(tmp_assign_source_34, 1, tmp_tuple_element_86);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = Py_False;
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_89);
            PyTuple_SET_ITEM(tmp_assign_source_34, 2, tmp_tuple_element_86);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = Py_True;
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_90);
            PyTuple_SET_ITEM(tmp_assign_source_34, 3, tmp_tuple_element_86);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_91);
            tmp_tuple_element_91 = mod_consts[161];
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_91);
            PyTuple_SET_ITEM(tmp_assign_source_34, 4, tmp_tuple_element_86);
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_tuple_element_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_92);
            tmp_tuple_element_92 = Py_True;
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_92);
            PyTuple_SET_ITEM(tmp_assign_source_34, 5, tmp_tuple_element_86);
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[163]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
            }

            if (tmp_tuple_element_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_93);
            tmp_tuple_element_93 = mod_consts[164];
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_93);
            PyTuple_SET_ITEM(tmp_assign_source_34, 6, tmp_tuple_element_86);
            tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[165]);

            if (unlikely(tmp_tuple_element_94 == NULL)) {
                tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
            }

            if (tmp_tuple_element_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_94);
            tmp_tuple_element_94 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_94);
            PyTuple_SET_ITEM(tmp_assign_source_34, 7, tmp_tuple_element_86);
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[166]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
            }

            if (tmp_tuple_element_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_86 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 0, tmp_tuple_element_95);
            tmp_tuple_element_95 = Py_True;
            PyTuple_SET_ITEM0(tmp_tuple_element_86, 1, tmp_tuple_element_95);
            PyTuple_SET_ITEM(tmp_assign_source_34, 8, tmp_tuple_element_86);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[167]);


        tmp_assign_source_35 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__5_E_PL_CLASS_DICT(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_LIST1(mod_consts[177]);
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_41 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_42 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_42);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = LIST_COPY(mod_consts[180]);
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_44 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_45 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_45);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__6_sortDedupeList();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_LIST4(mod_consts[184]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_LIST11(mod_consts[186]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_LIST7(mod_consts[188]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_LIST4(mod_consts[190]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_LIST5(mod_consts[192]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_LIST2(mod_consts[194],mod_consts[195]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_LIST11(mod_consts[197]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_LIST2(mod_consts[199],mod_consts[200]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_LIST3(mod_consts[202],mod_consts[203],mod_consts[204]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_LIST2(mod_consts[206],mod_consts[195]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_56);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_1;
        tmp_list_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_list_arg_value_1 == NULL)) {
            tmp_list_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        assert(!(tmp_list_arg_value_1 == NULL));
        tmp_value_value_1 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_value_value_1 == NULL)) {
            tmp_value_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        assert(!(tmp_value_value_1 == NULL));
        tmp_result = LIST_EXTEND(tmp_list_arg_value_1, tmp_value_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[208]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 316;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[208]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 317;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 318;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = LIST_COPY(mod_consts[209]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_59);
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_value_value_2;
        tmp_list_arg_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_list_arg_value_2 == NULL)) {
            tmp_list_arg_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        assert(!(tmp_list_arg_value_2 == NULL));
        tmp_value_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_value_value_2 == NULL)) {
            tmp_value_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_value_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_result = LIST_EXTEND(tmp_list_arg_value_2, tmp_value_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[208]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 350;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[208]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 351;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 352;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_61);
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_value_value_3;
        tmp_list_arg_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_list_arg_value_3 == NULL)) {
            tmp_list_arg_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        assert(!(tmp_list_arg_value_3 == NULL));
        tmp_value_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_value_value_3 == NULL)) {
            tmp_value_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_value_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_result = LIST_EXTEND(tmp_list_arg_value_3, tmp_value_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[208]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 356;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[208]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 357;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[208]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 358;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[208]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 359;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[208]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 360;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[208]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 361;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 362;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_LIST4(mod_consts[213]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_LIST2(mod_consts[215],mod_consts[216]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;


        tmp_assign_source_65 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__7_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__8_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__9_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;


        tmp_assign_source_68 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__10_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;


        tmp_assign_source_69 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__11_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;


        tmp_assign_source_70 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__12_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__13_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__14_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__15_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__16_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__17_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__18_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__19_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__20_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__21_lambda();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[234]);


        tmp_assign_source_80 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__22_KD_ERROR_DIALOG(tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = DICT_COPY(mod_consts[236]);
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__23_KD_WARNING_DIALOG_LIST();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_kw_defaults_2;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[239]);


        tmp_assign_source_83 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__24_KD_TWO_BTN_DIALOG(tmp_kw_defaults_2);

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__25_SP_FIND_DIRS();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;


        tmp_assign_source_85 = MAKE_FUNCTION_CSCF$SUBM_D$_00_OS_VARS$$$function__26_SP_FIND_FILES();

        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[219];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[219]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_assign_source_86 = _PyDict_NewPresized( 39 );
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[220];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[221];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[222];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[222]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[222]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[223];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[237];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[170];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[172];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[144];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[109];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[174];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[176];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[212];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[201];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[187];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[189];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[193];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[211];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[198];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[205];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[191];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[196];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[207];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[210];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[224];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[225];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[226];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[226]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[227];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[228];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[228]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[228]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[217];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[214];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[214]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[179];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[182];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[181];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 621;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[229];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[229]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[230];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[230]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[231];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[232];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[233];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_86);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[238];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[238]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_assign_source_87 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[240];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[235];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[235]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[242];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_assign_source_88 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_88, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[237];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_assign_source_89 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_89, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_22;
        tmp_dict_key_6 = mod_consts[82];
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[82]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[29];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[86];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[61];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[63];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[59];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 653;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[64];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[53];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[66];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[68];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[69];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_90, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_90);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_90);
    }
    {
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_iterable_value_2;
        tmp_dict_arg_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_dict_arg_value_2 == NULL)) {
            tmp_dict_arg_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        assert(!(tmp_dict_arg_value_2 == NULL));
        tmp_iterable_value_2 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_iterable_value_2 == NULL)) {
            tmp_iterable_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_iterable_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        assert(PyDict_Check(tmp_dict_arg_value_2));
        if (HAS_ATTR_BOOL(tmp_iterable_value_2, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_2, tmp_iterable_value_2, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_2, tmp_iterable_value_2, 1);
        }

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[81]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 663;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[81]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[244]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 664;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[81]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 665;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[81]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[246]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 666;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[81]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[82]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        frame_12743ebaffc135e47719afbe8f005b7f->m_frame.f_lineno = 667;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12743ebaffc135e47719afbe8f005b7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12743ebaffc135e47719afbe8f005b7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12743ebaffc135e47719afbe8f005b7f, exception_lineno);
    }



    assertFrameObject(frame_12743ebaffc135e47719afbe8f005b7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("CSCF.SUBM_D._00_OS_VARS", false);

    Py_INCREF(module_CSCF$SUBM_D$_00_OS_VARS);
    return module_CSCF$SUBM_D$_00_OS_VARS;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CSCF$SUBM_D$_00_OS_VARS, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("CSCF$SUBM_D$_00_OS_VARS", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
