/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>


@protocol VSRecognitionModelDataProvider <NSObject>
@optional
- (void)beginReportingChanges;
- (id)cacheValidityIdentifier;
- (BOOL)getValue:(id *)value weight:(int *)weight atIndex:(int)index forClassWithIdentifier:(id)identifier inModelWithIdentifier:(id)identifier5;
- (BOOL)isCacheValidityIdentifierValid:(id)valid;
- (id)phoneticValueAtIndex:(int)index forClassWithIdentifier:(id)identifier inModelWithIdentifier:(id)identifier3;
- (void)stopReportingChanges;
- (id)valueAtIndex:(int)index forClassWithIdentifier:(id)identifier inModelWithIdentifier:(id)identifier3;
@required
- (int)valueCountForClassWithIdentifier:(id)identifier inModelWithIdentifier:(id)identifier2;
@end
