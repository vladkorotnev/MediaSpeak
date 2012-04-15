/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {
	NSLock *_lock;
	NSMutableArray *_updateRequestQueue;
	NSDictionary *_dataProviders;
	NSTimer *_flushTimer;
	BOOL _isListening;
}
+ (id)sharedListener;	// 0xe9b0
+ (id)sharedListenerIfExists;	// 0xd924
- (id)init;	// 0xd91c
- (void)_enqueueRequest:(id)request;	// 0xe3f8
- (void)_flush;	// 0xe7a8
- (id)_initShared;	// 0xdedc
- (void)_spokenLanguageChanged:(id)changed;	// 0xdc10
- (void)dealloc;	// 0xde38
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0xdc34
- (void)startListening;	// 0xdf98
- (void)stopListening;	// 0xdcb0
@end

