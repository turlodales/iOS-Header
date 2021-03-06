//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView
{
    NSMutableArray *_keylines;
    unsigned long long _direction;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (struct UIEdgeInsets)templatedContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)setCardSectionSubviews:(id)arg1;
- (void)triggerLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateLayout;
- (void)setDirection:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

