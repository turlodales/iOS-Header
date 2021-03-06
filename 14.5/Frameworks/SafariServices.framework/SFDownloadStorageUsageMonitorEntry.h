//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSProgress, NSString, NSUUID;
@protocol SFDownloadStorageUsageMonitorEntryDelegate;

__attribute__((visibility("hidden")))
@interface SFDownloadStorageUsageMonitorEntry : NSObject
{
    NSUUID *_identifier;
    NSProgress *_progress;
    id _progressSubscriber;
    NSString *_destinationPath;
    NSData *_progressData;
    long long _cachedUsage;
    id <SFDownloadStorageUsageMonitorEntryDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFDownloadStorageUsageMonitorEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cachedUsage; // @synthesize cachedUsage=_cachedUsage;
@property(retain, nonatomic) NSData *progressData; // @synthesize progressData=_progressData;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)updateWithDictionaryRepresentation:(id)arg1;
- (void)_updateProgressSubscriptionWithData:(id)arg1;
- (void)_didLoseProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didGainProgress:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

