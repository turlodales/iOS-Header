//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <voiced_tts/NSObject-Protocol.h>

@class NSData, NSString;

@protocol VSSpeechCacheItem <NSObject>
- (id)initWithKey:(NSString *)arg1 data:(NSData *)arg2;
- (NSData *)serializedData;
- (NSString *)key;
@end

