//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIdleTimerBase.h>

@interface SBDisabledIdleTimer : SBIdleTimerBase
{
    _Bool _activated;
}

- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (void)reset;
- (_Bool)isDisabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

