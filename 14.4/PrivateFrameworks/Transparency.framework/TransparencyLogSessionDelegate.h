//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSURLSessionDelegate-Protocol.h>

@class KTContextStore, KTLogClient, NSString, TransparencyManagedDataStore;
@protocol OS_dispatch_workloop;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate>
{
    KTContextStore *_contextStore;
    KTLogClient *_logClient;
    TransparencyManagedDataStore *_dataStore;
    NSObject<OS_dispatch_workloop> *_workloop;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property __weak KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) KTContextStore *contextStore; // @synthesize contextStore=_contextStore;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)handleDownloadRecordFailure:(id)arg1 task:(id)arg2 downloadMetadata:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)handleDownloadRecord:(id)arg1 downloadData:(id)arg2 downloadMetadata:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)initWithDataStore:(id)arg1 workloop:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

