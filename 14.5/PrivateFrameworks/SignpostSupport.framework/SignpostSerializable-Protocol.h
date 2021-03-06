//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol SignpostSerializable <NSObject>
+ (NSNumber *)serializationTypeNumber;
- (NSString *)humanReadableType;
- (NSDictionary *)humanReadableDictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeableDictionaryWithShouldRedact:(_Bool)arg1;
@end

