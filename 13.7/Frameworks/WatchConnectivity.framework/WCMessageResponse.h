//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/WCMessage.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding>
{
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

