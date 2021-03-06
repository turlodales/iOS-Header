//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject
{
    SBButtonConsumerClient *_client;
    long long _buttonKind;
    unsigned long long _eventMask;
    long long _eventPriority;
}

- (void).cxx_destruct;
@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) long long buttonKind; // @synthesize buttonKind=_buttonKind;
@property(nonatomic) __weak SBButtonConsumerClient *client; // @synthesize client=_client;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

