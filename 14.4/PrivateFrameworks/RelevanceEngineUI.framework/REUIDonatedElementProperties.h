//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngineUI/NSCopying-Protocol.h>
#import <RelevanceEngineUI/NSSecureCoding-Protocol.h>

@class INIntent, INInteraction, INRelevantShortcut, NSString, NSUserActivity, UIImage;

@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying>
{
    UIImage *_bodyImage;
    _Bool _isUsingPlaceholderArtwork;
    _Bool _localDonation;
    _Bool _displayAppName;
    NSString *_bundleIdentifier;
    NSString *_remoteBundleIdentifier;
    NSString *_localBundleIdentifier;
    unsigned long long _donationType;
    unsigned long long _actionIdentifier;
    NSString *_appName;
    UIImage *_appIcon;
    UIImage *_fullsizeAppIcon;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_monochromeBodyImage;
    INInteraction *_interaction;
    NSUserActivity *_userActivity;
    INIntent *_intent;
    INRelevantShortcut *_relevantShortcut;
}

+ (_Bool)supportsSecureCoding;
+ (void)createWithDonatedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) INRelevantShortcut *relevantShortcut; // @synthesize relevantShortcut=_relevantShortcut;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) UIImage *monochromeBodyImage; // @synthesize monochromeBodyImage=_monochromeBodyImage;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool displayAppName; // @synthesize displayAppName=_displayAppName;
@property(readonly, nonatomic) UIImage *fullsizeAppIcon; // @synthesize fullsizeAppIcon=_fullsizeAppIcon;
@property(readonly, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) unsigned long long actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic, getter=isLocalDonation) _Bool localDonation; // @synthesize localDonation=_localDonation;
@property(readonly, nonatomic) unsigned long long donationType; // @synthesize donationType=_donationType;
@property(readonly, nonatomic) NSString *localBundleIdentifier; // @synthesize localBundleIdentifier=_localBundleIdentifier;
@property(readonly, nonatomic) NSString *remoteBundleIdentifier; // @synthesize remoteBundleIdentifier=_remoteBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)_loadAppContentPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_scaleImageForDisplay:(id)arg1;
- (void)_loadContentForRelevantShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadContentForUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadContentForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *bodyImageCompositingFilter;
@property(readonly, nonatomic) UIImage *bodyImage;
- (id)_placeholderImageNameForBundleID:(id)arg1;
@property(readonly, nonatomic) _Bool supportsBackgroundExecution;
- (_Bool)_hasLocalExtensionForIntentExecution;
@property(readonly, nonatomic) _Bool supportsLocalIntentExecution;
@property(readonly, nonatomic) _Bool requiresRemoteExecution;
- (_Bool)_isPodcastsDonation;
- (_Bool)_isMusicDonation;
@property(readonly, nonatomic) _Bool isRunWorkflowDonation;
@property(readonly, nonatomic) _Bool isEndWorkoutDonation;
@property(readonly, nonatomic) _Bool isBeginWorkoutDonation;
@property(readonly, nonatomic) _Bool isWorkoutDonation;
@property(readonly, nonatomic) _Bool isMediaDonation;
- (void)loadForAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

