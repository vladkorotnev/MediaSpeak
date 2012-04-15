/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, VSRecognitionSession, NSString;

@interface VSRecognitionAction : NSObject {
@private
	NSString *_resultString;
	NSString *_statusString;
	union {
		NSString *stringValue;
		NSAttributedString *attributedStringValue;
	} _spokenString;
	VSRecognitionSession *_session;
	unsigned _spokenStringIsAttributed : 1;
}
@property(retain) id resultDisplayString;	// G=0xb2a8; S=0xb5b4; 
@property(retain) id spokenFeedbackAttributedString;	// G=0xb2d0; S=0xb394; 
@property(retain) id spokenFeedbackString;	// G=0xb4fc; S=0xb448; 
@property(retain) id statusDisplayString;	// G=0xb2bc; S=0xb558; 
- (void)_continueAfterDeferredStart;	// 0xb318
- (BOOL)_hasDeferredStartCallback;	// 0xb310
- (id)_session;	// 0xb280
- (void)_setSession:(id)session;	// 0xb294
- (id)cancel;	// 0xb308
- (void)completeWithNextAction:(id)nextAction error:(id)error;	// 0xb34c
- (int)completionType;	// 0xb300
- (void)dealloc;	// 0xb610
- (id)perform;	// 0xb6cc
- (BOOL)sensitiveActionsEnabled;	// 0xb31c
@end

