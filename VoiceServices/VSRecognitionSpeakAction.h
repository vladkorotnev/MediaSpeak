/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VSRecognitionAction.h"

@class NSAttributedString, NSString;

@interface VSRecognitionSpeakAction : VSRecognitionAction {
	BOOL _shouldTerminate;
}
- (id)initWithSpokenFeedbackString:(id)spokenFeedbackString willTerminate:(BOOL)terminate;	// 0x128d8
- (int)completionType;	// 0x12894
- (id)perform;	// 0x128b0
@end

