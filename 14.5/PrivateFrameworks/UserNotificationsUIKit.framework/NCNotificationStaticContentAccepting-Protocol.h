//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/PLTitled-Protocol.h>

@class NSArray, NSString, UIImage, UIView;

@protocol NCNotificationStaticContentAccepting <PLTitled>
@property(retain, nonatomic) NSArray *interfaceActions;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;

@optional
@property(nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;
@property(nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property(nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property(nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property(retain, nonatomic) UIView *accessoryView;
@property(retain, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSString *summaryText;
@end

