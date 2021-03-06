//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface ASDAppUsageStats : NSObject <NSCopying>
{
    _Bool _isExtensionUsage;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_clipBundleID;
    NSURL *_clipFullURL;
    NSString *_clipLaunchReason;
    NSString *_clipReferrerURL;
    NSString *_clipReferrerBundleID;
    NSString *_clipWebAppBundleID;
    NSString *_containingBundleID;
    NSDate *_endDate;
    long long _eventTime;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    NSDate *_lastEventEndDate;
    NSString *_launchReason;
    NSString *_sourceStream;
    NSDate *_startDate;
    long long _usageTime;
    long long _usageCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *sourceStream; // @synthesize sourceStream=_sourceStream;
@property(copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(copy, nonatomic) NSDate *lastEventEndDate; // @synthesize lastEventEndDate=_lastEventEndDate;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) _Bool isExtensionUsage; // @synthesize isExtensionUsage=_isExtensionUsage;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(nonatomic) long long eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *containingBundleID; // @synthesize containingBundleID=_containingBundleID;
@property(copy, nonatomic) NSString *clipWebAppBundleID; // @synthesize clipWebAppBundleID=_clipWebAppBundleID;
@property(copy, nonatomic) NSString *clipReferrerBundleID; // @synthesize clipReferrerBundleID=_clipReferrerBundleID;
@property(copy, nonatomic) NSString *clipReferrerURL; // @synthesize clipReferrerURL=_clipReferrerURL;
@property(copy, nonatomic) NSString *clipLaunchReason; // @synthesize clipLaunchReason=_clipLaunchReason;
@property(copy, nonatomic) NSURL *clipFullURL; // @synthesize clipFullURL=_clipFullURL;
@property(copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_formatTimeInternal:(long long)arg1;
- (id)_formatShortDate:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

