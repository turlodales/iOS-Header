//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer
{
    NSArray *_touchesForTap;
    double _touchBasedAllowableMovement;
}

- (void).cxx_destruct;
@property(nonatomic) double touchBasedAllowableMovement; // @synthesize touchBasedAllowableMovement=_touchBasedAllowableMovement;
@property(retain, nonatomic) NSArray *touchesForTap; // @synthesize touchesForTap=_touchesForTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

