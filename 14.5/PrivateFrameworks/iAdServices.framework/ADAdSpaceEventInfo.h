//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding>
{
    unsigned long long _screenfuls;
    unsigned long long _slotPosition;
    unsigned long long _reuseCount;
    long long _lastErrorCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) unsigned long long reuseCount; // @synthesize reuseCount=_reuseCount;
@property(nonatomic) unsigned long long slotPosition; // @synthesize slotPosition=_slotPosition;
@property(nonatomic) unsigned long long screenfuls; // @synthesize screenfuls=_screenfuls;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2;

@end

