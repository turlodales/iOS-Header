//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <AvatarUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString;

@interface AVTTouchDownGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    _Bool _allowsTouchesToPassThrough;
    NSHashTable *_recognizersRequiredToFail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *recognizersRequiredToFail; // @synthesize recognizersRequiredToFail=_recognizersRequiredToFail;
@property(nonatomic) _Bool allowsTouchesToPassThrough; // @synthesize allowsTouchesToPassThrough=_allowsTouchesToPassThrough;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)_configure;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

