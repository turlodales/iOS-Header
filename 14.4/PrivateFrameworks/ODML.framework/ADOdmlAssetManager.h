//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APOdmlFeatureStorage, NSOperationQueue, NSString, TRIClient;

@interface ADOdmlAssetManager : NSObject
{
    TRIClient *_trialClient;
    APOdmlFeatureStorage *_featureStorage;
    NSObject *_featureStorageNotificationObserver;
    NSOperationQueue *_featureStorageRefreshQueue;
}

+ (id)sharedAssetManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *featureStorageRefreshQueue; // @synthesize featureStorageRefreshQueue=_featureStorageRefreshQueue;
@property(retain, nonatomic) NSObject *featureStorageNotificationObserver; // @synthesize featureStorageNotificationObserver=_featureStorageNotificationObserver;
@property(retain, nonatomic) APOdmlFeatureStorage *featureStorage; // @synthesize featureStorage=_featureStorage;
@property(readonly, nonatomic) TRIClient *trialClient; // @synthesize trialClient=_trialClient;
- (void)refreshFeatureStorage;
- (id)getFeatureVectorForName:(id)arg1;
- (void)saveFeatureFromObject:(id)arg1 withName:(id)arg2;
- (void)refreshTrialClient;
- (id)getStringValueForFactor:(id)arg1;
- (id)getBooleanValueForFactor:(id)arg1;
- (id)getLongValueForFactor:(id)arg1;
- (id)getDoubleValueForFactor:(id)arg1;
- (id)getPathForFactor:(id)arg1 isDirectory:(_Bool)arg2;
- (id)currentMLModel;
@property(readonly, nonatomic) int odmlVersion;
@property(readonly, nonatomic) NSString *odmlNamespace;
@property(readonly, nonatomic) NSString *treatmentID;
@property(readonly, nonatomic) NSString *experimentID;
@property(readonly, nonatomic) int deploymentID;
- (id)init;

@end

