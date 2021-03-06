//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView
{
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
    _Bool _enabled;
    _Bool _editing;
    double _edgeInset;
}

- (void).cxx_destruct;
@property(nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (double)_bounceValueForFraction:(double)arg1;
- (void)bounce;
- (void)_updateHandleImages;
- (id)_handleImages;
- (int)handleForPoint:(struct CGPoint)arg1 hitOffset:(double *)arg2;
- (_Bool)pointInsideRightHandle:(struct CGPoint)arg1;
- (struct CGRect)_rightHandleRect;
- (_Bool)pointInsideLeftHandle:(struct CGPoint)arg1;
- (struct CGRect)_leftHandleRect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

