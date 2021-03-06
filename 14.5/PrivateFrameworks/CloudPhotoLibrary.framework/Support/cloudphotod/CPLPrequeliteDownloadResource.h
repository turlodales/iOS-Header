//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLResultSetInitializer-Protocol.h"

@class NSString;

@interface CPLPrequeliteDownloadResource : NSObject <PQLResultSetInitializer>
{
    int _retryCount;
    int _status;
    unsigned long long _position;
    long long _scopeIndex;
    NSString *_itemIdentifier;
    unsigned long long _resourceType;
    NSString *_fingerPrint;
    NSString *_fileUTI;
    unsigned long long _fileSize;
    unsigned long long _taskIdentifier;
    unsigned long long _intent;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long scopeIndex; // @synthesize scopeIndex=_scopeIndex;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (id)resourceWithDownloadQueue:(id)arg1;
- (id)initWithResource:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

