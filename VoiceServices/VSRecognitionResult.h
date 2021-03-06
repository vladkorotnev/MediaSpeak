/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x7cc0; S=0x7cac; 
+ (void)initialize;	// 0x7cf0
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x7d28
- (id)init;	// 0x7728
- (id)createHandler;	// 0x7b3c
- (id)description;	// 0x7cd0
- (int)elementCount;	// 0x7ae0
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x7af0
- (unsigned)hash;	// 0x7750
- (BOOL)isEqual:(id)equal;	// 0x7730
- (id)modelIdentifier;	// 0x7ad0
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x784c
- (oneway void)release;	// 0x7778
- (id)retain;	// 0x7760
- (unsigned)retainCount;	// 0x7788
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x7798
@end

