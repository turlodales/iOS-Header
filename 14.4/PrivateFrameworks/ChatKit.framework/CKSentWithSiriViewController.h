//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class CKConversation, NSString, UIImageView, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface CKSentWithSiriViewController : UIViewController <UIScrollViewDelegate>
{
    CKConversation *_conversation;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_contextDescriptionLabel;
    UIImageView *_heroImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(retain, nonatomic) UILabel *contextDescriptionLabel; // @synthesize contextDescriptionLabel=_contextDescriptionLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)scrollViewDidScroll:(id)arg1;
- (id)inputAccessoryViewController;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (id)localizedStringWithLanguageCode:(id)arg1 format:(id)arg2;
- (id)_titleLabelText;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

