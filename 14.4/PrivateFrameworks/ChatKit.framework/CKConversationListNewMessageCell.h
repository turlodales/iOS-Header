//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CKAvatarView, CKConversation, NSObject, UIButton;
@protocol CKConversationListCellDelegate;

__attribute__((visibility("hidden")))
@interface CKConversationListNewMessageCell : UITableViewCell
{
    UIButton *_closeButton;
    CKAvatarView *_avatarView;
    NSObject<CKConversationListCellDelegate> *_delegate;
    CKConversation *_conversation;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak NSObject<CKConversationListCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)updateContentsForConversation:(id)arg1;
- (_Bool)showingEditControl;
- (double)leadingLayoutMargin;
- (id)avatarView;
- (void)deleteButtonTapped;
- (void)updateFontSize;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_boundsShouldCollapseContent:(struct CGRect)arg1;
- (_Bool)_isCollapsed;
- (void)_updateLabelVisibility;
- (void)layoutSubviews;
- (void)updateWithForwardedConfigurationState:(unsigned long long)arg1;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

