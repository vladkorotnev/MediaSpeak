export GO_EASY_ON_ME = 1
export THEOS_DEVICE_IP = 10.0.0.5
include theos/makefiles/common.mk

TWEAK_NAME = MediaSpeak
MediaSpeak_FILES = MediaSpeak.xm
MediaSpeak_FRAMEWORKS = UIKit
MediaSpeak_PRIVATE_FRAMEWORKS = VoiceServices

include $(THEOS_MAKE_PATH)/tweak.mk
