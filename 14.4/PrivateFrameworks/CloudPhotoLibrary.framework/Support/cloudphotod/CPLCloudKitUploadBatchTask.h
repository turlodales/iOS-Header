//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportUploadBatchTask-Protocol.h"

@class CPLChangeBatch, CPLCloudKitScope, CPLEngineScope, NSDate, NSError, NSMutableSet, NSString, NSURL;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitUploadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportUploadBatchTask>
{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    NSMutableSet *_autoRejectClasses;
    NSMutableSet *_autoRejectRecordIdentifiers;
    NSError *_autoError;
    double _approximativeResourcesUploadRate;
    CPLCloudKitScope *_cloudKitScope;
    CPLEngineScope *_scope;
    CPLChangeBatch *_batch;
    NSURL *_tempCKAssetURL;
    NSDate *_cplEnabledDate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *cplEnabledDate; // @synthesize cplEnabledDate=_cplEnabledDate;
@property(copy, nonatomic) NSURL *tempCKAssetURL; // @synthesize tempCKAssetURL=_tempCKAssetURL;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
@property(readonly, nonatomic) double approximativeResourcesUploadRate; // @synthesize approximativeResourcesUploadRate=_approximativeResourcesUploadRate;
- (void)runOperations;
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

