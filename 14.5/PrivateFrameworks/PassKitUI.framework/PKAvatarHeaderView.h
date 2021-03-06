//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAvatarView, CNContact, NSString, UILabel;

@interface PKAvatarHeaderView : UIView
{
    CNAvatarView *_avatarView;
    CNContact *_contact;
    NSString *_counterpartHandle;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(copy, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(copy, nonatomic) NSString *counterpartHandle; // @synthesize counterpartHandle=_counterpartHandle;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)configureForContact;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 applyLayout:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithContact:(id)arg1 counterpartHandle:(id)arg2;

@end

