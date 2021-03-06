//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsUI/NSCoding-Protocol.h>
#import <DataDetectorsUI/NSSecureCoding-Protocol.h>

@class CNContact, NSDictionary, NSString, NSURL, UIImage, UIViewController;
@protocol DDActionDelegate;

@interface DDAction : NSObject <NSCoding, NSSecureCoding>
{
    struct __DDResult *_result;
    struct __DDResult *_coalescedResult;
    struct __CFArray *_associatedResults;
    CNContact *_contact;
    NSString *_ics;
    UIViewController *_viewController;
    NSDictionary *_context;
    NSURL *_url;
    _Bool _cachedCoalescedResult;
    _Bool _cachedAssociatedResults;
    _Bool _isDefaultAction;
    _Bool _isCompanion;
    _Bool _hasCompanion;
    int _hostApplication;
    NSObject<DDActionDelegate> *_delegate;
}

+ (_Bool)actionAvailableForContact:(id)arg1;
+ (_Bool)isAvailable;
+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)actionsWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)actionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)encodableContextWithContext:(id)arg1;
+ (id)contextByAddingValue:(id)arg1 toKey:(id)arg2 inContext:(id)arg3;
+ (id)clientActionsDelegate;
+ (void)setClientActionsDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<DDActionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) int hostApplication; // @synthesize hostApplication=_hostApplication;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool companion; // @synthesize companion=_isCompanion;
@property(nonatomic) _Bool isDefaultAction; // @synthesize isDefaultAction=_isDefaultAction;
- (void)setupPopoverPresentationController:(id)arg1 view:(id)arg2;
- (id)displayNameForEmails:(id)arg1 phoneNumbers:(id)arg2;
- (void)invalidate;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (id)description;
- (void)addToRecents;
- (id)context;
@property(readonly, nonatomic) UIImage *icon;
- (id)generateIdentifier;
- (const struct __CFArray *)associatedResults;
- (struct __DDResult *)coalescedResult;
- (struct __DDResult *)result;
- (id)url;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)localizedSubItemName;
- (id)localizedName;
- (void)_copyURL:(id)arg1;
- (void)_copyStringOnly:(id)arg1;
- (void)_copyURL:(id)arg1 andString:(id)arg2;
@property(readonly, nonatomic) __weak DDAction *companionAction;
- (void)_performFromView:(id)arg1 byOpeningURL:(id)arg2 disableAppLink:(_Bool)arg3;
- (void)_performFromView:(id)arg1 byOpeningURL:(id)arg2;
- (void)performFromView:(id)arg1;
- (void)perform;
- (_Bool)canBePerformedWhenDeviceIsLocked;
- (_Bool)canBePerformedByOpeningURL;
- (_Bool)hasUserInterface;
- (int)interactionType;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

