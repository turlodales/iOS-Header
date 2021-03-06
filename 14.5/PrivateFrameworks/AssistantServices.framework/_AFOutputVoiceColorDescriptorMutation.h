//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFOutputVoiceColorDescriptorMutating-Protocol.h>

@class AFOutputVoiceColorDescriptor, NSString;

@interface _AFOutputVoiceColorDescriptorMutation : NSObject <AFOutputVoiceColorDescriptorMutating>
{
    AFOutputVoiceColorDescriptor *_baseModel;
    NSString *_hexColor;
    NSString *_colorName;
    float _alpha;
    NSString *_localizedOutputVoiceColor;
    NSString *_localizedOutputVoice;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasHexColor:1;
        unsigned int hasColorName:1;
        unsigned int hasAlpha:1;
        unsigned int hasLocalizedOutputVoiceColor:1;
        unsigned int hasLocalizedOutputVoice:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setLocalizedOutputVoice:(id)arg1;
- (void)setLocalizedOutputVoiceColor:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setColorName:(id)arg1;
- (void)setHexColor:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

