//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long deviceIdentifier;
@property(readonly, nonatomic) long long errorCode;
- (id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2;

@end

