//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI2/TSAXCustomReorderMessaging-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC7NewsUI27TagView : UIView <TSAXCustomReorderMessaging>
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *imageView;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *badgeView;
    MISSING_TYPE *accessoryView;
    MISSING_TYPE *contentAccessibilityElement;
    MISSING_TYPE *_notificationSwitch;
    MISSING_TYPE *_likeButton;
    MISSING_TYPE *_dislikeButton;
    MISSING_TYPE *isEditing;
    MISSING_TYPE *keyCommandBlocks;
    MISSING_TYPE *tsaxAccessibilityLabelForReordering;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *title;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *tsaxAccessibilityLabelForReordering;

@end

