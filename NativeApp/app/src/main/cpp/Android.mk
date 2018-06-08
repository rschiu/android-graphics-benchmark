LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

AGQ_DIR := $(LOCAL_PATH)/../../../agq

LOCAL_MODULE := agq
LOCAL_EXPORT_C_INCLUDES := $(AGQ_DIR)/include
LOCAL_SRC_FILES := $(AGQ_DIR)/src/agq.cpp
LOCAL_CPPFLAGS += -std=c++11
LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)


include $(CLEAR_VARS)

LOCAL_MODULE := native-activity
LOCAL_SRC_FILES := main.cpp
LOCAL_CPPFLAGS += -std=c++11
LOCAL_LDLIBS := \
    -landroid \
    -lEGL \
    -lGLESv1_CM \
    -llog
LOCAL_WHOLE_STATIC_LIBRARIES := android_native_app_glue
LOCAL_SHARED_LIBRARIES := agq

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
