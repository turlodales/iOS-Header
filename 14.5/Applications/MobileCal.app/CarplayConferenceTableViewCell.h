//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarplayDetailTableViewCell.h"

@class EKEvent, UIImage, UIImageView, UILabel;

@interface CarplayConferenceTableViewCell : CarplayDetailTableViewCell
{
    EKEvent *_event;
    UILabel *_label;
    UILabel *_subLabel;
    UIImageView *_icon;
    UIImage *_image;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFocused;
- (void)cellWasTapped;
- (void)updateWithEvent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

