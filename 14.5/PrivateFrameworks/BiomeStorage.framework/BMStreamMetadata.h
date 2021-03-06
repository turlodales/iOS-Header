//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BiomeStorage/NSSecureCoding-Protocol.h>

@interface BMStreamMetadata : NSObject <NSSecureCoding>
{
    Class _eventDataClass;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) Class eventDataClass; // @synthesize eventDataClass=_eventDataClass;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualStreamMetadata:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithEventType:(Class)arg1;

@end

