//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LUIKeyboardStateListenerDelegate;

@interface LUIKeyboardStateListener : NSObject
{
    _Bool _isVisible;
    id <LUIKeyboardStateListenerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LUIKeyboardStateListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didHide:(id)arg1;
- (void)didShow:(id)arg1;
- (void)willHide:(id)arg1;
- (void)willShow:(id)arg1;
- (_Bool)isVisibleWithDelay:(double)arg1;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)init;

@end

