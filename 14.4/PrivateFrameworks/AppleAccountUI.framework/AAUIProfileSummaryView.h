//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView
{
    UIImageView *_profileImageView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    _Bool _hidesPhoto;
    double _topPadding;
}

+ (double)desiredHeight;
- (void).cxx_destruct;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool hidesPhoto; // @synthesize hidesPhoto=_hidesPhoto;
- (void)layoutSubviews;
- (id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3;

@end

