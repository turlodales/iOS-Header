//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AKController, UIStackView;

@interface AKModernToolbarPicker : UIControl
{
    UIStackView *_stackview;
    AKController *_controller;
    long long _currentTag;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIStackView *stackview; // @synthesize stackview=_stackview;
- (void)revalidateItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

