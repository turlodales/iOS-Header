//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage
{
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
- (unsigned long long)type;
- (id)initWithDescriptor:(id)arg1;

@end

