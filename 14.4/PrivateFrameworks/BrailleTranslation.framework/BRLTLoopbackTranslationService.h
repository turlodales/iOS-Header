//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

__attribute__((visibility("hidden")))
@interface BRLTLoopbackTranslationService : BRLTTranslationService
{
    BRLTSLoopbackTranslationService *_loopbackService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BRLTSLoopbackTranslationService *loopbackService; // @synthesize loopbackService=_loopbackService;
- (_Bool)isLoopback;
- (id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3;

@end

