//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface WFCircularImageView : UIImageView
{
    _Bool _circular;
    _Bool _hasBorder;
}

@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

