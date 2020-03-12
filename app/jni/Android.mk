LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := RedBirdDLL
LOCAL_SRC_FILES := fastlz.c
include $(BUILD_SHARED_LIBRARY)