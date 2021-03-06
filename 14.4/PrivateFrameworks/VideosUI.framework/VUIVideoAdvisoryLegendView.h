//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, VUILabel, VUIVideoAdvisoryViewLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLegendView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;
    VUILabel *_legendNameLabel;
    VUILabel *_legendDescriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUILabel *legendDescriptionLabel; // @synthesize legendDescriptionLabel=_legendDescriptionLabel;
@property(retain, nonatomic) VUILabel *legendNameLabel; // @synthesize legendNameLabel=_legendNameLabel;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) NSString *legendDescription;
@property(copy, nonatomic) NSString *legendName;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)legendNameSizeThatFits:(struct CGSize)arg1;
- (id)initWithLayout:(id)arg1;

@end

