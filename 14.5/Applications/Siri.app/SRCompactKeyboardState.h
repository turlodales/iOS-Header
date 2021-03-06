//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SRCompactKeyboardAnimation;

@interface SRCompactKeyboardState : NSObject <NSCopying>
{
    SRCompactKeyboardAnimation *_animation;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SRCompactKeyboardAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGRect frameForAnimation;
- (id)initWithKeyboardNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 animation:(id)arg2;

@end

