//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen, UIWindowScene;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject>
{
    UIScreen *_screen;
    UIWindowScene *_canvas;
    id <UISplitKeyboardSource> _controller;
}

+ (id)supportForUIScene:(id)arg1;
+ (id)supportForScreen:(id)arg1;
@property(nonatomic) id <UISplitKeyboardSource> masterController;
- (void)_updatedController;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)dealloc;
- (id)_intendedCanvas;
@property(readonly) UIScreen *_intendedScreen;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

